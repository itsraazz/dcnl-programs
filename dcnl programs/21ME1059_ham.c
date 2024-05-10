#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int d[7],r[7],i,c1,c2,c3,c;
printf("enter 4  bit message with space:");
scanf("%d%d%d%d",&d[0],&d[1],&d[2],&d[4]);
d[6]=d[0]^d[2]^d[4];
d[5]=d[0]^d[1]^d[4];
d[3]=d[0]^d[1]^d[2];
printf("\n encoded bits:");
for(i=0;i<7;i++)
printf("%d",d[i]);
for(i=0;i<7;i++)
r[i]=d[i];
srand(time(NULL));
r[6]=rand()%2;
printf("\n received data:");
for(i=0;i<7;i++)
printf("%d",r[i]);
c1=r[6]^r[4]^r[2]^r[0];
c2=r[5]^r[4]^r[1]^r[0];
c3=r[3]^r[2]^r[1]^r[0];
c=4*c3+2*c2+c1;
if(c==0)
printf("\n errorfree");
else
{
printf("\nerror position:%d",7-c);
printf("\n correct message:\n");
if(r[7-c]==0)
    r[7-c]=1;
else
    r[7-c]=0;
    for(i=0;i<7;i++)
    printf("%d",r[i]);
    }
}
