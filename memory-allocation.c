#include<stdio.h>
#include<stdlib.h>
int a[50],i,j,x,r,c;
int block,lenght,count=0;
void main(){
    for(i=1;i<50;i++){
        a[i]=0;

    }
   
    x:count=0;
    printf("enter start block");
    scanf("%d",&block);
    printf("enter lenght of block");

    scanf("%d",&lenght);

    c=block;


    for(j=block;j<(block+lenght);j++)
    {
        if(a[j]==1){
        printf("\nallredy alocated");
        break;
        }
        
        else
        {

            a[j]=1;
            
         printf("\nblock no %d full to:  1\n",c++);
           
        }
      
         
    }
    for(i=0;i<50;i++)
    {
        printf("%d",a[i]);
    }
    
    printf("\n enter 1 for add new value or 0 for exit");
    scanf("%d",&r);
    if(r==1){
    goto x;
    }
    else{
        exit;
    }
     
    }

