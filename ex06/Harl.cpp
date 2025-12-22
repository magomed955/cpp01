/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:47:58 by mmutsulk          #+#    #+#             */
/*   Updated: 2025/12/22 14:21:27 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::_debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my burger. I really do!" << std::endl;
}

void Harl::_info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money!" << std::endl;
}

void Harl::_warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::_error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    typedef void (Harl::*HarlFunc)(void);
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    HarlFunc funcs[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*funcs[i])();
            return;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::filter(std::string level)
{
    int lvl = -1;
    if (level == "DEBUG") lvl = 0;
    else if (level == "INFO") lvl = 1;
    else if (level == "WARNING") lvl = 2;
    else if (level == "ERROR") lvl = 3;

    switch (lvl)
    {
        case 0: _debug();
        case 1: _info();
        case 2: _warning();
        case 3: _error(); break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
