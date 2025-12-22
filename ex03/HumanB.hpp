/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:39:30 by mmutsulk          #+#    #+#             */
/*   Updated: 2025/12/22 14:22:23 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon* _weapon;

public:
    HumanB(const std::string& name);
    void setWeapon(Weapon& weapon);
    void attack() const;
};

#endif
