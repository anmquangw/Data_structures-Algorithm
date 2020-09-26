#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cout <<ceill(log(n)/log(3));
	cout << endl;
	return 0;
}