/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:39:20 by mmutsulk          #+#    #+#             */
/*   Updated: 2025/12/22 14:22:14 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon) {}

void HumanA::attack() const
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
