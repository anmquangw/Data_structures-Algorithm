#include<iostream>
using namespace std;

int i = 0;

int search(int a[], int n, int x) {
	if ( a[i] == x ) {
		cout << "so " << x << " can tim o vi tri thu" << i+1;
		return 0;
	} 
	else if ( i == n-1 ) {
		cout << "so " << x << " can tim khong ton tai trong mang";
		return 0;
	}
	i++;
	search(a, n, x);
}

int main() {
	int a[1000], n, x;
	cout << "nhap so phan tu: ";
	cin >> n;
	cout << "nhap mang\n";
	for (int j = 0; j < n; j++) {
		cout << "a[" << j+1 << "] = ";
		cin >> a[j];
	}
	cout << "mhap gia tri can tim kiem trong mang: ";
	cin >> x;
	search(a, n, x);
}
