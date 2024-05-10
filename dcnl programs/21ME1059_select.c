#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
int nf,N;
int no_tr=0;
srand(time(NULL));
printf("\n enter the number of frames:");
scanf("%d",&nf);
printf("enter the window size:");
scanf("%d",&N);
int i=1;
while(i<=nf)
{
int x=0;
for(int j=i;j<i+N&&j<=nf;j++)
{
printf("sent frame %d\n",j);
no_tr++;
}
for(int j=i;j<i+N&&j<=nf;j++)
{
int flag=rand()%2;
if(!flag)
{
printf("acknowledgement for frame %d \n",j);
x++;
}
else
{
printf("frame %d not received \n",j);
printf("retransmitting frame %d alone \n",j);
j--;
no_tr++;
}
}
i+=x;
printf("\n");
}
printf("total no of transmission: %d \n",no_tr);
return 0;
}
