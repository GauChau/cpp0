/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pbook.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <gchauvot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:47:42 by gchauvot          #+#    #+#             */
/*   Updated: 2025/01/27 15:38:05 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PBOOK_HPP
#define PBOOK_hPP
#include <iostream>
#include <cctype>
#include <string>

class PhoneBook
{
	Contact array[8];

	public :
		std::string ADD(std::string);
		std::string SEARCH(std::string);
		void EXIT();
};

std::string PhoneBook::ADD(std::string)
{

};

std::string PhoneBook::SEARCH(std::string)
{

};

void PhoneBook::EXIT(void)
{

};

class Contact
{
	std::string fname;
	std::string lname;
	std::string nickname;
	std::string pnumber;
	std::string secret;

	public:
	std::string get_fname();
	std::string get_lname();
	std::string get_nickname();
	std::string get_pnumber();
	std::string get_secret();

	void w_fname(std::string);
	void w_lname(std::string);
	void w_nickname(std::string);
	void w_pnumber(std::string);
	void w_secret(std::string);
};

#endif
