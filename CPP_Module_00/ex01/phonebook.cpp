#include "phonebook.hpp"

int     main(void)
{
	int			contact_count;
	PhoneBook 	book[8];
	std::string input;

	contact_count = 0;
	while (1)
	{
		std::cout << "Enter the command: ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			break;
		else if (input == "ADD")
		{
			if (contact_count == 8)
			{
				std::cout << "You have reached your limit";
				continue;
			}
			book[contact_count].ft_set_propertys();
			contact_count++;
		}
		else if (input == "SEARCH")
		{
			if (contact_count == 0)
			{
				std::cout << "No contact" << std::endl;
				continue;
			}
			book->ft_get_propertys(book, contact_count);
		}
		else
			std::cout << "Invalid command\n";
	}
	return (0);
}