# include<iostream.h>

void main()
{ 
	int a;
	cin>>a;
	cout<<a;
	while(a!=1)
	{
		cout<<"¡ú";
		if(a%2!=0)
		{
			a=a*3+1;
			cout<<a;
		}
		else
		{
		a=a/2;
		cout<<a;
		}
	}
	cout<<endl;
}