#include<stdio.h>
int main()
{
	char str1[12]="Hello";
	char str2[12]="World";
	char str3[13];
	int len,i;
	// strcpy(str3,str1);
	// printf("\n%s",str3);
	// strcat(str1,str2);
	// printf("\n%s",str1);
	// len=strlen(str1);
	// printf("\nlength is %d",len);
	for(i=0;str1[i]!='\0';i++)
	printf("\n%d",i+1);
	return 0;
}