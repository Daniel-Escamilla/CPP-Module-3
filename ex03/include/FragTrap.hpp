/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:47:22 by descamil          #+#    #+#             */
/*   Updated: 2025/05/07 13:27:18 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap() {};
		~FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &copy);

		FragTrap(std::string name);

		void	highFivesGuys(void);
};

#endif