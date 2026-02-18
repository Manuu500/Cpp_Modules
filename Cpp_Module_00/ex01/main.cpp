#include <iostream>
#include <string>
#include <cstdlib>
#include "Contact.hpp"
#include "Phonebook.hpp"

using namespace std;

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