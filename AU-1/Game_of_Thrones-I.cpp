#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main(void) {

	string s;
	cin>>s;
	int alpha[26]={0};
	int flag = 0;
	int count=0;
	for(int i=0; i<s.size(); i++)
		alpha[s[i]-'a']++;
	for(int i=0; i<26; i++)
		if(alpha[i]%2)
			count++;
	if(count < 2) flag=1;
	if(flag==0)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}
