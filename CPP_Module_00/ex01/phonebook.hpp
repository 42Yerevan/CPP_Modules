#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
// #include <string>

class PhoneBook
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
	public:
		PhoneBook();
		~PhoneBook();
		void		ft_set_propertys(void);
		void		ft_get_propertys(PhoneBook book[8], int contact_count);
		std::string ft_get_first_name(void);
		std::string ft_get_last_name(void);
		std::string ft_get_nickname(void);
		std::string ft_get_login(void);
		std::string ft_get_postal_address(void);
		std::string ft_get_email_address(void);
		std::string ft_get_phone_number(void);
		std::string ft_get_birthday_date(void);
		std::string ft_get_favorite_meal(void);
		std::string ft_get_underwear_color(void);
		std::string ft_get_darkest_secret(void);
};

void 	ft_substr(std::string str);
void 	ft_print_info(PhoneBook book);
void 	ft_print(std::string key, std::string value);

#endif