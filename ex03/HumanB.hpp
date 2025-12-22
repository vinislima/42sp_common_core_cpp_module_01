/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 17:23:45 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/21 17:26:44 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	_name;
		Weapon*	_weapon;

	public:
		HumanB(std::string name);
		~HumanB();

		void	setWeapon(Weapon& weapon);
		void	attack();
};

#endif
