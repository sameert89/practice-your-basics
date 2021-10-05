#include<bits/stdc++.h>  // Header file which includes every standard library
using namespace std;

typedef long long int ll;
#define all(x) x.begin(),x.end()  // Some typedefs and hash defines to make life simpler

// Execution of program begins from the main function
int main(){
	int n;
	cin>>n;
	ll dp[n+1];              
	dp[1] = 1;
	for(int i=2;i<=n;++i){
		dp[i] = dp[i-1]*i;    // Using memoization for faster calculation
	}
	string ans = to_string(dp[n]);
	reverse(all(ans));
	int strsze = (int)ans.size();
	string finalans = "";
	for(int i=0;i<strsze;++i){
		if(i%3==0 && i!=0) finalans+=',';  // Applying the commas in accordance to International Numbering System
		finalans+=ans[i];
	}
	reverse(all(finalans));
	cout<<finalans<<endl;
}