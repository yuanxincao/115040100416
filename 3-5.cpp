#include<iostream.h>
#include<math.h>
void main()
{
double a,b,c,r,s;
cout<<"����������:"<<endl;
cin>>a>>b>>c;
if((a+b)>c||(a+c)>b||(b+c)>a)
{	   
 r=(a+b+c)/2;
        s=sqrt(r*(r-a)*(r-b)*(r-c));
		  cout<<"����������Ϊ�����ε����Ϊ��"<<s<<endl;
}
	 
else
		cout<<"�����������߶��޷����������"<<endl;
}