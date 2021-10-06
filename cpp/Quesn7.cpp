//7. Write a program that accepts a sequence of whitespace separated words as input and prints the words after removing all duplicate words and sorting them alphanumerically.
#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	vector<string> v;
	while (cin >> str)
	{
		v.push_back(str);
	}

	sort(v.begin(), v.end());
	int n = v.size();

	for (int i = 0; i < n - 1; i++)
	{
		if (v[i] != v[i + 1])
		{
			cout << v[i] << ' ';
		}
	}

	cout << v[n - 1] << endl;
	return 0;
}