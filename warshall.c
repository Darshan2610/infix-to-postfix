#include<stdio.h>
void warsh(int p[][10],int n)
{
int i,j,k;
for(k=1;k<=n;k++)
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
p[i][j]=p[i][j] || p[i][k] && p[k][j];
}
int main()
{
int a[10][10],n,i,j;
printf("\nEnter the n value:");
scanf("%d",&n);
printf("\nEnter the graph data:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
warsh(a,n);
printf("\nResultant path matrix\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
printf("%d ",a[i][j]);
printf("\n");
}
return 0;
}


Output: 
Enter the n value:4
Enter the graph data:
0 1 0 0
0 0 0 1
0 0 0 0
1 0 1 0
Resultant path matrix
1 1 1 1
1 1 1 1
0 0 0 0
1 1 1 1
