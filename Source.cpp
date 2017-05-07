#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
Morgan Lnowles
12/5/2016
Microsoft Visual Studio

For this lab you are to write a main program which demonstrates the functionality of 4 template functions:

template<typename T>

T largest( T a, T b, T c)      //function returns the largest of the three parameters ; type T provides > operator

template<typename T>

T average (T arr[], int size) // function returns the average of array ; type T provides + and / functionality

The <algorithm> library template functions     min  and fill
*/


template <typename T>
T largest(const T& a, const T& b, const T& c) {//function returns the largest of the three paramters; type T provides > operator
	T largest = a;
	if (largest < b) {
		largest = b;
	}
	if (largest < c) {
		largest = c;
	}
	return largest;
}

template <typename T>
T average( T arr[], const int& size) {//function returns the average of array; type T provides + and / functionality
	T temp = 0;
	for (int i = 0; i < size; i++) {
		temp = temp + arr[i];
	}
	temp = temp / size;

	return temp;
}

int main() {

	vector<int> myvector(5);

	int arr[5] = { 1, 2, 3, 4, 5 };
	char carr[2] = { 'a', 'c' };
	
	

	cout << "Testing largest(1, 6, 2): " << largest(1, 6, 2) << endl;
	cout << "Testing average(1, 2, 3, 4, 5): " << average(arr, 5) << endl;
	cout << "Testing average( 'a', 'c'): " << average(carr, 2) << endl;

	cout << "Testing min(15, 16): " << min(15, 16) << endl;
	cout << "Testing fill:" << endl;

	for (int i = 0; i < myvector.size(); i++) {
		cout << myvector.at(i) << " ";
	}

	cout << endl;

	myvector.push_back(10);
	for (int i = 0; i < myvector.size(); i++) {
		cout << myvector.at(i) << " ";
	}
	
	cout << endl;

	fill(myvector.begin(), myvector.begin() + 5, 6);

	for (int i = 0; i < myvector.size(); i++) {
		cout << myvector.at(i) << " ";
	}
	cout << endl;

}