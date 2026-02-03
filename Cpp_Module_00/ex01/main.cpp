#include <iostream>
#include <string>
#include "Contact.hpp"
#include "Phonebook.hpp"

using namespace std;

int main(void)
{
    size_t option = 0;
    PhoneBook newPhoneBook;
    std::cout << "Phonebook" << std::endl;
    std::cout << "\n";
    while (option != 3)
    {
        std::cout << "Choose your option uwu:" << std::endl;
        std::cout << "1 - Add new contact" << std::endl;
        std::cout << "2 - Search contact" << std::endl;
        std::cout << "3 - Exit" << std::endl;
        std::cout << "\n";
        std::cin >> option;
        switch(option)
        {
            case 1:
                newPhoneBook.addContact();
                break;
            case 2:
                break;
            case 3:
                std::cout << "Goodbye! 7u7" << std::endl;
                break;
            default:
                std::cout << "Invalid option" << std::endl;
                break;
        }
    }
    return 0;
}