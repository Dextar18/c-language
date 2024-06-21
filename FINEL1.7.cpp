#include<stdio.h>

int main()
{
    FILE *p;

    char data[100];

    p=fopen("demo99.txt","r");

    if(p==NULL)
    {
        printf("Can't open file...");
    }
    else
    {
        printf("Open file...\n");
       
    }
    
    while(fgets(data , 50 , p) != NULL){
    	printf("%s",data);
	}
    
   
}
