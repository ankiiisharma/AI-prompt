#include <stdio.h>

void main()
{
int n,i,j,k=0,c=0,count;
printf("Enter the no. of elements in A:");
scanf("%d",&n);
int a[n];
printf("Enter elements of A:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

int b[n];
printf("Enter elements of B:");
for(i=0;i<n;i++)
{
    scanf("%d",&b[i]);
}

int x[20],d[20];

for(i=0;i<n;i++)
{
    count=0;
    for (j=0;j<n;j++)
    {
        if(a[i]==b[j])
        {
         count =1; 
        }
        else (count == 0)
        {
            c[k]=a[i];
            k++;
        }
    }

}
printf("Differecnce in A-B is:");
for(i=0;i<k;i++)
{
    printf("%d",c[i]);
}
printf("\n");

printf("Difference in B-A is: ");
for(i=0;i<n;i++)
{
    count = 0;
    for(j=0;j<n;j++)
    {
        if (b[i]==a[j])
         { count = 1; }

         else (count == 0)
         {
            d[c]=b[i];
            printf("%d", d[c]);
            c++;
         }
    }
}
printf("\n SYMMETRIC DIFFERENCE is: ");

for(i=0;i<k;i++)
{
    printf("%d",x[i]);
    for (i=0;i<c;i++)
    {
        printf("%d",d[i]);
    }
}

}