#include <iostream.h>

#define N 10

void main()

{

	int i,a[N];

	cout<<"������10��������"<<endl;

	for(i=0;i<N;i++)

		cin>>a[i];

	int *pointer=a;

	void inv(int *x,int n);

	cout<<"The original array: "<<endl;

	for(i=0;i<N;i++)

		cout<<a[i]<<" ";

	cout<<endl;

	inv(pointer,10);

	cout<<"The array has been inverted: "<<endl;

	for(i=0;i<N;i++)

		cout<<a[i]<<" ";

	cout<<endl;

}

void inv(int *x,int n)

{

	int temp,*p,*q,m=(n-1)/2;

	p=x;q=x+n-1;

	for(;p<x+m;p++,q--)

	{

		temp=*p;

		*p=*q;

		*q=temp;

	}

}