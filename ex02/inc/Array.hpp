#pragma once

#include <iostream>
#include <exception>

template <typename T>
class Array{
	private:
		size_t _arrLen;
		T* _arr;
	public:
		// Default Constructor
		Array():_arrLen(0), _arr(NULL){}
		// Destuctor
		~Array(){
			delete[] _arr;
		};
		// Constructor
		// MAIN RULE - if you have "new" in class - you have
		// to have deep copy in cpy constructor
		Array(unsigned int n) : _arrLen(n){
			_arr = new  T[n]();
		};
		// Copy constructor
		Array(const Array &other): _arrLen(other._arrLen){
			_arr = new T[_arrLen];
			for(size_t i = 0; i < _arrLen; i++){
				_arr[i] = other._arr[i];
			}
		};


		Array& operator=(const Array &other){
			if (this != &other){
				delete[]_arr;
				_arrLen = other._arrLen;
				_arr = new T[_arrLen];

				for (size_t i = 0; i < _arrLen; i++){
					_arr[i] = other._arr[i];
				}
			}
			return *this;
		};

		// Subscript operator[] - array's elements acces
		T& operator[](size_t index){
			if (index >= _arrLen)
				throw std::exception();
			return _arr[index];
		}

		const T& operator[](size_t index) const{
			if (index >= _arrLen)
				throw std::exception();
			return _arr[index];
		}
		

		size_t size() const{
			return _arrLen;
		};
};