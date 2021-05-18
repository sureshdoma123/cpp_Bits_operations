//Un set the bit of number

#include<bits/stdc++.h>
using namespace std;
main()
{
	int num,pos,res;
	cout<<"Enter a number: ";
	cin>>num;
	cout<<"Enter a position : ";
	cin>>pos;
	res=(num)^((pos-1)<<1);
	cout<<"Result is : "<<res;
}
