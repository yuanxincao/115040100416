
#include <iostream.h>

float fun(int n)

{

int i,x=0;   

float y=0.0;    

for(i=1;i<=n;i++)      

 {

	x=x+i;                 

    y=y+1.0/x;              

}   

 return y; 

}

void main() 

{    

	int n;    

	float s;        

	cout<<"Please input n:"<<endl;

	cin>>n;

	s=fun(n);   

    cout<<"The result is:"<<s<<endl;

}