#include<iostream>
#include<iomanip>
#include"信息学奥赛.h"
using namespace std;
void QrecisionAndFormat() {  //精确度  #include<iomanip>
	float a = 0.213001;  //  C/C++保留n位小数输出
	cout << "a=" << setiosflags(ios::fixed)<< setprecision(2) << a << endl;
	printf("a=%0.2lf\n", a);
	/***C/C++ n个字符的宽度右对齐输出****/
	/*
	scanf("%d %d %d", &a, &b, &c);
	cin >> a >> b >> c;
	printf("%8d %8d %8d\n", a, b, c);
	cout << setw(8) << a << " " << setw(8) << b << " " << setw(8) << c << endl;
	*/
}
void Ssoier() {
	//T2063();
	//T1002();
	//T1003();
	//T1004();
	//T1005();
	//T1010();
	//T1016();
	//T1019();
	//T1020();
	//T1023();
	//T1025();
	//T1037();
	//T1040();
	//T1064();
	//T1069();
	//T1080();
	//T1084();
	//T1085();
	//T1086();
	//T1089();
	//T1094();
	//T1096();
	//T1097();
	//T1098();
	//T1099();
	//T1100();
	//T2024();
	//T2025();
	//T2034();
	//T2036();
	//T2037();
	T2039();
}
void Test() {
	float S;
	int w, l, h;
	S = 150 / 15 * (15 + 25) * 1.0;
	cout << setiosflags(ios::fixed) << setprecision(2) << S;
	//printf("%0.2lf", S);
}
/*
* 答题模板
#include<iostream>
#include<iomanip>
using namespace std;
int main() {

return 0;
}
*/
int main() {
	Ssoier();	
	//Test();
}