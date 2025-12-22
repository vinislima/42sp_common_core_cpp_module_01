/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 13:57:53 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/21 14:21:45 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define NUM_ZOMBIES 5

int main()
{
	std::cout << "--- Creating Horde ---" << std::endl;
	Zombie* horde = zombieHorde(NUM_ZOMBIES, "HordeZomb");

	std::cout << "--- Announcing ---" << std::endl;
	for (int i = 0; i < NUM_ZOMBIES; i++)
	{
		horde[i].announce();
	}

	std::cout << "--- Deleting Horde ---" << std::endl;
	delete[] horde;

	return 0;
}