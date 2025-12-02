#pragma once
#include <cstddef>

// Template argumnet deduction. Compilator looks at type of argument and fill in T
template <typename T, typename F>
void iter(T *array, const size_t arrLen, F func){
	for(size_t i = 0; i < arrLen; i++){
		func(array[i]);
	}
}
