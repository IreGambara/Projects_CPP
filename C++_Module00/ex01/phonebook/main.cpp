#include "contact.hpp"

int main(void)
{
	std::string cmd;
	Contact contact;

	std::cout << "WELECOME_TO_AWESOME_PHONE_BOOK!" << std::endl;
	while (!std::cin.eof())
	{
		std::cout << "COMMAND: ";
		std::getline(std::cin, cmd);
		std::transform(cmd.begin(), cmd.end(), cmd.begin(), toupper);
		if (cmd == "ADD")
			contact.Add();
		else if (cmd == "SEARCH")
		{
			contact.ShowAllContact();
			contact.Search();
		}
		else if (cmd == "EXIT")
			break;
		else
		{
			std::cout << "Error: wrong COMMAND" << std::endl;
			std::cout << "you can only use (ADD, SEARCH, EXIT)" << std::endl;
		}
	}
	return (0);
}