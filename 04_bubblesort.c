Bubble Sort


//Jacob Mathew
//S3D
//60


#include<stdio.h>
void main()
{
int j,k,i,n,swap,l;
printf("enter number of array elements\n");
scanf("%d",&n);
int a[n];
printf("enter array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n-1;j++)
{
  for (k=0;k<n-j-1;k++)
  {
    if (a[k] > a[k+1])
    {
      swap       = a[k];
      a[k]   = a[k+1];
      a[k+1] = swap;
    }
  }
}
printf("Sorted array:\n");
for(l=0;l<n;l++)
{
printf("%d\n", a[l]);
}
}
