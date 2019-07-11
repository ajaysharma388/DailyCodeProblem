#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x " = " << x << endl
#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long long int ll;

const int mod = 1e9+1;
const int N = 1e6+1;

int main(){
	fast_io();
	int t;
	cin >> t;
	while(t--)
	{
		string n;
		cin >> n;
		int l = n.length();
		int sum = 0;
		for(int i = 0; i < l; i++)
		{
			sum += int(n[i]);
		}
		sum -= (l * 48);
		int x = sum % 10;
		char c;
		if(x == 0)
			c = '0';
		else
			c = char(58 - x);
		n += c;
		//cout << n << endl;
		debug(n);
	}
	return 0;
}
