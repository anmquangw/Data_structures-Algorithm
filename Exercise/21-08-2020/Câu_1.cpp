#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a, b, c;
	cout << "phuong trinh bac 2 ax^2 + bx + c = 0\n";
	/* nhap a, b, c */
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	if ( a == 0 ){
		if ( b == 0 ) cout << "phuong trinh vo nghiem";
		else cout << "x = " << -c/b;
	}
	else{
		int del = b*b-4*a*c;
		if ( del == 0 ) cout << "x = " << -b/2*a;
		else if ( del > 0 ){
			cout << "x1 = " << -( b + sqrt(del)) / 2 * a;
			cout << "x2 = " << ( b + sqrt(del)) / 2 * a;
		} 
		else cout << "phuong trinh vo nghiem";
	}

}
