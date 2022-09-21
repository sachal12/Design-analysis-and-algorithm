
#include <stdio.h>
#include <stdlib.h>

int main()

{
    int x=0,y=0,z=0,i,count,a;
    printf("enter the elemnts you want to enter");
    scanf("%d",&a);
    //printf("%d\n",a);
    int arr[a];
    
    int lower=0 , upper=2;
    
    
    for(int i=0 ; i<a ; i++)
    {
         arr[i] = (rand()%(3));
    }
    
    for(i=0 ; i<a ; i++)
    {
        if(arr[i]==0)
        x++;
        else if(arr[i]==1)
        y++;
        else if(arr[i]==2)
        z++;
        
    }
    
   // printf("%d %d %d ",x,y,z);
    
    if(x>y)
    {
        if(x>z)
        printf("X");
        else
        printf("Z");
        
    }
    else 
    {
        if(y>z)
        printf("Y");
        else
        printf("Z");
    }
    
}
