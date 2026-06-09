/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 09:39:10 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/06/09 16:48:49 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Contact.hpp"

int	Contact::setFirstName(const std::string& firstName) {
	for (size_t i = 0; i < firstName.length(); i++)
	{
		if ((std::isalpha(firstName[i])) == 0)
		{
			std::cout << "Only valid inputs allowed" << std::endl;
			std::cout << std::endl;
			return (1);
		}
	}
	this->firstName = firstName;
	return (0);
}

int	Contact::setLastName(const std::string& lastName) {
	for(size_t i = 0; i < lastName.length(); i++)
	{
		if ((std::isalpha(lastName[i])) == 0)
		{
			std::cout << "Only valid inputs allowed" << std::endl;
			std::cout << std::endl;
			return (1);
		}
	}
	this->lastName = lastName;
	return (0);
}

int	Contact::setNickname(const std::string& nickname) {
	for(size_t i = 0; i < nickname.length(); i++)
	{
		if ((std::isalpha(nickname[i])) == 0)
		{
			std::cout << "Only valid inputs allowed" << std::endl;
			std::cout << std::endl;
			return (1);
		}
	}
	this->nickname = nickname;
	return (0);
}

int	Contact::setPhoneNumber(const std::string& phoneNumber) {
	for(size_t i = 0; i < phoneNumber.length(); i++)
	{
		if ((std::isdigit(phoneNumber[i])) == 0)
		{
			std::cout << "Only valid inputs allowed" << std::endl;
			std::cout << std::endl;
			return (1);
		}
	}
	this->phoneNumber = phoneNumber;
	return (0);
}

int	Contact::setDarkestSecret(const std::string& darkestSecret) {
	for(size_t i = 0; i < darkestSecret.length(); i++)
	{
		if ((std::isalpha(darkestSecret[i])) == 0)
		{
			std::cout << "Only valid inputs allowed" << std::endl;
			std::cout << std::endl;
			return (1);
		}
	}
	this->darkestSecret = darkestSecret;
	return (0);
}

std::string	Contact::getFirstName(void) const {
	return (this->firstName);
}

std::string	Contact::getLastName(void) const {
	return (this->lastName);
}

std::string	Contact::getNickname(void) const {
	return (this->nickname);
}

std::string	Contact::getPhoneNumber(void) const {
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const {
	return (this->darkestSecret);
}