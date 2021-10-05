#include<bits/stdc++.h>  // Header file which includes every standard library
using namespace std;

// Execution of program begins from the main function
int main(){
	string s;
	cin>>s;                     // Takes in a string from user
	int n = (int)s.size();      // Finding out size of string
	for(int i=0;i<n;++i){
		if(isupper(s[i])) s[i] = tolower(s[i]);  // Iterating through each character of the string
		else s[i] = toupper(s[i]);               // and toggling its case 
	}
	cout<<s<<endl;              // String displayed after appropriate changes
}