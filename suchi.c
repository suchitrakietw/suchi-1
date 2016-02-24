#include<stdio.h>
int main()
{
int i,j,temp;
int n,i,j,t,a[10],min;
printf("enter any two values:");
scanf("%d %d",&i,&j);
temp=i;
i=j;
j=temp;
printf("after swapping %d %d",i,j);
selectionsort();
}
void selectionsort()
{
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
min=a[i];
for(j=i+1;j<=n;j++)
{
if(min>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
min=a[i];
}
}
}
printf("the sorted array is \n");
for(i=1;i<=n;i++)
printf("%3d",a[i]);
}

