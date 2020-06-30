#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
void food()
{system("color F1");
	system("title Nalin's_Fast_Food");
	char name[30], pizza1[]="Paneer Soya Supreme" ,pizza2[]="Veg Exotica" ,pizza3[]="Veggie Italiano" , roll1[]="Paneer Roll", roll2[]="Veg Roll", roll3[]="Malai Tikka Roll",bur1[]="Crispy Veg Supreme",bur2[]="Veg Surprise",bur3[]="Veg Whopper";
	char sand1[]="Veg Sandwich", sand2[]="Paneer Sandwich", sand3[]="Cheese Sandwich",decision[30],aa1[20]="Small",aa2[20]="Regular",aa3[20]="Large" ;
	char bir1[]="Hyderabadi Veg dum Biryani", bir2[]="Paneer Biryani", bir3[]="Tomato Biryani",gotostart ;
	int choice=0,pchoice=0,pchoice1=0, quantity=0,choice1=0;
	FILE *fp;
	fp=fopen("database.txt","ab+");
	if(fp == NULL)
	{printf("Unable to crate file.\n");
		exit(0);}
	beginning:
		char aaa[20]={"    "};
	system("CLS");
	cout<<"\t\t\t----------Nalin's Fast Food-----------\n\n";
	cout<<"Please Enter Your Name: ";
	fflush(stdin);
	cin.getline(name, 20);
	cout<<"\n Hello "<<name<<"\n\nWhat would you like to order?\n\n";
	cout<<"\t\t\t\t--------Menu--------\n\n";
	cout<<"1) Pizzas\n";
	cout<<"2) Burgers\n";
	cout<<"3) Sandwich\n";
	cout<<"4) Rolls\n";
	cout<<"5) Biryani\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice1;
	if(choice1==1)
	 {pchoice=0;
		cout<<"\n1) "<<pizza1<<"\n";
		cout<<"2) "<<pizza2<<"\n";
		cout<<"3) "<<pizza3<<"\n";
		cout<<"\nPlease Enter which Flavour would you like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<4)
		{cout<<"\n1) Small Rs.300\n"<<"2) Regular Rs.500\n"<<"3) Large Rs.800\n";
			cout<<"\nChoose Size Please:";
			cin>>pchoice;
			if(pchoice1>=1 && pchoice1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice){
			case 1: choice = 300*quantity;
			break;

			case 2: choice = 500*quantity;
			break;

			case 3: choice = 800*quantity;
			break;}
			system("CLS");
			switch (pchoice1){
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From Nalin's Fast Food\n";
			  fflush(stdin);
			 strcpy(decision,pizza1);
			 goto here;
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<pizza2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Nalin's Fast Food \n";
			  fflush(stdin);
			  strcpy(decision,pizza2);
			  goto here;
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Nalin's Fast Food\n";
			  fflush(stdin);
			  strcpy(decision,pizza3);
			  goto here;
			 break;}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{goto beginning;
			}}}
	 else if(choice1==2)
	 {pchoice=0;
		cout<<"\n1 "<<bur1<<" Rs.200"<<"\n";
		cout<<"2 "<<bur2<<" Rs.300"<<"\n";
		cout<<"3 "<<bur3<<" Rs.400"<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3){
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1){
			case 1: choice = 200*quantity;
			break;

			case 2: choice = 300*quantity;
			break;

			case 3: choice = 400*quantity;
			break;}
			system("CLS");
			switch (pchoice1){
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Nalin's Fast Food\n";
			  fflush(stdin);
			  strcpy(decision,bur1);
			  goto here;
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<bur2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Nalin's Fast Food\n";
			  fflush(stdin);
			 strcpy(decision,bur2);
			 goto here;
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Nalin's Fast Food\n";
			  fflush(stdin);
			 strcpy(decision,bur3);
			 goto here;
			 break;}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y'){
			  goto beginning;
			}}}
	else if(choice1==3)
	 {pchoice=0;
		cout<<"\n1  "<<sand1<<" Rs.200"<<"\n";
		cout<<"2  "<<sand2<<" Rs.150"<<"\n";
		cout<<"3  "<<sand3<<" Rs.80"<<"\n";
		cout<<"\nPlease Enter which Sandwich you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1){
			case 1: choice = 200*quantity;
			break;

			case 2: choice = 150*quantity;
			break;

			case 3: choice = 80*quantity;
			break;}
			system("CLS");
			switch (pchoice1){
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<sand1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Nalin's Fast Food\n";
			  fflush(stdin);
			 strcpy(decision,sand1);
			 goto here;
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<sand2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Nalin's Fast Food\n";
			  fflush(stdin);
			  strcpy(decision,sand2);
			  goto here;
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<sand2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Nalin's Fast Food\n";
			  fflush(stdin);
			  strcpy(decision,sand3);
			  goto here;
			 break;}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{goto beginning;}}}
	 else if(choice1==4)
	 {pchoice=0;
		cout<<"\n1 "<<roll1<<" Rs.170"<<"\n";
		cout<<"2 "<<roll2<<" Rs.180"<<"\n";
		cout<<"3 "<<roll3<<" Rs.150"<<"\n";
		cout<<"\nPlease Enter which you would like to have?: ";
		fflush(stdin);
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{cout<<"\nHow Much Rolls Do you want: ";
			cin>>quantity;
			switch(pchoice1){
			case 1: choice = 170*quantity;
			break;

			case 2: choice = 180*quantity;
			break;

			case 3: choice = 150*quantity;
			break;}
			system("CLS");
			fflush(stdin);
			switch (pchoice1){
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<roll1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Nalin's Fast Food\n";
			 fflush(stdin);
			  strcpy(decision,roll1);
			  goto here;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<roll2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Nalin's Fast Food\n";
			  fflush(stdin);
			  strcpy(decision,roll2);
			  goto here;
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<roll3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Nalin's Fast Food\n";
			  fflush(stdin);
			  strcpy(decision,roll3);
			  goto here;
			 break;}}}
	else if(choice1==5){
	 	pchoice=0;
	 	fflush(stdin);
		cout<<"\n1 "<<bir1<<" Rs.160"<<"\n";
		cout<<"2 "<<bir2<<" Rs.220"<<"\n";
		cout<<"3 "<<bir3<<" Rs.140"<<"\n";
		cout<<"\nPlease Enter which Biryani you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3){
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1){
			case 1: choice = 160*quantity;
			break;

			case 2: choice = 220*quantity;
			break;

			case 3: choice = 140*quantity;
			break;}
			system("CLS");
			switch (pchoice1){
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bir1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Nalin's Fast Food \n";
			  fflush(stdin);
			  strcpy(decision,bir1);
			  goto here;
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<bir2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Nalin's Fast Food\n";
			  fflush(stdin);
			 strcpy(decision,bir2);
			 goto here;
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bir3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Nalin's Fast Food\n";
			  fflush(stdin);
			 strcpy(decision,bir3);
			 goto here;
			 break;}
			 yes:
			{
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y'){
			  goto beginning;
			}else
			{ goto no;}}}}
no:{system("CLS");
				cout<<"Are you sure you dont want to  order anything else? Y / N: " ;
				cin>>gotostart;

				if(gotostart=='N' || gotostart=='n'){
				  goto beginning;}
			else{
			     system("CLS");
				cout<<"Thank You,Please visit again \n Press any key to exit";
				goto out;}}
			here:{
					 fflush(stdin);
					if(pchoice==1)
	 strcpy(aaa,aa1);
	 	else if(pchoice==2)
	 strcpy(aaa,aa2);
	 	else if(pchoice==3)
	 strcpy(aaa,aa3);
	 fflush(stdin);
	 fprintf(fp,"\n");
	 fputs(name,fp);
	 fprintf(fp,"\n");
fprintf(fp,"\n%d\t",quantity);	
 fflush(stdin);			
fputs(aaa,fp);
fprintf(fp,"\t");
fputs(decision,fp);
 fflush(stdin);
fprintf(fp,"\n Rs. %d",choice);
fprintf(fp,"\n----------------------------------------------------------");
	goto yes;}
	out:
	fclose(fp);
     getch();}
