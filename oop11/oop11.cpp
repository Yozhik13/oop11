#include <iostream>
#include "Array.h"
using namespace std;
int main()
{
	Array<int> iArr;
	iArr.push_back(3);
	cout << "iArr.GetSize() "<< iArr.GetSize()<< endl;

	Array<int> i2Ar(4,1,2,3,4);
	cout << "i2Ar.GetSize() " << i2Ar.GetSize() << endl;
	i2Ar.print();
	Array<char> arr3(5, 'q', 'w', 'e', 'r', 't');
	cout << "arr3.GetSize() " << arr3.GetSize() << endl;
	arr3.print();
	Array<float> ar4(3, 3.4, 4.5, 5.6);
	Array<double> ar5(3, 3.4, 4.5, 5.6);

	return 0;
}

