/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:38:49 by mmutsulk          #+#    #+#             */
/*   Updated: 2025/12/22 14:22:34 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
    std::string _type;

public:
    Weapon(const std::string& type);
    const std::string& getType() const;
    void setType(const std::string& type);
};

#endif
