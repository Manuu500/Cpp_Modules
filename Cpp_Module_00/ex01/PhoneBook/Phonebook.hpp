#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include <iostream>
#include <string>
#include "Contact.hpp"

using namespace std;

class PhoneBook{
    private:
        Contact contacts[8];
        size_t 	contact_count;
		void	store_contact(Contact contact);
    public:
        PhoneBook();
        void	addContact();
		void	search_contact();
		void	printContacts(size_t contact_count);
		void	showContactInfo(size_t contact_count);
        std::size_t getContactCount() const;
};
#endif