#include<stdio.h>
#include<stdlib.h>
void main(){
int f[50],p,i,len,j,c,k,a,st;
for(i=0;i<50;i++)
f[i]=0;
printf("enter how many blocks alredy allocated : ");
scanf("%d",&p);
printf("enter blocks alredy allocated");
for(i=0;i<p;i++)
{
scanf("%d",&a);
f[a]=1;
}

x:printf("enter index starting block and lenght");
scanf("%d%d",&st,&len);
k=len;
if(f[st]==0)

{

for(j=st;j<(st+k);j++)
{
if(f[j]==0)
{
f[j]=1;
printf("%d------------>%d\n",j,f[i]);
}
else
{
printf("%d blockis allredy allocated\n",j);
k++;
}
}
}
else
printf("%d starting block is already allocated\n",st);
printf("do you want to enter more file if  yes 1 else 0");
scanf("%d",&c);
if(c==1)
goto x;
else
exit(0);
}



