#include<stdio.h>
void main()
{
int i,j,k,n,d,temp;
printf("enter the number of elements\n");
scanf("%d",&n);
int a[n];
printf("enter array elements\n");
for(i=0;i<n;++i)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;++j)
{
  for(k=j+1;k<n;++k)
  {
    if(a[j]>a[k])
     {
      temp=a[j];
      a[j]=a[k];
      a[k]=temp;
     }
  }
}
printf("sorted array:\n");
for(d=0;d<n;++d)
{
printf("%d \n",a[d]);
}
}
