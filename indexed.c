#include<stdio.h>
#include<stdlib.h>
void main()
{
int f[50],index[50],i,n,st,len,j,k,c,ind,count=0;
for(i=0;i<50;i++)
f[i]=0;
x:printf("enter index of block");
scanf("%d",&ind);
if(f[ind]!=1)
{
printf("enter no of block nedded and no of file for the index %d on the disk: \n",ind);
scanf("%d",&n);
}
else
{
printf("%d index is allready allocated\n",ind);
goto x;
}
y: count=0;
for(i=0;i<n;i++)
{
scanf("%d",&index[i]);
count++;
}
if(count==n)
{
for(j=0;j<n;j++)
f[index[j]]=1;
printf("allocated\n");
printf("file indexed\n");
for(k=0;k<n;k++)
printf("%d---------->%d : %d\n ",ind,index[k],f[index[k]]);
}
else
{
printf("file in the index is allready aloacted\n");
printf("enter another file indexed");
goto y;
}
printf("do you want to enter  more file (yes:1 ,exit :0)");
scanf("%d",&c);
if(c==1)
goto x;
else
exit(0);
getch();
}
