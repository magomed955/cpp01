/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:56:40 by mmutsulk          #+#    #+#             */
/*   Updated: 2025/12/19 13:23:04 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* heapZombie;

	heapZombie = newZombie("HeapZombie");
	heapZombie->announce();

	randomChump("StackZombie");

	delete heapZombie;
	return 0;
}
