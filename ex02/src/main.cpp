#include "../inc/Array.hpp"

int main(){
	try{

		// int *a = new int();
		// std::cout << *a;
	
		Array<int> arr1(2);
		const Array<int> arr1c(2);
		Array<int> arr3(2);
	
		// Testing subscript operator
		// std::cout << arr1[arr1.size() + 1];
		
		// Manipulating elements 
		std::cout << "Array after creation of Array instance: " << arr1[0] << "," << arr1[1] << std::endl;
		arr1[0] = 9;
		arr1[1] = 9;
		std::cout << "Array after initialization: " << arr1[0] << "," << arr1[1] << std::endl;

		// Const array
		std::cout << "Const array: " << arr1c[0] << "," << arr1c[1] << std::endl;

		// Copy constructor
		Array<int> arr2(arr1);
		std::cout << "Array made with copy constructor: " << arr2[0] << "," << arr2[1] << std::endl;

		// Copy assignment operator
		arr3 = arr1;
		std::cout << "Values set from arr1 to arr3 by copy assignment operator: " << arr3[0] << "," << arr3[1] << std::endl;

		// Deep copy tests - changing copies and checking if original one is untouched
		arr3[0] = 6;
		arr3[1] = 6;
		arr2[0] = 5;
		arr2[1] = 5;
		std::cout << "Checking if arr1 is untouched after manipulating copies: "
		<< arr1[0] << "," << arr1[1] << std::endl;

		std::cout << "\n=== TEST 7: Strings ===" << std::endl;
		Array<std::string> strs(3);
		strs[0] = "Hello";
		strs[1] = "World";
		strs[2] = "!";
		for (size_t i = 0; i < strs.size(); i++) {
			std::cout << strs[i] << " ";
		}
		std::cout << std::endl;

	} catch (std::exception &e){
		std::cout << " arr1[i] out of bounds" << std::endl;
	}

	return 0;
}