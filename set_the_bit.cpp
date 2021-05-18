//Set the bit of a number

#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,p,res;
	cout<<"Enter number: ";
	cin>>n;
	cout<<"Enter position : ";
	cin>>p;
	res = (n|((p-1)<<1));
	cout<<"Result is : "<<res;
}
