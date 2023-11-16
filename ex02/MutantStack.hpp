#pragma once
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <algorithm>
#include <stack>

template<typename T>
class	MutantStack : public std::stack<T, std::deque<T> >
{
	public:
		MutantStack();
		MutantStack(T data);
		MutantStack(MutantStack const &src);
		~MutantStack();
		MutantStack &operator=(MutantStack const &rhs);

		//iterators
		typedef	typename std::deque<T>::iterator iterator;
		typedef	typename std::deque<T>::const_iterator const_iterator;
		typedef	typename std::deque<T>::reverse_iterator reverse_iterator;
		typedef	typename std::deque<T>::const_reverse_iterator const_reverse_it;

		//iterator
		iterator	begin() {
			return (this->c.begin()); }
		iterator	end() {
			return (this->c.end()); }
		//const interator 
		const_iterator	cbegin() {
			return (this->c.cbegin()); };
		const_iterator	cend() {
			return (this->c.cend()); };
		//reverse iterator
		reverse_iterator	rbegin() {
			return (this->c.rbegin()); }
		reverse_iterator	rend() {
			return (this->c.rend()); }
		//const reverse iterator
		const_reverse_it	crbegin() {
			return (this->c.crbegin()); }
		const_reverse_it	crend() {
			return (this->c.crend()); }
};

#include "MutantStack.tpp"

#endif