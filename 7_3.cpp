#include <iostream.h>

#include <iomanip.h>

#include <stdio.h>

#define N 10

void main()

{

	int i;

	int a[N];

	void inv(int *p,int n);

	cout<<"������10��������"<<endl;

	for(i=0;i<N;i++)

		cin>>a[i];

	cout<<"�������ǣ�"<<endl;

	for(i=0;i<N;i++)

		cout<<setw(3)<<a[i];

	cout<<"\n";

	inv(a,10);

	cout<<"����Ԫ�غ�������ǣ�"<<endl;

	for(i=0;i<N;i++)

		cout<<setw(3)<<a[i];

	cout<<"\n";

}

void inv(int *p,int n)

{

	int i,max,min,*pmax,*pmin,temp;

	

	for(max=min=p[0],i=0;i<n;i++)

	{

		if(max<=*(p+i))

		{

			max=*(p+i);

		pmax=p+i;

		}

		if(min>=*(p+i))

		{

			min=*(p+i);

		pmin=p+i;

		}

	}

	temp=*pmax;

	*pmax=*pmin;

	*pmin=temp;

}

