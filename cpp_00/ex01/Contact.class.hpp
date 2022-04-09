#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
        std::string index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

    public:
		Contact();
		~Contact();
		std::string getIndex();
		std::string getFirstName();
		std::string getLastName();
		std::string getPhoneNumber();
		void fillContact();
};

#endif