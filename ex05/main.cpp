/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 20:35:12 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/21 20:38:44 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "--- TEST 1: DEBUG ---" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "--- TEST 2: INFO---" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "--- TEST 3: WARNING ---" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "--- TEST 4: ERROR ---" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "--- TEST 5: INVALID ---" << std::endl;
	harl.complain("SDFSD");
	
	return 0;
}