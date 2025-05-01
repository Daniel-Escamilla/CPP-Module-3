/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:13:47 by descamil          #+#    #+#             */
/*   Updated: 2025/05/01 20:08:39 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

int main()
{
    ClapTrap clapTrap("ClapTrap");
    ScavTrap scavTrap("ScavTrap");
    FragTrap fragtrap("fragtrap");

    std::cout << "ClapTrap" << std::endl;
    clapTrap.attack("target");
    clapTrap.takeDamage(10);
    clapTrap.beRepaired(10);

    std::cout << "ScavTrap" << std::endl;
    scavTrap.attack("target");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();

    std::cout << "fragtrap" << std::endl;
    fragtrap.attack("target");
    fragtrap.takeDamage(10);
    fragtrap.beRepaired(10);
    fragtrap.highFivesGuys();

    return (0);

}

