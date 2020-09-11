#include<iostream>
using namespace std;

int i = 0;

int selectionSort(int a[], int n){
	int j = i+1;
	while( j < n){
		if ( a[i] > a[j] ){
			swap(a[i], a[j]);
		}
		j++;
	}
	i++;
	if (i < n-1) selectionSort(a, n);
	return 0;
}

main(){
	int a[1000], n;
	cout << "nhap so luong phan tu: ";
	cin >> n;
	cout << "nhap gia tri phan tun";
	for (int i = 0; i < n; ++i){
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	selectionSort(a, n);

	cout << "day sau khi duoc sap xep\n";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}