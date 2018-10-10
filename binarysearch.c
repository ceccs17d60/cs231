#include<stdio.h>
void main()
{
int i,j,k,n,d,temp;
int search,first,last,middle;
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
printf("enter a search element");
scanf("%d",&search);
first=0;
last=n-1;
middle=(first+last)/2;
middle = (first+last)/2;
while (first <= last)
{
 if(a[middle] < search)
 {
  first = middle + 1;

  }
  else if(a[middle] == search)
  {
  printf("%d found at location %d\n", search, middle+1);
  break;
  }
  else
  {
  last = middle - 1;
  }
middle = (first + last)/2;
}
if(first > last)
{
printf("Not found! %d is not present in the list.",search);
}
}
