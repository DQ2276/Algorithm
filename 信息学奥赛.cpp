#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<math.h>
#include<climits>
//#include <cstdio>
#include"Functions.h"
#include"��Ϣѧ����.h"


using namespace std;
void T2063() {
	cout << (15 * 20 - 10 * 20) / (20 - 10);
}
void T1002() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << b;
}
void T1003() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	//cin >> a >> b >> c;
	printf("%8d %8d %8d\n", a, b, c);
	cout << setw(8) << a << " " << setw(8) << b << " " << setw(8) << c << endl;
}
void T1004() {
	char n;
	cin >> n;
	cout << " " << " " << n << endl;
	cout << " " << n << n << n << endl;
	cout << n << n << n << n << n << endl;
}
void T1005() {
	int x, a, y, b;
	cin >> x >> a >> y >> b;
	cout << setiosflags(ios::fixed) << setprecision(2) << abs(x * a - y * b) / abs(a - b)*1.0 ;
}
void T1010() {
	double a, b;
	cin >> a >> b;
	cout << setiosflags(ios::fixed) << setprecision(9) << a / b;
}
void T1016() {   //���int short�Ĵ洢�ռ��С
	cout << sizeof(int) << " " << sizeof(short);
}
void T1019() {
	float a;
	cin >> a;
	cout << (int)a;
}
//while(scanf(  )!=EOF) cin.getline()��cin.get()
void T1020() {  
	char s;
	while (cin >> s)      //while(scanf(  )!=EOF)Ϊ��������ʱ�õ�
		cout << (int)s;  //cin.getline()��cin.get()���ܽ�������Ĵ��пո���ַ���ֱ���������з�ֹͣ���ա�
	                     //���Ƕ�����������cin.getline()�������з�����cin.get()���䱣������������С�
}
void T1023() {
	cout << sizeof("Hello, World!");
}
void T1025() {
	double a;
	cin >> a;
	cout << setiosflags(ios::fixed) << setprecision(12) << a;
}
void T1037() {
	int n;
	cin >> n;
	cout << int(pow(2, n));
}
void T1040() {
	double a;
	cin >> a;
	cout << fixed << setprecision(2) << fabs(a);
}
void T1064() {
	int n,a,b,c,suma=0,sumb=0,sumc=0;
	cin >> n;
	while (n--){
		cin >> a >> b >> c;
		suma += a;
		sumb += b;
		sumc += c;
	}
	cout << suma << " " << sumb << " " << sumc << ' ' << suma + sumb + sumc;
}
void T1069() {
	int a, n;
	cin >> a >> n;
	cout << int(pow(a, n));
}
void T1080() {
	int a, b, c;
	cin >> a >> b >> c;
	int min = a;
	//��3��������Сֵ
	if (a > b)
		min = b;
	if (c < min)
		min = c;

	for (int i = 2; i <= min / 2; i++)
	{
		if (a % i == b % i && b % i == c % i)
		{
			cout << i; break;
		}
	}
	
}
//���nλ��ǰ�油0
void T1084() {
	int a, b, s = 1;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		s *= a;
		s %= 1000;
	}
	//printf("%03d", int(pow(a, b))%1000);    ��̫����
	printf("%03d", s);
}
void T1085() {
	double h, sum = 0;
	cin >> h;
	sum = h;
	for (int i = 0; i < 10; i++) {
		h /= 2;
		sum += h * 2;
	}
	cout << sum-2*h << endl << h;
}
void T1086() {
	int n;
	cin >> n;
	while (n != 1) {
		if (n % 2 == 1){
			cout << n << "*" << 3 << "+" << 1;
			n = 3 * n + 1;
			cout << "=" << n << endl;
		}		
		else {
			cout << n << "/" << 2;
			n /= 2;
			cout << "=" << n << endl;
		}
	}
	cout << "End";
}
void T1089() {
	long long n, r = 0;
	cin >> n;
	while (n) {
		r = r * 10 + n % 10;
		n /= 10;
	}
	cout << r;
}
void T1094() {
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <=n; i++) {
		if (i % 7 != 0 && i % 10 != 7 && i / 10 != 7)
			sum += i * i;
	}
	cout << sum;
}
void T1096() {
	int l, r, m, k = 0;
	cin >> l >> r;
	for (int i = l; i <= r; i++) {
		m = i;
		while (m != 0) {
			if (m % 10 == 2)
				k++;
			m /= 10;
		}
	}
	cout << k;
}
void T1097() {
	int r, l;
	bool b;
	char c;
	cin >> r >> l >> c >> b;
	if (b == 1) {
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < l; j++)
				cout << c;
			cout << endl;
		}
	}
	else {
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < l; j++)
				if (i == 0 || i == r - 1 || j == 0 || j == l - 1)
					cout << c;
				else
					cout << ' ';
			cout << endl;
		}
	}
}
//����������
void T1098() {
	int n, max, i;
	cin >> n;
	for (i = 2; i <= n / 2; i++) 
		if (n % i == 0 && IsPrime(i))
			break;
	cout << n / i;
	
}
//�ҵ�nС������(����)
void T1099() {
	int n, i = 1, count = 0;
	cin >> n;
	while(++i) {
		if (IsPrime(i)) 
			count++;	
		if (count == n) {
			cout << i;
			break;
		}			
	}
}
void T1100() {
	int d, sum = 0, count = 1;
	cin >> d;
	for (int i = 1; i <= d; i++)
		for (int j = 0; j < i; j++) 
			if (count <= d) {
				count++;
				sum += i;
			}
	cout << sum;
	/*
	* private static int test(int n){
        int sum = 0;//����
        int t = 1;//��ǵ����ǻ����ͬ��ҵĵڼ���
        int s = 1;//��ǵ����ý��
        for(int i = 1;i <= n;i++){
            sum += s;
            if(t < s){//����û����ͬ��ҵ����һ�죬���¼����+1
                t++;
            }else {//����������ͬ��ҵ����һ��,��������¼��ʼ�����ڶ�����+1
                t=1;
                s++;
            }
        }
        return sum;
    }

	*/
			
}

