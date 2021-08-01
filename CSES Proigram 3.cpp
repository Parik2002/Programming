#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    string s;
    cin >> s;
    long count,i,j,max=1,l = s.length();
    char c;
    for(i=0;i<l-1;){
    	c = s.at(i);
    	count=1;
    	for(j=i+1;j<l;j++){
    		if(c==s.at(j))
    			++count;
    		else
    			break;
		}
		if(count>=max)
			max = count;
		i = i + count;
	}
	cout << max;
    return 0;
    
}

