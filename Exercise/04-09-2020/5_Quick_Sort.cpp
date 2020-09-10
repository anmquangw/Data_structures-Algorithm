#include<iostream>
using namespace std;

int x, j = 0;

int quickSort(int a[], int n){
	if( a[j] > x){
		
	}

	else if( j == n )


	quickSort(a, n);
}

main(){
	int a[1000], n;
	cout << "so phan tu cua mang: "; cin >> n;
	for (int i = 0; i < n; ++i){
		cout << "a[" << i << "] = "; cin >> a[i];
	}

	quickSort(a, n);

	cout << "day sau khi duoc sap xep\n";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}