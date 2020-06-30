#include <bits/stdc++.h>
#include<unistd.h>
#include "fast food.h"
#include "password.h"
int main()
{ 
call:
	system("CLS");
int a;
	system("color F1");
	system("title Operator");
	cout<<"Welcome to Nalin's Fast Food \n";
	cout<<"Login as \n";
	cout<<"1. Owner\n2. Consumer \n";
	cout<<"Please enter the correct serial number  ";
	cin>>a;
	if(a==2)
	{	system("CLS");
	cout<<"Nalin's Fast Food welcomes all the costumers with best quality food!! \n\t\t please wait...";
	sleep(1);
		food();
		goto call;}
		else
		{
			system("CLS");
			cout<<"\t\t\tHello,MASTER"<<endl;
			sleep(1);
			password();
			getche();
			goto call;
		}
 return 0;		
}

