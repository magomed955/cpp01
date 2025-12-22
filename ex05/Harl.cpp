/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:50:35 by mmutsulk          #+#    #+#             */
/*   Updated: 2025/12/22 14:21:50 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::_debug(void)
{
    std::cout << "[DEBUG] I love having extra bacon for my burger. I really do!" << std::endl;
}

void Harl::_info(void)
{
    std::cout << "[INFO] I cannot believe adding extra bacon costs more money!" << std::endl;
}

void Harl::_warning(void)
{
    std::cout << "[WARNING] I think I deserve some extra bacon for free!" << std::endl;
}

void Harl::_error(void)
{
    std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
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
    std::cout << "[UNKNOWN] Level not recognized" << std::endl;
}
