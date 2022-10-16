#include <iostream>
using namespace std;
int main()
{
//8
	/*
	for (int i = 20; i <= 50; i = i + 1) {
		if (i % 3 == 0 && i % 5 != 0) {
			cout << i << endl;
		}
	}
	*/
//9
	/*
	for (int i = 35; i <= 87; i = i + 1) {
		if (i % 7 == 1 || i % 7 == 2 || i % 7 == 5) {
			cout << i << endl;
		}
	}
	*/
//10
	/*
	int sum = 0;
	for (int i = 1; i <= 50; i = i + 1) {
		if (i / 5 || i / 7) {
			sum = i + i;
		}
	}
	cout << sum << endl;
	*/
//11
	/*
	for (int i = 10; i < 100; i = i + 1) {
		if (i % 4 == 0 && i % 6 != 0) {
			cout << i << endl;
		}
	}
	*/
//12
	/*
	int sum=1;
	for (int i = 13; i <= 100; i = i + 13) {
		if (i % 2 != 0) {
			sum = sum * i;
		}
	}
	cout << sum << endl;
	*/
//13
	/*
	int sum = 0;
	for (int i = 100; i <= 200; i = i + 1) {
		if (i % 17 == 0) {
			sum = sum + i;
		}
	}
	cout << sum << endl;
	*/
//14
	/*
	int kv = 1;
	int sum = 0;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i = i + 1) {
		kv = i * i ;
		sum = sum + kv;
	}
	cout << sum << endl;
	*/
//16
	/*
	int sum;
	int n, m;
	int c;
	cin >> n >> m;
	for (int i = m; i <= n * m; i = i + 10) {
		sum = n * m * 60 + 10;
	}
	cout << sum << endl;
	*/
	return 0;
}