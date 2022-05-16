#ifndef Contact_HPP
#define Contact_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact();
		~Contact();
		void		ft_set_propertys(void);
		void		ft_get_propertys(Contact book[8], int contact_count);
		std::string ft_get_first_name(void);
		std::string ft_get_last_name(void);
		std::string ft_get_nickname(void);
		std::string ft_get_phone_number(void);
		std::string ft_get_darkest_secret(void);
};

class PhoneBook
{
	private:
	public:
		PhoneBook();
		~PhoneBook();
		Contact	book[8];
};

void 	ft_substr(std::string str);
void 	ft_print_info(Contact book);
void 	ft_print(std::string key, std::string value);

#endif