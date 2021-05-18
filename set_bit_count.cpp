//check how many set bits are there in a number
#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,c=0;
	cout<<"Enter a number: ";
	cin>>n;
	while(n!=0)
	{
		if(n&1==1)
			c++;
		n=n>>1;
	}
	cout<<"NO of Set bits is : "<<c;
}
