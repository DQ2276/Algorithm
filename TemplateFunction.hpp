#pragma once
#include<iostream>

using namespace std;
/*
template<class T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
*/
template<class T>
void BubbleSort(T Array[], int Length) {
	bool flag;
	for (int i = 0; i < Length - 1; i++) {
		flag = 1;
		for (int j = Length - 1; j > i; j--) {
			if (Array[j] > Array[j - 1]) {
				swap(Array[j], Array[j - 1]);
				flag = 0;
			}
		}
		if (flag)
			break;
	}
}
template<class ElemType>
void Reverse(ElemType Array[],int Length) {
	ElemType temp;
	for (int i = 0; i < Length / 2; i++) {
		temp = Array[i];
		Array[i] = Array[Length - i - 1];
		Array[Length - i - 1] = temp;
	}
}