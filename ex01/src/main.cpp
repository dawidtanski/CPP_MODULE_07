#include "../inc/iter.hpp"
#include <iostream>

	int increase(int i){
		return ++i;
	}

int main(void){
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;

	
	int array[] = {num1, num2, num3};
	for(int i = 0; i < 3; i++){
		std::cout << array[i] << std::endl;
		iter(array, 3, increase );
		std::cout << array[i] << std::endl;
	}

}