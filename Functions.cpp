#include<iostream>
#include<cmath>
#include<iomanip>
#include"Functions.h"

using namespace std;
//判断x是否为质数 
bool IsPrime(int x) {
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}
/*
template<class T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
*/
//template<class T>
void BubbleSort(int Array[],int Length) {
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
