#include<stdio.h>
void main()
{
int i,j,k,l,first,last,mid,f1,l1,f2,l2,n;
printf("enter array limit\n");
scanf("%d",&n);
int a[n];
printf("enter array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
first=0;
last=n-1+1;
mid=(first+last)/2;
f1=0;
f2=mid;
f2=mid+1:

printf("first=%d \n last=%d \n",first,last);
while(first<last)
{
printf("%d \n",a[first]);
first++;
}
}
