/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:13:47 by descamil          #+#    #+#             */
/*   Updated: 2025/05/01 21:27:29 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int main()
{
    ClapTrap    clapTrap("ClapTrap");
    ScavTrap    scavTrap("ScavTrap");
    FragTrap    fragTrap("FragTrap");
    DiamondTrap diamondTrap("DiamondTrap");

    std::cout << "ClapTrap" << std::endl;
    clapTrap.attack("target");
    clapTrap.takeDamage(10);
    clapTrap.beRepaired(10);

    std::cout << "ScavTrap" << std::endl;
    scavTrap.attack("target");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();

    std::cout << "FragTrap" << std::endl;
    fragTrap.attack("target");
    fragTrap.takeDamage(10);
    fragTrap.beRepaired(10);
    fragTrap.highFivesGuys();

    std::cout << "DiamondTrap" << std::endl;
    diamondTrap.attack("target");
    diamondTrap.takeDamage(10);
    diamondTrap.beRepaired(10);
    diamondTrap.whoAmI();

    return (0);

}

