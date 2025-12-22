/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:57:16 by mmutsulk          #+#    #+#             */
/*   Updated: 2025/12/19 13:22:36 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie(std::string name);
		~Zombie();

		void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
