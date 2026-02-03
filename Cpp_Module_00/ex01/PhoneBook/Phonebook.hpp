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
		void	store_contact(const Contact& contact);
    public:
        PhoneBook();
        void	addContact();
		void	search_contact();
		void	printContacts(size_t contact_count) const;
		void	showContactInfo(size_t contact_count) const;
};
#endif