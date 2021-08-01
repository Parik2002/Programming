#include <iostream>
using namespace std;
int main() {
	long long n,a,sum=0;
	cin >> n;
	for(int i = 0; i < n - 1 ; i++){
		cin	>> a;
		sum = sum + a;
	}
	cout << n*(n+1)/2 - sum;
}
