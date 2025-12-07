#include "../inc/iter.hpp"
#include <iostream>

template <typename T>
void print(const T &x) {
    std::cout << x << " ";
}

void increment(int &n) {
    n++;
}

int main(void){
	int arr[] = {1, 2, 3, 4, 5};

	std::cout << "Before: ";
	iter(arr, 5, print<int>);
	std::cout << std::endl;

	iter(arr, 5, increment);

	std::cout << "After:  ";
	iter(arr, 5, print<int>);
	std::cout << std::endl;
    
    // Const array tests
	const int carr[] = {10, 20, 30};
	std::cout << "Const:  ";
	iter(carr, 3, print<int>);
	std::cout << std::endl;
    
	return 0;

}