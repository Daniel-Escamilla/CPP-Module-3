/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:15:45 by descamil          #+#    #+#             */
/*   Updated: 2025/05/07 14:01:13 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	_name = name;
	setHitPoints(FragTrap::getHitPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap " << _name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
	: ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	_name = copy._name;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	if (this != &copy)
	{
		setName(copy.getName());
		setHitPoints(copy.getHitPoints());
		setEnergyPoints(copy.getEnergyPoints());
		setAttackDamage(copy.getAttackDamage());
		_name = copy._name; 
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " destroyed" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am " << _name << " and my ClapTrap name is " << getName() << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}