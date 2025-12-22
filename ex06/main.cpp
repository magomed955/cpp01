/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:47:50 by mmutsulk          #+#    #+#             */
/*   Updated: 2025/12/22 14:21:20 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./harlFilter <LEVEL>" << std::endl;
        return 1;
    }

    Harl harl;
    harl.filter(argv[1]);

    return 0;
}
