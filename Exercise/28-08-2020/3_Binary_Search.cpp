#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int i = 0, c = 0;

void cls(){system("cls");}

int search(int a[], int n, int head, int body){
	int mid = (head + body)/2;

	if( log(n)/log(2) <= i ){
		if( c  == 0 ) cout << "gia tri " << a[n] << " khong ton tai trong mang";
		else cout << "gia tri " << a[n] << " xuat hien " << c << " lan trong mang";
		return 0;
	}

	if( a[mid] > a[n] ){
		body = mid;
		if ( a[body - 1] > a[n] ){
			body--;
		}
	}

	else if ( a[mid] < a[n] ){
		head = mid;
		if ( a[head] < a[n] ){
			head++;
		}
	}

	else{
		c++;
	}

	i++;
	search(a, n, head, body);

}

main(){
	int a[1000], n;
	cout << "nhap so phan tu: "; cin >> n;
	cout << "nhap mang\n";

	for (int j = 0; j < n; j++){
		cout << "a[" << j+1 << "] = "; cin >> a[j];
	}

	cout << "mhap gia tri can tim kiem trong mang: "; cin >> a[n];
	
	int head = 0, body = n-1;
	
	sort( a, a+n );
	cls();
	search(a, n, head, body);
}
