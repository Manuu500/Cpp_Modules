/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 09:38:13 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/30 09:38:19 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <string>
#include <cstdlib>
#include "Contact.hpp"
#include "Phonebook.hpp"

int main(void)
{
    std::string input;
    PhoneBook newPhoneBook;
    std::cout << "Phonebook" << std::endl;
    std::cout << "\n";
    while (!std::cin.eof())
    {
        std::cout << "Choose your option:" << std::endl;
        std::cout << "1 - Add new contact" << std::endl;
        std::cout << "2 - Search contact" << std::endl;
        std::cout << "3 - Exit" << std::endl;
        std::cout << "\n";
        std::cin >> input;

        int option = std::atoi(input.c_str());
        switch(option)
        {
            case 1:
                newPhoneBook.addContact();
                break;
            case 2:
                newPhoneBook.printContacts(newPhoneBook.getContactCount());
                break;
            case 3:
                std::cout << "Goodbye!" << std::endl;
                return (0);
            default:
                std::cout << "Invalid option" << std::endl;
                break;
        }
    }
    return 0;
}