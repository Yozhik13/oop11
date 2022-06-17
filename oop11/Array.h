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
	template<class... Args>
	Array(T a,Args ... )
	{
		arr = nullptr;
		size = 0;
		Add(a,Args...);
		
	};
	template<class... Args>
	void Add(T a, Args...) {
		Add(a);
		return Add(Args...);
	}

	void Add(T a) 
	{
		T* temp = new T[++size];
		for (int i = 0; i < size-1; i++)
		{
			temp[i] = arr[i];
		}
		temp[size - 1] = a;
		delete[]arr;
		arr = temp;
	}



	~Array() 
	{
		delete[]arr;
	}
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
	void print() 
	{
		for (int i = 0; i < size; i++) {
			cout << arr[i] << endl;
		}
	}


	int GetSize() 
	{
		return size;
	};



};

