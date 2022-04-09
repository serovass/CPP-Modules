#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook()
{
	this->size = 0;
	return ;
}

PhoneBook::~PhoneBook(){
}

void PhoneBook::add_contact()
{
	int i = 0;
	Contact contact;

	contact.fillContact();
	while (i < this->size)
		i++;
	if (i == 8)
	{
		i = 0;
		while (i < CONTACT_NUM - 1)
		{
			this->arrContact[i] = this->arrContact[i + 1];
			i++;
		}
	}
    else
        this->size += 1;
	this->arrContact[i] = contact;
}

static std::string	cutLineDot(std::string line)
{
	if (line.length() >= 10)
		line = line.substr(0, 9).append(".");
	return (line);
}

static void display_head()
{
	std::cout << std::endl;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
}

static void display_contact(int index, Contact contact)
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << cutLineDot(contact.Contact::getFirstName()) << "|";
	std::cout << std::setw(10) << cutLineDot(contact.Contact::getLastName()) << "|";
	std::cout << std::setw(10) << cutLineDot(contact.Contact::getPhoneNumber()) << "|";
	std::cout << std::endl;
}

static void display_phonebook(int size, Contact *arrContact)
{
	display_head();
	for (int i = 0; i < size; i++)
	{
		display_contact(i + 1, arrContact[i]);
	}
	std::cout << std::endl;
}

void PhoneBook::search_contact()
{
	int	index = 0;

	if (this->size == 0)
		std::cout << "> There is no contacts!" << std::endl;
	else
	{
		display_phonebook(this->size, this->arrContact);
		std::cout << "> Index: ";
		while (!(std::cin >> index) || (index < 1 || index > this->size))
		{
			std::cin.clear();
			std::cin.ignore(10000,'\n');
			std::cout <<"> Index does not exist!" << std::endl;
			std::cout << "> Index: ";
		}
		std::cin.clear();
		std::cin.ignore(10000,'\n');
		display_head();
		display_contact(index, this->arrContact[index - 1]);
		std::cout << std::endl;
	}
}
