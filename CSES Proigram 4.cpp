#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll n;
    cin >> n;
    ll a[n],i,diff=0,count=0;
    for(i=0;i<n;i++){
    	cin >> a[i];
	}
	for(i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			diff = a[i]-a[i+1];
			a[i+1]=a[i];
			count=count + diff;
		}
	}
	cout << count;
    return 0;
}

