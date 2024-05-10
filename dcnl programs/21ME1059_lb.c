#include<stdio.h>
#include<stdlib.h>
struct packet
{
int time;
int size;
}p[50];
int main()
{
int i,n,m,k=0;
int bsize,bfilled,outrate;
printf("Enter the number of packets:");
scanf("%d",&n);
printf("Enter packets in the order of their arrived time\n");
for(i=0;i<n;i++)
{
printf("Enter the time and size :");
scanf("%d%d",&p[i].time,&p[i].size);
}
printf("Enter the bucket size:");
scanf("%d",&bsize);
printf("Enter the output rate:");
scanf("%d",&outrate);
m=p[n-1].time;
i=1;
k=0;
bfilled=0;
while(i<=m||bfilled!=0)
{
printf("\n\n At time %d",i);
if(p[k].time==i)
{
if(bsize>=bfilled+p[k].size)
{
bfilled=bfilled+p[k].size;
printf("\n%d byte packet is inserted",p[k].size);
k=k+1;
}
else
{
printf("\n%d byte packet is declared",p[k].size);
k=k+1;
}
}
if(bfilled==0)
{
printf("\n no of packets to be transmitted");
}
else if(bfilled>outrate)
{
bfilled=bfilled-outrate;
printf("n%d  byte transferred",outrate);
}
else
{
printf("\n%d byted transmitted",bfilled);
bfilled=0;
}
printf("\n packet in the bucket %d byte",bfilled);
i++;
}
return 0;
}
