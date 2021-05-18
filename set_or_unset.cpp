//Check set position of a number

#include<bits/stdc++.h>
using namespace std;
main()
{
	int num,pos;
	cout<<"Enter number: ";
	cin>>num;
	cout<<"Enter position : ";
	cin>>pos;
	if(num&((pos-1)<<1))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}

