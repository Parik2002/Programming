#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll k,i;
    cin >> k;
    for(i=1;i<=k;i++){
    	cout << i*i*(i*i - 1)/2 - 4*(i-1)*(i-2) << endl;
	}
    return 0;
}

