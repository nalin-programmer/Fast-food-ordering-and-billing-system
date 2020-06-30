#include<stdio.h> 
#include<unistd.h>
#include<string.h>
#include<iostream>
#include<cstdio>
#include<conio.h>
#define MAXCHAR 10000
password()
{ 
again:
	{
	
    char password[55],pass[55]="user123"; 
  char username[20];
  char user[20]="user";
  printf("\t\t user:\t");
  fflush(stdin);
  gets(username);
    printf("\n\t\t password: "); 
    int p=0; 
    do{ 
        password[p]=getch(); 
        if(password[p]!='\r'){ 
            printf("*"); 
        } 
        p++; 
    }while(password[p-1]!='\r'); 
    password[p-1]='\0'; 
  if(strcmp(username,user)==0)
{
   	
  if(strcmp(pass,password)==0)
  { 
  {
    goto yes;
   yes:
	{ 
	   system("CLS");
		FILE *fp;
    char str[MAXCHAR];
    char* filename = "database.txt";
 
    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 1;
    }
    while (fgets(str, MAXCHAR, fp) != NULL)
        printf("%s", str);
    fclose(fp);
       cout<<"\n Press any key to exit....";
    goto finish;
	}
}
  }
  else
  {
	printf("\n\n\t\t Invalid Password");
	sleep(2);
	system("CLS");
	cout<<"\t\t\tHello,MASTER"<<endl;
	goto again;
  }
}
else
printf("\n\n\t\t Invalid Username");
sleep(2);
	system("CLS");
	cout<<"\t\t\tHello,MASTER"<<endl;
	goto again;

}
finish:
	{
	}
}





