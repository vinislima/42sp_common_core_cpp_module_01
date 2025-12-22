/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 19:14:56 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/21 19:43:57 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

std::string	customReplace(std::string content, std::string s1, std::string s2)
{
	if (s1.empty())
		return content;

	std::string	result;
	size_t		startPos = 0;
	size_t		foundPos;

	while ((foundPos = content.find(s1, startPos)) != std::string::npos)
	{
		result.append(content, startPos, foundPos - startPos);
		result.append(s2);
		startPos = foundPos + s1.length();
	}
	result.append(content.substr(startPos));

	return result;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream	inFile(filename.c_str());
	if (!inFile.is_open())
	{
		std::cerr << "Error: Could not open file " << filename << std::endl;

		return 1;
	}

	std::string	content((std::istreambuf_iterator<char>(inFile)),
						std::istreambuf_iterator<char>());
	inFile.close();

	std::string	newContent = customReplace(content, s1, s2);

	std::string	outFilename = filename + ".replace";
	std::ofstream	outFile(outFilename.c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error: Could not create file " << outFilename << std::endl;
		return 1;
	}

	outFile << newContent;
	outFile.close();

	return 0;
}