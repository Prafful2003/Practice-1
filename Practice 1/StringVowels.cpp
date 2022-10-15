#include <bits/stdc++.h>
using namespace std;

int check(string s)
{

	int hash[5] = { 0 };
	for (int i = 0; i < s.length(); i++) {

		if (s[i] == 'a')
			hash[0] = 1;

		else if (s[i] == 'e')
			hash[1] = 1;

		else if (s[i] == 'i')
			hash[2] = 1;

		else if (s[i] == 'o')
			hash[3] = 1;

		else if (s[i] == 'u')
			hash[4] = 1;
	}
	for (int i = 0; i < 5; i++) {
		if (hash[i] == 0) {
			return 1;
		}
	}
	return 0;
}


int checkIfAllVowelsArePresent(string s)
{

	if (check(s))
		cout << "Sad\n";
	else
		cout << "Happy\n";
} 

int main() {
	
	int t;
	cin>>t;
	while (t--)
	{
	string s;
	cin>>s;

   checkIfAllVowelsArePresent(s);
	 	
	}
	return 0;
}
