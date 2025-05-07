/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:13:53 by descamil          #+#    #+#             */
/*   Updated: 2025/05/07 14:00:26 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << getName() << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_hitPoints = copy._hitPoints;
		_energyPoints = copy._energyPoints;
		_attackDamage = copy._attackDamage;
	}
	return (*this);
}

std::string	ClapTrap::getName() const
{
	return (_name);
}

int	ClapTrap::getEnergyPoints() const
{
	return (_energyPoints);
}

int	ClapTrap::getHitPoints() const
{
	return (_hitPoints);
}

int	ClapTrap::getAttackDamage() const
{
	return (_attackDamage);
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setEnergyPoints(int points)
{
	_energyPoints = points;
}

void	ClapTrap::setHitPoints(int points)
{
	_hitPoints = points;
}

void	ClapTrap::setAttackDamage(int damage)
{
	_attackDamage = damage;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage" << std::endl;
	}
	else if (_energyPoints == 0)
		std::cout << "Not enough energy points" << std::endl;
	else if (_hitPoints == 0)
		std::cout << "Not enough hit points" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << "is already destroyed" << std::endl;
		return ;
	}
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " takes " << amount << " point of damage.\n\tRemaining hit points: " << _hitPoints << std::endl; 
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repairs itself by " << amount << " points\n\tNew HP: " << _hitPoints << std::endl;
	}
	else if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " can't repair: is already destroyed" << std::endl;
	else if (_energyPoints == 0)
		std::cout << "ClapTrap " << _name << " can't repair: not enough energy" << std::endl;
}