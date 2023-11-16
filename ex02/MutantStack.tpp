#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack(T data)
{
	this->_stack.push_back(data);
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &src)
{
	*this = src;
}

template<typename T>
MutantStack<T>::~MutantStack()
{

}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &rhs)
{
	*this = rhs;
}