#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

int     main(void)
{
	int 		i;
	int			contact_count;
	PhoneBook	book;
	std::string input;

	i = 0;
	contact_count = 0;
	while (1)
	{
		std::cout << "Enter the command: ";
		std::cin >> input;
		if (input == "EXIT")
			break;
		else if (input == "ADD")
		{
			book.book[i].ft_set_propertys();
			i++;
			if (contact_count < 8)
				contact_count++;
			if (i == 8)
				i = 0;
		}
		else if (input == "SEARCH")
		{
			if (contact_count == 0)
			{
				std::cout << "No contact" << std::endl;
				continue;
			}
			book.book->ft_get_propertys(book.book, contact_count);
		}
		else
			std::cout << "Invalid command\n";
	}
	return (0);
}