/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <gchauvot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:26:10 by gchauvot          #+#    #+#             */
/*   Updated: 2025/01/27 18:02:37 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include <iostream>
#include "pbook.hpp"

void PhoneBook::init(void)
{
	this->i = 0;
	this->total = 0;
}

std::string aligner(std::string src)
{
	int len;
	std::string line;

	line = src;

	if (line.length() > 10)
	{
		while (line.length() > 9)
		{
			line.pop_back();
		}
		line.insert(9, 1, '.');
	}
	else if(line.length() < 10)
	{
		line.insert(0, 10 - line.length(), ' ');
	}
	return (line);
}

void PhoneBook::ADD(void)
{
	std::string temp;
	if(this->i > 7)
		this->i = 0;

	std::cout << "ADD CONTACT\nfirstname: ";
	std::getline(std::cin, temp);
	this->array[i].w_fname(temp);

	std::cout << "lastname: ";
	std::getline(std::cin, temp);
	this->array[i].w_lname(temp);

	std::cout << "nickname: ";
	std::getline(std::cin, temp);
	this->array[i].w_nickname(temp);

	std::cout << "pnumber: ";
	std::getline(std::cin, temp);
	this->array[i].w_pnumber(temp);

	std::cout << "secret: ";
	std::getline(std::cin, temp);
	this->array[i].w_secret(temp);

	this->i++;
	this->total++;

}

void PhoneBook::SEARCH(std::string)
{
	int range;

	if(this->total < 8)
		range = i+1;
	else
		range = 8;
	std::cout << "|     index|first name| last name|  nickname|\n";
	for(int i = 0; i < range; i++)
	{

	}


}

void PhoneBook::EXIT(void)
{

}

int	main()
{
	PhoneBook joe;

	joe.init();
	joe.ADD();
	return 0;
}