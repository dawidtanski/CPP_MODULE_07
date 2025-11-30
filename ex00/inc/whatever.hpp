#pragma once

// Template is like recipe, where type of data is a parameter
template <typename T>
void swap(T &param1, T &param2){
	T temp = param1;
	param1 = param2;
	param2 = temp;
}

template <typename T>
T min(T &val_1, T &val_2){
	if (val_1 < val_2)
		return val_1;
	else
		return val_2;
}

template <typename T>
T max(T &val_1, T &val_2){
	if (val_1 > val_2)
		return val_1;
	else
		return val_2;
}
