#include<stdio.h>
#include<conio.h>
int main()
{
int array[100],size,i,j;
printf("Enter number of elements in array\n");
scanf("%d",&size);
printf("Enter %d number\n",size);
for(i=0;i<size;i++)
{
scanf("%d",&array[i]);
}
printf("Unique element\n");
for(i=0;i<size;i++)
{
for(j=0;j<i;j++)
{
if(array[i]==array[j])
break;
}
if(i==j)
{
printf("%d",array[i]);
}
}
getch();
return 0;
}
