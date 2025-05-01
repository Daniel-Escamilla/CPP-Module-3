/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:13:47 by descamil          #+#    #+#             */
/*   Updated: 2025/05/01 19:43:34 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int main()
{
    // Creating ClapTrap object
    ClapTrap clapTrap("ClapTrap1");
    clapTrap.attack("Target 1");
    clapTrap.takeDamage(4);
    clapTrap.beRepaired(3);
    clapTrap.attack("Target 2");

    // Creating ScavTrap object
    ScavTrap scavTrap("ScavTrap1");
    scavTrap.attack("Target 3");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(5);
    scavTrap.guardGate();
    scavTrap.attack("Target 4");

    return 0;
}
