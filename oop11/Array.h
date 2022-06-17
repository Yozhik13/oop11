#pragma once
#include <iostream>
using namespace std;
template <class T>
class Array
{
	T* arr;
	size_t size;

public:

	Array() 
	{
		size = 0;
		T* arr = nullptr;
	};
	Array(int size,T first, ...)
	{
		int count = size;
		T* p = &first;
		this->size = size;
		arr = new T[size];
		for(int i =0;i<count;i++)
		{
			arr[i] = *p++;
		}
	};

	Array& push_back(T temp) 
	{
		size++;
		T* tempArr = new T[size];
		for (int i=0;i<size-1;i++)
		{
			tempArr[i] = arr[i];
		}
		tempArr[size - 1] = temp;
		return *this;
	};



	int GetSize() 
	{
		return size;
	};



};

