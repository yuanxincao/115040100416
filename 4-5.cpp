#include<iostream.h>
void main()
{ 
	int i;
	for(i=1; i<=99; i++)
	{
		if(i*i>=1000)
		{
			if((i*i)%100==i)
			{
				cout<<i<<endl;
			}
		}
		else
		{
			if((i*i%10==i)
			{
				cout<<i<<endl;
			}
		}
	}
}