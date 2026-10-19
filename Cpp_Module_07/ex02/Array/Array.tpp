/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 16:52:52 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/18 17:00:59 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T> Array<T>::Array() : array_size(0) {
  std::cout << "Array default constructor called!" << std::endl;
  this->array = NULL;
};

template <class T> Array<T>::Array(unsigned int n) : array_size(n) {
  std::cout << "Array constructor called!" << std::endl;
  this->array = new T[n];
};

template <class T> Array<T>::Array(const Array &other) {
  this->array = new T[other.size()];
  for (unsigned int i = 0; i < other.size(); i++)
    this->array[i] = other.array[i];
  this->array_size = other.array_size;
}

template <class T> Array<T> &Array<T>::operator=(const Array &other) {
  if (this == &other)
    return *this;
  delete[] this->array;
  this->array = new T[other.size()];
  for (unsigned int i = 0; i < other.size(); i++)
    this->array[i] = other.array[i];
  this->array_size = other.array_size;
  return *this;
}

template <class T> Array<T>::~Array() {
  delete[] this->array;
  std::cout << "Array destructor called!" << std::endl;
};

template <class T> unsigned int Array<T>::size() const {
  return this->array_size;
};

template <class T> T &Array<T>::operator[](unsigned int i) {
  if (i >= this->size())
    throw OutOfRange();
  return this->array[i];
};

template <class T> const T &Array<T>::operator[](unsigned int i) const {
  if (i >= this->size())
    throw OutOfRange();
  return this->array[i];
};

template <class T> const char *Array<T>::OutOfRange::what() const throw() {
  return "Array index out of bounds";
};
