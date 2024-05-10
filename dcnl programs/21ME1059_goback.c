#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
 int nf,N,x;
 int no_tr=0;
 srand(time(NULL));
 printf("Enter the no of frames:");
 scanf("%d",&nf);
 printf("Enter the window size:");
 scanf("%d",&N);
 int i=1;
 while(i<=nf)
 {
 int x=0;
 for(int j=i;j<i+N&&j<=nf;j++)
 {
  printf("Sent frame:%d\n",j);
  no_tr++;
  }
  for(int j=i;j<i+N&&j<=nf;j++)
  {
   int flag=rand()%2;
   if(!flag)
   {
    printf("Ack for frame:%d\n",j);
    x++;
    }
    else
    {
    printf("Frame:%d",j);
    printf("Not received\n");
    printf("retransmitting window from frame %d",j);
    break;
    }
   }
   printf("\n");
   i+=x;
   }
  printf("Total no of transmissions:%d\n",no_tr);
  return 0;
  }
