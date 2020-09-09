#include<iostream>
using namespace std;

int rou = 0, j = 1;

int bubbleSoft(int a[], int n){
	
	if ( a[j] < a[j-1]){
		swap(a[j], a[j-1]);
		rou++;
	}
	j++;
	if ( j < n ) bubbleSoft(a, n);
	return 0;
}

main(){
	int a[1000], n;
	cout << "nhap so luong phan tu mang n: "; cin >> n;
	cout << "nhap mang:\n";
	for (int i = 0; i < n; ++i){
		cout << "a[" << i+1 << "] = "; cin >> a[i];
	}

	bubbleSoft(a, n);

	cout << "after Bubble Sort with " << rou << " round\n";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}