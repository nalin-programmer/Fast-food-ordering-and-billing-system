#include <stdio.h>
#include<stdlib.h>
#include "fast food.h"
int main()
{ int a;
	system("color F1");
	system("title Operator");
	printf("Welcome to Nalin's Fast Food \n");
	printf("Are you a ");
	printf("1. Owner\n2. Consumer \n");
	printf("Please enter the correct serial number  ");
	scanf("%d",&a);
	if(a==2)
		system("CLS");
	printf("Nalin's Fast Food welcomes all the costumers with best quality food!!");
	Sleep(200);
		food();
	return 0;
}
