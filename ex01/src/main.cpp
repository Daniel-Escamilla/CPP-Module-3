/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:13:47 by descamil          #+#    #+#             */
/*   Updated: 2025/04/30 20:56:13 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	alpha("Alpha");

	alpha.attack("Target 1");
	alpha.takeDamage(4);
	alpha.beRepaired(3);

	for (int i = 0; i < 10; ++i)
		alpha.attack("Dummy");

	alpha.beRepaired(1);
	alpha.takeDamage(20);
	alpha.attack("Final Target");

	return (0);
}
