# include <iostream.h>

void main()
{
	int i, j, m;
	j = 0;
	cout<<"������һ��������"<<endl;
	cin>>i;
	if (i <= 0)
	{
		j = 1;
	}
	else
	{
		for (m = i; m > 0;)
		{
			m = m / 10;
			j++;
		}
	}

	switch(j)
	{	
	case 1: cout<<i<<"С��10��"<<endl;
			break;
	case 2: cout<<i<<"��10��99֮�䡣"<<endl;
			break;
	case 3: cout<<i<<"��100��999֮�䡣"<<endl;
			break;
	default: cout<<i<<"����1000��"<<endl;
	}
}		