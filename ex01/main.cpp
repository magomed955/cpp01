/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:29:20 by mmutsulk          #+#    #+#             */
/*   Updated: 2025/12/17 15:39:36 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	int N;
	std::string name;
	Zombie* horde;
	int i;

	std::cout << "Insert number of zombies: ";
	std::cin >> N;

	std::cout << "Name the zombies: ";
	std::cin >> name;

	horde = zombieHorde(N, name);
	if (!horde)
		return (1);

	i = 0;
	while (i < N)
	{
		horde[i].announce();
		i++;
	}

	delete[] horde;
	return (0);
}
