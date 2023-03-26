4.	What will be the output of the C program?
#include<stdio.h>
int main(){
	int a = 130;
	char *ptr;
	ptr = (char *)&a;
	printf("%d ",*ptr);
	return 0;
}
  /* output of the program :
           0 or 130
   */
