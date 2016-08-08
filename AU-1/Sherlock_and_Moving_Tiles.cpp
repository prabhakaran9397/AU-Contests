#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
const double two = sqrt(2);

int main(void){
	int Q;
	long long int s1,s2,v,l,q;
	cin>>l>>s1>>s2>>Q;
	v= s1>s2?s1-s2:s2-s1;
	double dl= l*two, qdl,a;
	while(Q--){
		cin>>q;
		qdl=two*sqrt(q);
		a=(dl-qdl)/v;
		printf("%f\n",a);
	}
}
