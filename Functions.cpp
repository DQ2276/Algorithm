#include<cmath>
#include<iomanip>
#include"Functions.h"

using namespace std;
//�ж�x�Ƿ�Ϊ���� 
bool IsPrime(int x) {
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}

