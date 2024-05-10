#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void main()
{
 int i=1,j=1,noframes,x,x1=10,x2;
 printf("\n enter the number of windows:");
 scanf("%d",&noframes);
 printf("\n number of frames %d",noframes);
 while(noframes>0)
 {
  printf("\n sending frame%d",i);
   srand(x1++);
   x=rand()%10;
   if(x%2==0)
   {
    for(x2=1;x2<2;x2++)
    {
     printf("\n waiting for %d secound, no acknowledgement received so retransmitting frame\n",x2);
     
     }
    printf("\n retransmitting frame %d",i);
    srand(x1++);
    x=rand()%10;
    }
    printf("\nAcknowledgement for frame %d",j);
    noframes-=1;
    i++;
    j++;
    }
    printf("\n end of stop wait protocal");
    }
    
