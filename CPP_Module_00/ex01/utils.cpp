#include "phonebook.hpp"

void 	ft_substr(std::string str)
{
	if (str.length() >= 10)
	{
		std::cout << str.substr(0, 9) << ".";
		return;
	}
	std::cout << std::setw(10) << str;
}

void 	ft_print(std::string key, std::string value)
{
	std::cout << key << value << std::endl;
}

void 	ft_print_info(Contact book)
{
	ft_print("First Name       - ", book.ft_get_first_name());
	ft_print("Last Name        - ", book.ft_get_last_name());
	ft_print("Nickname         - ", book.ft_get_nickname());
	ft_print("Phone Number     - ", book.ft_get_phone_number());
	ft_print("Darkest Secret   - ", book.ft_get_darkest_secret());
}