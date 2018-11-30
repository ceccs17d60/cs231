Insertion Sort

//Jacob Mathew
//S3D
//60


#include<stdio.h>
void main()
{
int j,k,i,n,temp,g,c;
printf("enter array limit\n");
scanf("%d",&n);
int a[n];
printf("enter array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(k=1;k<n;k++)
{
temp = a[k];
j=k-1;
  while(temp<a[j] && j>=0)
  {
  a[j+1] = a[j];
  --j;
  }
  a[j+1]=temp;
}
printf("sorted array:\n");
for(c=0; c<n; c++)
{
printf("%d\n",a[c]);
}
}
