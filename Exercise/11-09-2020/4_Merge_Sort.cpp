#include<iostream>
using namespace std;

int mergeSort(int a[], int n){
	mergeSort(a, n);
}

main(){
	int a[1000], n;
	cout << "so phan tu cua mang: "; cin >> n;
	for (int i = 0; i < n; ++i){
		cout << "a[" << i << "] = "; cin >> a[i];
	}

	mergeSort(a, n);
	
	cout << "day sau khi duoc sap xep\n";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}