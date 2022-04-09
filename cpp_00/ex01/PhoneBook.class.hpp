#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#define CONTACT_NUM 8

#include "Contact.class.hpp"
#include <iomanip>

class PhoneBook
{
	private:
		Contact	arrContact[CONTACT_NUM];
		int		size;

	public:
		PhoneBook();
		~PhoneBook();
		void add_contact();
		void search_contact();
};

#endif