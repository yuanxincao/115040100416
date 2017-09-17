#include<iostream.h>
void main()
{
int a;
cout<<"输入一个整数:"<<endl;
cin>>a;
if(a<10)
cout<<a<<"小于10。"<<endl;
else
    if(10<=a&&a<100)
    cout<<a<<"在10到99之间。"<<endl;
    else
		if(100<=a&&a<1000)
		cout<<a<<"在100到999之间。"<<endl;
		else
			if(1000<=a&&a<9999)
			cout<<a<<"在1000到9999之间。"<<endl;
			else
				if(10000<=a)
					cout<<a<<"大于10000。"<<endl;
}

