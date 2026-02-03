#include "Phonebook.hpp"

PhoneBook::PhoneBook(void) {
	contact_count = 0;
}

static string getFirstName(void)
{
    std::string firstName;
    std::cout << "Put first name" << std::endl;
    std::cin >> firstName;
    return (firstName);
}

static string getLastName(void)
{
    std::string lastName;
    std::cout << "Put last name" << std::endl;
    std::cin >> lastName; 
    return (lastName);  
}

static string getNickname(void)
{
    std::string nick;
    std::cout << "Put nickname" << std::endl;
    std::cin >> nick;
    return (nick);   
}

static string getPhoneNumber(void)
{
    std::string phone;
    std::cout << "Put phone number" << std::endl;
    std::cin >> phone;
    return (phone);   
}

static string getDarkestSecret(void)
{
    std::string secret;
    std::cout << "Put darkest secret" << std::endl;
    std::cin >> secret;
    return (secret);   
}

void    PhoneBook::addContact(void)
{
    Contact newContact;
    
    newContact.setFirstName(getFirstName());
    newContact.setLastName(getLastName());
    newContact.setNickname(getNickname());
    newContact.setPhoneNumber(getPhoneNumber());
    newContact.setDarkestSecret(getDarkestSecret());
    store_contact(newContact);
}

void	PhoneBook::store_contact(const Contact& contact)
{
	if (contact_count < 8)
	{
		contacts[contact_count] = contact;
		contact_count++;
	}
}