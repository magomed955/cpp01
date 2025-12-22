/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 13:24:47 by mmutsulk          #+#    #+#             */
/*   Updated: 2025/12/22 14:22:02 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char **av)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;
	std::string		s1;
	std::string		s2;
	size_t			pos;
	
	if (ac != 4)
	{
		std::cerr << "Usage: ./sed <filename> s1 s2" << std::endl;
		return (1);
	}

	s1 = av[2];
	s2 = av[3];

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}

	infile.open(av[1]);
	if (!infile.is_open())
	{
		std::cerr << "Error: cannot open input file" << std::endl;
		return (1);
	}

	outfile.open((std::string(av[1]) + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: cannot create output file" << std::endl;
		infile.close();
		return (1);
	}

	while (std::getline(infile, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			outfile << line.substr(0, pos);
			outfile << s2;
			line = line.substr(pos + s1.length());
			pos = 0;
		}
		outfile << line;
		if (!infile.eof())
			outfile << std::endl;
	}

	infile.close();
	outfile.close();
	return (0);
}
