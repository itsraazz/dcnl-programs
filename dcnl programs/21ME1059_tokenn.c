#include<stdio.h>
#include<stdlib.h>
int main()
{
int no_of_packets,storage,output_queue;
int input_pkt_size,token_bucket;
int packet_arrival=0;
storage=0;
printf("enter initial bucket size:");
scanf("%d",&token_bucket);
for(int i=0;i<10;i++)
{
if(token_bucket!=30)
token_bucket+=1;
else
{
printf("max token size reached");
token_bucket=0;
}
printf("\n token size=%d",token_bucket);
packet_arrival=rand()%2;
if(packet_arrival==1)
{
input_pkt_size=rand()%10+1;
printf("\n packet of size incoming :%d",input_pkt_size);
if(input_pkt_size<=token_bucket)
{
printf("\n packet is sent");
token_bucket-=input_pkt_size;
}
else
puts("packet is discarded");
}
else
continue;
}
return 0;
}
