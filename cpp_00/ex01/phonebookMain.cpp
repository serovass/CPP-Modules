#include <PhoneBook.class.hpp>

int main(void)
{
    PhoneBook   book;
    std::string cmd;
    bool        i;

    std::cout << "> Available commands: ADD, SEARCH and EXIT" << std::endl;
    i = true;
    while (i)
    {
        std::cout << "> ";
        std::getline(std::cin, cmd);
        if (cmd == "EXIT")
			i = false;
        else if (cmd == "ADD")
			book.add_contact();
		else if (cmd == "SEARCH")
			book.search_contact();
    }
    return 0;
}