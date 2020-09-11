#include<iostream>
using namespace std;

int insertionSort(int a[], int n ){
	int pos, x;

	for(int i = 1 ; i<n ; i++) { //đoạn a[0] đã sắp
		x = a[i];
		pos = i-1; // tìm vị trí chèn x

		while( pos >= 0 && a[pos] > x ){// kết hợp dời chỗ các phần tử sẽ đứng sau x trong dãy mới
			a[pos+1] = a[pos];
			pos--;
			}

		a[pos+1] = x;// chèn x vào dãy
		}
		return 0;
}
//24

main(){

	int a[10000], n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	insertionSort(a, n);
	cout << "day sau khi duoc sap xep\n";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}