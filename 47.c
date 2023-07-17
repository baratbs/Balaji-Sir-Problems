#include<stdio.h>
void addition_of_two_arrays(int*,int*,int*);
int main()
{
int array1[50],array2[50],result_array[51];
for(int i=0;i<50;i++)
{
	printf("Enter the number:\n");
	scanf("%d",&array1[i]);
}
for(int i=0;i<50;i++)
{
	printf("Enter the number2:\n");
	scanf("%d",&array2[i]);
}
addition_of_two_arrays(&array1[49],&array2[49],&result_array[51]);
for(int i=0;i<51;i++)
{
printf("%d",result_array[i]);
}
}

void addition_of_two_arrays(int* pointer1,int*pointer2,int* result_pointer)
{
int remainder[1]={0},temp_answer[1]={0};
for(int i=0;i<50;i++)
{
temp_answer[0]=*pointer1+*pointer2+remainder[0];
*result_pointer=temp_answer[0]%10;
remainder[0]=temp_answer[0]/10;
pointer1--;
pointer2--;
result_pointer--;
}
*result_pointer=remainder[0];
}
