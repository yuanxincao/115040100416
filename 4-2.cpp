#include<iostream.h>
void main()
{
	int i,j,k;
	j=0;
	k=0;
	for(i=2000; i<=3000; i++)
	{ 
		if((i%4==0&&i%100!=0)||i%400==0)
		{
			j++;
			k++;
			cout<<i<<' ';
			if(j==10)
			{
				cout<<endl;
				j = 0;
			}
		}
		
	}
	cout<<endl<<"闰年总数为"<<k<<endl;
}