#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void    PhoneBook::ft_set_propertys(void)
{
	std::string input;

	std::cout << "Enter first name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "Enter login: ";
	std::getline(std::cin, this->login);
	std::cout << "Enterpostal address: ";
	std::getline(std::cin, this->postal_address);
	std::cout << "Enter email address: ";
	std::getline(std::cin, this->email_address);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Enter birthday date: ";
	std::getline(std::cin, this->birthday_date);
	std::cout << "Enter favorit meal: ";
	std::getline(std::cin, this->favorite_meal);
	std::cout << "Enter underwear color: ";
	std::getline(std::cin, this->underwear_color);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
	std::cout << "The contact successfuly created" << std::endl;
}

void    PhoneBook::ft_get_propertys(PhoneBook book[8], int contact_count)
{
	int 			i;
	std::string 	index;

	i = 0;
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
		std::getline(std::cin, index);
		if (index.size() == 1 && index.at(0) >= '0' && index.at(0) + 1 <= contact_count + '0')
			break;
		std::cout << "Enter valid number" << std::endl;
		continue;
	}
	ft_print_info(book[atoi(index.c_str())]);
}

std::string PhoneBook::ft_get_first_name(void)
{
	return (this->first_name);
}

std::string PhoneBook::ft_get_last_name(void)
{
	return (this->last_name);
}

std::string PhoneBook::ft_get_nickname(void)
{
	return (this->nickname);
}

std::string PhoneBook::ft_get_login(void)
{
	return (this->login);
}

std::string PhoneBook::ft_get_postal_address(void)
{
	return (this->postal_address);
}

std::string PhoneBook::ft_get_email_address(void)
{
	return (this->email_address);
}

std::string PhoneBook::ft_get_phone_number(void)
{
	return (this->phone_number);
}

std::string PhoneBook::ft_get_birthday_date(void)
{
	return (this->birthday_date);
}

std::string PhoneBook::ft_get_favorite_meal(void)
{
	return (this->favorite_meal);
}

std::string PhoneBook::ft_get_underwear_color(void)
{
	return (this->underwear_color);
}

std::string PhoneBook::ft_get_darkest_secret(void)
{
	return (this->darkest_secret);
}