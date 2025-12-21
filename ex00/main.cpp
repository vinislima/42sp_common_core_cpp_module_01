/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 21:45:49 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/20 21:49:57 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << "--- Testing Stack (randomChump) ---" << std::endl;
	randomChump("StackZomb");

	std::cout << std::endl << "--- Testing Heap (newZombie) ---" << std::endl;
	Zombie* heapZ = newZombie("HeapZomb");

	heapZ->announce();

	std::cout << "--- Deleting HeapZomb manually ---" << std::endl;
	delete heapZ;

	return 0;
}