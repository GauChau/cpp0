/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pbook.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <gchauvot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:47:42 by gchauvot          #+#    #+#             */
/*   Updated: 2025/01/27 17:38:53 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PBOOK_HPP
# define PBOOK_HPP
# include <iostream>
# include <cctype>
# include <string>

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



class PhoneBook
{
	private:
		Contact array[8];
		int		i;
		int		total;
		std::string aligner(std::string);

	public :
		void init();
		void ADD();
		void SEARCH(std::string);
		void EXIT();
};

std::string get_fname(void);
std::string get_lname(void);
std::string get_nickname(void);
std::string get_pnumber(void);
std::string get_secret(void);

#endif
