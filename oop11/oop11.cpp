#include <iostream>
#include "Array.h"
using namespace std;
int main()
{
	Array<int> iArr;
	iArr.push_back(3);
	cout << "iArr.GetSize() "<< iArr.GetSize()<< endl;
	int s = 4;
	Array<int> i2Ar(s,1,2,3,4);
	cout << "i2Ar.GetSize() " << i2Ar.GetSize() << endl;
	 

}

