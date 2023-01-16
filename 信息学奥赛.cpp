#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<math.h>
#include<climits>
#include<string>
//#include <cstdio>
#include"TemplateFunction.hpp"
#include"Functions.h"
#include"信息学奥赛.h"



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
void T1016() {   //输出int short的存储空间大小
	cout << sizeof(int) << " " << sizeof(short);
}
void T1019() {
	float a;
	cin >> a;
	cout << (int)a;
}
//while(scanf(  )!=EOF) cin.getline()与cin.get()
void T1020() {  
	char s;
	while (cin >> s)      //while(scanf(  )!=EOF)为多组输入时用到
		cout << (int)s;  //cin.getline()与cin.get()都能接收输入的带有空格的字符串直到遇到换行符停止接收。
	                     //但是二者稍有区别：cin.getline()丢弃换行符，而cin.get()将其保留在输入队列中。
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
	//求3个数的最小值
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
//输出n位，前面补0
void T1084() {
	int a, b, s = 1;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		s *= a;
		s %= 1000;
	}
	//printf("%03d", int(pow(a, b))%1000);    数太大了
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
//找最大的质数
void T1098() {
	int n, max, i;
	cin >> n;
	for (i = 2; i <= n / 2; i++) 
		if (n % i == 0 && IsPrime(i))
			break;
	cout << n / i;
	
}
//找第n小的质数(素数)
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
        int sum = 0;//总数
        int t = 1;//标记当天是获得相同金币的第几天
        int s = 1;//标记当天获得金币
        for(int i = 1;i <= n;i++){
            sum += s;
            if(t < s){//若还没到相同金币的最后一天，则记录天数+1
                t++;
            }else {//当天已是相同金币的最后一天,则天数记录初始化，第二天金币+1
                t=1;
                s++;
            }
        }
        return sum;
    }

	*/
			
}
//STL中可用reverse（）
void T1105() {
	int n, a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	Reverse<int>(a,n);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
//memset(a, 1, L);//赋值范围0~L-1
void T1107() {
	int L, M, l, r, count = 0;
	bool a[10001];
	cin >> L >> M;
	memset(a, 1, L+1);//赋值范围0~L-1
	for (int i = 0; i < M; i++) {
		cin >> l >> r;
		for (int j = l; j <= r; j++)
			if (a[j])
				a[j] = !a[j];
	}
	for (int i = 0; i <= L; i++)
		if (a[i])
			count++;
		cout << count;
}
//以“，”为分隔符，处理最后的“，”
void T1109() {
	int N, M;
	bool a[5001];
	cin >> N >> M;
	memset(a, 0, N + 1);
	for (int i = 2; i <= M; i++)
		for (int j = 1; j * i <= N; j++)
			a[i * j] = !a[i * j];
	for (int i = 1; i <= N; i++) {
		if (!a[i]) {
			if (!a[0]) {
				cout << i;
				a[0] = 1;
			}
			else
				cout << "," << i;
		}
	}
}
//double的最大最小值不在limits.h中，用(numeric_limits<double>::min)()获取
//注意不要最大最小值的情况，对“i != maxIndex && i != minIndex”与“a[i] != max && a[i] != min"的区别
void T1114() {   //****
	int n, maxIndex, minIndex;
	double a[300], max = (numeric_limits<double>::min)(), min = INT16_MAX, average, avemax = INT16_MIN, sum = 0, avemaxabs;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (max < a[i]) {
			max = a[i];
			maxIndex = i;
		}		
		if (min > a[i]) {
			min = a[i];
			minIndex = i;
		}		
		sum += a[i];
	}
	average = (sum - max - min) / (n - 2);
	//cout << "max: " << max << "min: " << min << "sum: " << sum << "average:" << average << endl;
	for (int i = 0; i < n; i++)
		if (i != maxIndex && i != minIndex && fabs(a[i] - average) > avemax)  //除去最大最小值
			avemax = fabs(a[i] - average);
	cout << fixed << setprecision(2) << average << " " << avemax;
}
//对多个数计数
//数组赋初值新方法 a[10001] = { 0 }
void T1115() {
	int n, a[10001] = { 0 }, Fmax = INT16_MIN, x;
	cin >> n;
	//memset(a, 0, sizeof(a));
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (Fmax < x)
			Fmax = x;
		a[x]++;
	}
	for (int j = 0; j <= Fmax; j++)
		cout << a[j] << endl;
}
/*register 一般情况下，变量的值是存储在内存中的，CPU 每次使用数据都要从内存中读取。
如果有一些变量使用非常频繁，从内存中读取就会消耗很多时间，为了解决这个问题，
可以将使用频繁的变量放在CPU的通用寄存器中，这样使用该变量时就不必访问内存，直接从寄存器中读取，
大大提高程序的运行效率。
*/
//else if()慎用  考虑并列if
//数组最大长度0x7ffffff
void T1116() {      //*****
	int a[1000002] = { 0 }, n, count = 1, countmax = INT16_MIN;
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	for (register int i = 1; i < n; i++) {
		if (a[i] == a[i - 1])
			count++;
		else
			count = 1;
		if (count > countmax)  
			countmax = count;
	}
	cout << countmax;
	/*方法二   x较小时使用
	for (int i = 0; i < n; i++) {
		cin >> x;
		a[x]++;
		if (xmax < x)
			xmax = x;
	}
	*/
}
//去重
void T1117() {
	bool a[5001] = { 0 };
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (!a[x])
			cout << x<<" ";
		a[x] = 1;
	}
	/*
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(j=0;j<i;j++){
			if(a[j]==a[i]){
				i=i-1;
				n=n-1;
			}
		}
	}
	*/
}
//注意读题
void T1118() {
	int n, a[10000], b[10000], g[10000], k[10000], x, y, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> a[i] >> b[i] >> g[i] >> k[i];
	cin >> x >> y;
	for (int i = 0; i < n; i++)
		if ((x >= a[i] && x <= a[i] + g[i]) && (y >= b[i] && y <= b[i] + k[i]))
			count=i+1;
	if (count!=0)
		cout << count;
	else
		cout << -1;
}
void T1120() {
	int n, i, j;
	cin >> n >> i >> j;
	for (int x = 1; x <= n; x++)
		cout << "(" << i << "," << x << ")";
	cout << endl;
	for (int y = 1; y <= n; y++)
		cout << "(" << y << "," << j << ")";
	cout << endl;
	for (int x = 1; x <= n; x++)
		for (int y = 1; y <= n; y++)
			if (y - x == j - i)
				cout << "(" << x << "," << y << ")";
	cout << endl;
	for (int x = n; x >= 1; x--)
		for (int y = 1; y <= n; y++)
			if (x + y == i + j)
				cout << "(" << x << "," << y << ")";
}
void T1122() {
	int a[5][5], x[5], y[5], maxx = INT16_MIN, miny = INT16_MAX, j, k, r;
	bool flag = 0;
	for (int i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			cin >> a[i][j];
	for (int i = 0; i < 5; i++) {
		maxx = 0;
		for (j = 0; j < 5; j++)
			if (a[i][j] > maxx) {
				maxx = a[i][j];
				r = j;
			}
				
		for (k = 0; k < 5; k++)
			if (a[k][r] < maxx)
				break;
		if (k == 5) {
			cout << i+1 << " " << r+1 << " " << maxx;
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "not found";
}
void T1125() {
	int n, m, k, A[100][100], B[100][100], C[100][100] = { 0 };
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> A[i][j];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < k; j++)
			cin >> B[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++)
			for (int r = 0; r < m; r++)
				C[i][j] += A[i][r] * B[r][j];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++)
			cout << C[i][j] << " ";
			cout << endl;
	}
}
void T1126() {
	int n, m, A[100][100];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> A[i][j];
	/*
	for(int i=0;i<n;i++)
		for (int j = n; j < m; j++) 
			swap(A[i][j], A[j][i]);
			*/
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << A[j][i] << " ";
		cout << endl;
	}
}
void T1127() {
	int n, m, A[100][100];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> A[i][j];
	for (int i = 0; i < m; i++) {
		for (int j = n - 1; j >= 0; j--)
			cout << A[j][i] << " ";
		cout << endl;
	}	
}
/*
* 四舍五入：
1.round()
2.(int)(num*1.0+0.5);利用数据类型的特点（double类转int时会舍去小数)进行四舍五入。
double G[100][100];  //要四舍五入注意要用double
*/
void T1128() {
	int n, m;
	double G[100][100];  //要四舍五入注意要用double
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> G[i][j];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
				cout << G[i][j] << " ";
			else 
				cout << round((G[i][j] + G[i][j - 1] + G[i][j + 1] + G[i - 1][j] + G[i + 1][j]) / 5)<<" ";
		cout << endl;
	}
}
//cin >> ch; 以空格为结束符
void T1129() {
	string ch;
	int count = 0;
	getline(cin,ch);
	for (int i = 0; i < ch.length(); i++)
		if (ch[i] >= '0' && ch[i] <= '9')
			count++;
	cout << count;
}
void T1130() {
	string s;
	int a[26] = { 0 };
	bool flag = false;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
		a[s[i] - 'a']++;
	for (int i = 0; i < s.length(); i++)
		if (a[s[i] - 'a'] == 1) {
			cout << s[i];
			flag = true;
			break;
		}
	if (!flag)
		cout << "no";
}
void T1133() {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		cout << char(int(s[i] + s[(i + 1) % s.length()]));
	}
}
//注意 倒序是否取等
void T1137() {
	string s;
	char temp;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'a' && s[i] <= 'w' || s[i] >= 'A' && s[i] <= 'W')
			s[i] += 3;
		else //if (s[i] > 'w' && s[i] <= 'z' || s[i] > 'W' && s[i] <= 'Z')
			s[i] -= 23;
	}
	for (int i = 0; i < s.length() / 2; i++) { //注意 倒序是否取等
		temp = s[i];
		s[i] = s[s.length() - i - 1];
		s[s.length() - i - 1] = temp;
	}
	for (int i = 0; i < s.size(); i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else //if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
	cout << s;
}
void T1138() {
	string s;
	getline(cin, s);//注意字符串中cin的使用
	for (int i = 0; i < s.length(); i++)
		cout << (char)toupper(s[i]);
}
void T1139() {
	string s;
	int n;
	cin >> n;
	for (int j = 0; j < n; j++) {
		cin >> s;
		s[0] = (char)toupper(s[0]);
		for (int i = 1; i < s.length(); i++)
			s[i] = (char)tolower(s[i]);
		cout << s << endl;
	}
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
//能被n整除，怎样设初值；
void T2025() {
	int n = 7;
	while (1) {
		if (n % 2 == 1 && n % 3 == 1 && n % 4 == 1 && n % 5 == 1 && n % 6 == 1) 
			break;
		n += 7;
	}
	cout << n;
}
//输入n个数  (c = getchar()) != '\n'
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
//bool数组默认为1，但默认值！=1
void T2036() {
	int n, r = 1;
	bool a[1000];
	for (int i = 1; i < 1000; i++)  //bool数组默认为1，但默认值！=1
		a[i] = 1;
	cin >> n;
	for(int i=2;i<=n;i++)
		for(int j=1; j * i <=n;j++)
			a[j * i]=!a[j * i];
	/*
	for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            if(j%i==0) a[j]=!a[j];//逻辑取反
        }
    }
	*/
	for (int i = 1; i <= n; i++) {
		if (a[i] == 1)
			cout << i << " ";
	}
}
//memset(a,0,sizeof(a)):为所有数组里的元素赋值为0。
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
		p = ++p % N ? p % N : N;  //当p==N时p=N，p=1--N
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
void T2040() {
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
		if (IsPrime(i))
			cout << i << endl;
}
void T2042() {
	int n, m, G[100][100];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> G[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (G[i][j])
				cout << i+1 << " " << j+1 << " " << G[i][j] << endl;
}
void T2043() {
	int n, a[20][20];
	cin >> n;
	for (int i = 0; i < n; i++) {
		a[i][i] = 1;
		a[i][0] = 1;
	}
	for (int i = 1; i < n; i++)
		for (int j = 1; j < i; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}	
}
void T2044() {
	char c[100];
	int length;
	cin >> c;
	for (int i = 0; c[i] != '.'; i++)
		length = i;
	for (int i = 0, j = length; i != j&&i<j; i++, j--)
		if (c[i] != c[j]) {
			cout << "No";
			return;
		}
	cout << "Yes";
}
void T2045() {
	int n, count = 1, a[21][21] = { 0 };
	cin >> n;
	int x = 1, y = n;
	while (count < n * n) {
		while (x < n && a[x + 1][y] == 0)
			a[x++][y] = count++;
		while (y > 1 && a[x][y - 1] == 0)
			a[x][y--] = count++;
		while (x > 1 && a[x - 1][y] == 0)
			a[x--][y] = count++;
		while (y < n && a[x][y + 1] == 0)
			a[x][y++] = count++;
	}
	a[x][y] = count;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
