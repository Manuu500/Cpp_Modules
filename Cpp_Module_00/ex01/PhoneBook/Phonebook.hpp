/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 09:42:14 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/30 09:47:18 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include <iostream>
#include <string>
#include "Contact.hpp"


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