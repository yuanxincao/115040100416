#include<iostream.h>
void main()
{
	float r,pi;
	int k;
	cin>>r>>k;
	pi=3.14159;
	switch(k)
	{
	case 1:cout<<"s="<<pi*r*r<<endl;break;
	case 2:cout<<"l="<<2*pi*r<<endl;break;
	case 3:cout<<"s="<<pi*r*r<<endl<<"l="<<2*pi*r<<endl;
}
}