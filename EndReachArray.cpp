#include <iostream>
using namespace std;

int main() {
	int a[]={1,3,4,1};
	int z[]={0,0,0,0};
	int k=0;
	int flag=0;
	while(z[k]==0)
	{
	    z[k]=1;
	    if(a[k]!=4)	
		{
			k=a[k];
		}
		else
	    {
		    flag=1;
		    break;
	    }
	}
	if(flag==0)
	{
	    cout<<"NO";
	}
	else
	{
	    cout<<"YES";
	}
	return 0;
}
