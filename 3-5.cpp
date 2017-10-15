#include<iostream.h>
#include<math.h>
void main()
{
double a,b,c,r,s;
cout<<"输入三个数:"<<endl;
cin>>a>>b>>c;
if((a+b)>c||(a+c)>b||(b+c)>a)
{	   
 r=(a+b+c)/2;
        s=sqrt(r*(r-a)*(r-b)*(r-c));
		  cout<<"以这三个数为三角形的面积为："<<s<<endl;
}
	 
else
		cout<<"这三个数的线段无法组成三角形"<<endl;
}