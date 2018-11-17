#include <iostream>
using namespace std;
int main() {
	int a[]={1,26,34,1000};
	int s=0;
	int num=0;
	for(int i=0;i<4;i++)
	{
		num=a[i];
		if(num!=0)
		{
			while(num>0)
			{
				s*=10;
				num/=10;
			}
			s+=a[i];
		}
		else
		{
			s*=10;
		}
	}
	cout<<s;
	return 0;
}
