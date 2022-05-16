#include "phonebook.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

void    Contact::ft_set_propertys(void)
{
	std::cout << "Enter first name: ";
	std::cin >> this->first_name;
	std::cout << "Enter last name: ";
	std::cin >> this->last_name;
	std::cout << "Enter nickname: ";
	std::cin >> this->nickname;
	std::cout << "Enter phone number: ";
	std::cin >> this->phone_number;
	std::cout << "Enter darkest secret: ";
	std::cin >> this->darkest_secret;
	std::cout << "The contact successfuly created" << std::endl;
}

void    Contact::ft_get_propertys(Contact book[8], int contact_count)
{
	int 			i;
	int			 	index;

	i = 0;
	index = 0;
	std::cout << "     Index|" << "First Name|" << " Last Name|" << "  Nickname" << std::endl;
	while (i < contact_count)
	{
		std::cout << std::setw(10) << i << "|";
		ft_substr(book[i].first_name);
		std::cout << "|";
		ft_substr(book[i].last_name);
		std::cout << "|";
		ft_substr(book[i].nickname);
		std::cout << std::endl;
		i++;
	}
	std::cout << std::endl;
	while (1)
	{
		std::cout << "Enter the index: ";
		std::cin >> index;
		if (!std::cin.fail() && index >= 0 && index < contact_count)
			break;
		else
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
		}
		std::cout << "Enter valid number" << std::endl;
		continue;
	}
	ft_print_info(book[index]);
}

std::string Contact::ft_get_first_name(void)
{
	return (this->first_name);
}

std::string Contact::ft_get_last_name(void)
{
	return (this->last_name);
}

std::string Contact::ft_get_nickname(void)
{
	return (this->nickname);
}

std::string Contact::ft_get_phone_number(void)
{
	return (this->phone_number);
}

std::string Contact::ft_get_darkest_secret(void)
{
	return (this->darkest_secret);
}