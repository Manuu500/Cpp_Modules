/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 09:42:06 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/04/07 16:09:19 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Phonebook.hpp"
#include <iomanip>
#include <iostream>

PhoneBook::PhoneBook(void) {
	contact_count = 0;
}

std::size_t PhoneBook::getContactCount() const {
    return contact_count;
}

static std::string getFirstName(void)
{
    std::string firstName;
    std::cout << "Put first name" << std::endl;
    std::cin >> firstName; 
    return (firstName);
}

static std::string getLastName(void)
{
    std::string lastName;
    std::cout << "Put last name" << std::endl;
    std::cin >> lastName; 
    return (lastName);  
}

static std::string getNickname(void)
{
    std::string nick;
    std::cout << "Put nickname" << std::endl;
    std::cin >> nick;
    return (nick);   
}

static std::string getPhoneNumber(void)
{
    std::string phone;
    std::cout << "Put phone number" << std::endl;
    std::cin >> phone;
    return (phone);   
}

static std::string getDarkestSecret(void)
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

static std::string putFirstName(Contact *contacts, int i)
{
    std::string firstNameContact = contacts[i].getFirstName();

    if (firstNameContact.length() > 10)
        return firstNameContact.substr(0, 9) + ".";
    return firstNameContact;
}

static std::string putSecondName(Contact *contacts, int i)
{
    std::string secondNameContact = contacts[i].getLastName();

    if (secondNameContact.length() > 10)
        return secondNameContact.substr(0, 9) + ".";
    return secondNameContact;
}

static std::string putNickname(Contact *contacts, int i)
{
    std::string nick = contacts[i].getNickname();

    if (nick.length() > 10)
        return nick.substr(0, 9) + ".";
    return nick;
}

static std::string putPhoneNumber(Contact *contacts, int i)
{
    std::string nick = contacts[i].getPhoneNumber();

    if (nick.length() > 10)
        return nick.substr(0, 9) + ".";
    return nick;
}
static std::string putDarkestSecret(Contact *contacts, int i)
{
    std::string nick = contacts[i].getDarkestSecret();

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
    size_t option;
    
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
    std::cout << "Usuario a ver la informacion completa" << std::endl;
    std::cin >> option;
    if (option > contact_count || option < contact_count)
        std::cout << "Usuario no encontrado" << std::endl;
    for (size_t i = 0; i < contact_count; i++)
    {
        if (option == i)
        {
                std::cout << putFirstName(contacts, i) << std::endl;
                std::cout << putSecondName(contacts, i) << std::endl;
                std::cout << putNickname(contacts, i) << std::endl;
                std::cout << putPhoneNumber(contacts, i) << std::endl;
                std::cout << putDarkestSecret(contacts, i) << std::endl;
                std::cout << std::endl; 
        }
    }
    std::cout << std::endl;
    
}
