#include<iostream>
using namespace std;

int soft(int a[], int n){
	for (int i = 0; i < n-1; i++)
		for (int j = i + 1; j < n; j++)
			if ( a[i] > a[j] )
				swap( a[i], a[j] );
}

main(){
	int a[1000], n, mem;
	cout << "nhap so o phan tu can sap xep"; cin >> n;
	for (int i = 0; i < n; i++){
		cout << "a[" << i+1 << "] = "; cin >> a[i];
	}
	
	cout << "mang sau khi da duoc sap xep khong giam la";
    
	soft(a, n);
	
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
