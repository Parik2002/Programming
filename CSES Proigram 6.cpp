#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t,r,c,m,m2,ans;
    cin >> t;
    while(t--){
    	cin >> r;
    	cin >> c;
    	m = max(r,c);
    	m2 = (m-1)*(m-1);
    	if(m%2==0){
    		if(m==c){
    			ans = m2 + r;
			}
			else {
				ans = m2 + 2 * m - c;
			}
		}
		else{
			if(m==r){
				ans = m2 + c;
			}
			else{
				ans = m2 + 2*m - r;
			}
		}
		cout << ans << "\n";
	}
	
    return 0;
}