void T2024() {
	int n, sum = 1;
	cin >> n;
	while (n--) {
		sum *= 1992;
		sum %= 100;
	}
	cout << sum;
}
//�ܱ�n�������������ֵ��
void T2025() {
	int n = 7;
	while (1) {
		if (n % 2 == 1 && n % 3 == 1 && n % 4 == 1 && n % 5 == 1 && n % 6 == 1) 
			break;
		n += 7;
	}
	cout << n;
}
//����n����  (c = getchar()) != '\n'
void T2034() {
	int i = 0, a[100],b;
	char c;
	//while (cin >> a[i++]);
	//while (scanf("&d", &b) == 1)
	do {
		cin >> a[i++];
	} while ((c = getchar()) != '\n');

	for (int j = i - 1; j >= 0; j--)
		cout << a[j] << " ";
}
//#include<limits.h/climits> INT_MAX
//bool����Ĭ��Ϊ1����Ĭ��ֵ��=1
void T2036() {
	int n, r = 1;
	bool a[1000];
	for (int i = 1; i < 1000; i++)  //bool����Ĭ��Ϊ1����Ĭ��ֵ��=1
		a[i] = 1;
	cin >> n;
	for(int i=2;i<=n;i++)
		for(int j=1; j * i <=n;j++)
			a[j * i]=!a[j * i];
	/*
	for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            if(j%i==0) a[j]=!a[j];//�߼�ȡ��
        }
    }
	*/
	for (int i = 1; i <= n; i++) {
		if (a[i] == 1)
			cout << i << " ";
	}
}
//memset(a,0,sizeof(a)):Ϊ�����������Ԫ�ظ�ֵΪ0��
//a[(j + M) % N ? (j + M) % N : N] = !a[(j + M) % N ? (j + M) % N : N];
void T2037() { //****
	int N, M, p = 0, count = 0, sum = 0;
	bool a[INT16_MAX];
	cin >> N >> M;
	/*
	for (int i = 1; i <= N; i++)
		a[i] = 1;
	*/
	memset(a, 1, sizeof(a));
	while (sum != N) {
		p = ++p % N ? p % N : N;  //��p==Nʱp=N��p=1--N
		if (a[p])
			count++;
		if (count == M) {
			cout << p << " ";
			count = 0;
			a[p] = 0;
			sum++;
		}
	}
}
void T2039() { //***** BubbleSort()
	int a[20], n, j, k;
	bool flag;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	BubbleSort(a,n);
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
}