#include<iostream>
using namespace std;

int quickSort(int a[], int head, int n){
	int x = a[n]
	quickSort(a, n);
	return 0;
}

main(){
	int a[1000], n;
	cout << "so phan tu cua mang: "; cin >> n;
	for (int i = 0; i < n; ++i){
		cout << "a[" << i << "] = "; cin >> a[i];
	}

	quickSort(a, 0, n);

	cout << "day sau khi duoc sap xep\n";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}