/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <gchauvot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:26:10 by gchauvot          #+#    #+#             */
/*   Updated: 2025/01/23 13:36:20 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	std::string joe = "la vache";

	if (argc == 1)
	{
		std::cout << joe << '\n';
	}
	return (0);
}