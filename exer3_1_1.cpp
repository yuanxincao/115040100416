#include<iostream.h>
void main()
{
int a;
cout<<"����һ������:"<<endl;
cin>>a;
if(a<10)
cout<<a<<"С��10��"<<endl;
else
    if(10<=a&&a<100)
    cout<<a<<"��10��99֮�䡣"<<endl;
    else
		if(100<=a&&a<1000)
		cout<<a<<"��100��999֮�䡣"<<endl;
		else
			if(1000<=a&&a<9999)
			cout<<a<<"��1000��9999֮�䡣"<<endl;
			else
				if(10000<=a)
					cout<<a<<"����10000��"<<endl;
}

