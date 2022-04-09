#include "Contact.class.hpp"

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

Contact::~Contact(){
}

std::string Contact::getIndex(){
	return this->index;
}

std::string Contact::getFirstName(){
	return this->first_name;
}

std::string Contact::getLastName(){
	return this->last_name;
}

std::string Contact::getPhoneNumber(){
	return this->phone_number;
}

void Contact::fillContact(){
	while (this->first_name == ""){
		std::cout << "> First name: ";
		std::getline(std::cin, this->first_name);
	}
	while (this->last_name == ""){
		std::cout << "> Last name: ";
		std::getline(std::cin, this->last_name);
	}
	while (this->nickname == ""){
		std::cout << "> Nickname name: ";
		std::getline(std::cin, this->nickname);
	}
	while (this->phone_number == ""){
		std::cout << "> Phonenumber: ";
		std::getline(std::cin, this->phone_number);
	}
	while (this->darkest_secret == ""){
		std::cout << "> Darkest secret: ";
		std::getline(std::cin, this->darkest_secret);
	}	
}