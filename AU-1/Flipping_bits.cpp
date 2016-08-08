#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
	int t;
	unsigned int number;
	cin >> t;
	while(t--){
		cin >> number;
		number = ~number;
		cout << number << endl;
	}
	return 0;
}
