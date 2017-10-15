#include<iostream.h>
void main()
{
int a,b,c;
cout<<"输入两个整数:"<<endl;
cin>>a>>b;
c=a/b;
if(a%b==0)
cout<<a<<"÷"<<b<<"="<<c<<endl;
else
cout<<a<<"÷"<<b<<"="<<c<<"余"<<a%b<<endl;
}




