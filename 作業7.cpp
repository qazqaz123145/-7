#include <stdio.h>
#include <stdlib.h>


int main ()
{
 int QAQ,i,sum;   	
 printf("�п�J�@�Ӿ��:");
 scanf("%d",&QAQ);
 sum=(QAQ*(QAQ+1)/2);
 printf("����");
  for(i =1; i<=QAQ; i++)
  {
    if(i!=QAQ)
     printf("%d+",i);
	else  
     printf("%d=%d",i,sum);
  }
 return 0;
 
 
 }

