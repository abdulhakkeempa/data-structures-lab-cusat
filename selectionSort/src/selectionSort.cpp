//============================================================================
// Name        : selectionSort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void printArray(int* data,int length);

void selectionSort(int* data,int length){
	for (int i = 0; i < length-1; ++i) {
		for (int j = i+1; j < length; ++j) {
			if (data[i]>data[j]){
				int temp;
				temp = data[j];
				data[j]=data[i];
				data[i]=temp;
			}
		}
		cout<<"Pass "<<i<<" : ";
		printArray(data, length);
		cout<<endl;
	}
}

void printArray(int* data,int length){
	for (int var = 0; var < length; ++var) {
		cout<<data[var]<<" ";
	}
}

int main() {
	int array[] = {7,4,10,8,3,1};
	int length = sizeof(array)/sizeof(array[0]);
	selectionSort(array, length);
	printArray(array, length);
	return 0;
}
