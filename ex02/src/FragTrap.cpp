/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:50:24 by descamil          #+#    #+#             */
/*   Updated: 2025/05/07 14:01:10 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap " << getName() << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
	: ClapTrap(copy)
{
	
}
FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	if (this != &copy)
	{
		setName(copy.getName());
		setHitPoints(copy.getHitPoints());
		setEnergyPoints(copy.getEnergyPoints());
		setAttackDamage(copy.getAttackDamage());
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getName() << " destroyed" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " requests a high-five!" << std::endl;
}