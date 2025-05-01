/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:13:20 by descamil          #+#    #+#             */
/*   Updated: 2025/05/01 20:47:57 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		ClapTrap(std::string name);
		~ClapTrap();

		std::string	getName() const;
		int			getEnergyPoints() const;
		int			getHitPoints() const;
		int			getAttackDamage() const;

		void		setName(std::string name);
		void		setEnergyPoints(int points);
		void		setHitPoints(int points);
		void		setAttackDamage(int points);

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif
