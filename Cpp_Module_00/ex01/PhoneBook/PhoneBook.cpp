#include "Phonebook.hpp"
#include <iomanip>


PhoneBook::PhoneBook(void) {
	contact_count = 0;
}

std::size_t PhoneBook::getContactCount() const {
    return contact_count;
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

static string putFirstName(Contact *contacts, int i)
{
    string firstNameContact = contacts[i].getFirstName();

    if (firstNameContact.length() > 10)
        return firstNameContact.substr(0, 9) + ".";
    return firstNameContact;
}

static string putSecondName(Contact *contacts, int i)
{
    string secondNameContact = contacts[i].getLastName();

    if (secondNameContact.length() > 10)
        return secondNameContact.substr(0, 9) + ".";
    return secondNameContact;
}

static string putNickname(Contact *contacts, int i)
{
    string nick = contacts[i].getNickname();

    if (nick.length() > 10)
        return nick.substr(0, 9) + ".";
    return nick;
}


void	PhoneBook::store_contact(Contact contact)
{
	if (contact_count < 8)
	{
		contacts[contact_count] = contact;
		contact_count++;
	}
}

void    PhoneBook::printContacts(size_t contact_count)
{
    std::cout << std::setw(10) << "Index" << "|"
            << std::setw(10) << "FirstName" << "|" 
            << std::setw(10) << "LastName" << "|" 
            << std::setw(10) << "Nickname" << "|" 
            << std::endl;
    for(size_t i = 0; i < contact_count; i++)
    {
        std::cout << std::setw (10) << i << "|" 
                << std::setw(10) << putFirstName(contacts, i) << "|" 
                << std::setw(10) << putSecondName(contacts, i) << "|" 
                << std::setw(10) << putNickname(contacts, i) << "|"
                << std::setw(10) << std::endl;     
    }
}
