#include<stdio.h>
#include<string.h>
int main()
{
unsigned char msg[100],key[100];
int msglen,keylen,i,j;
printf("\nEnter the message:");
scanf("%s",msg);
printf("\nEnter the key:");
scanf("%s",key);
msglen=strlen(msg);
keylen=strlen(key);
char newkey[100],encrypt[100],decrypt[100];
for(i=0,j=0;i<msglen;i++,++j)
newkey[i]=key[j%keylen];
newkey[i]='\0';
for(i=0;i<msglen;i++)
{
if(msg[i]>='a'&&i<='z')
{
encrypt[i]=((msg[i]+newkey[i]+14)%26)+'a';
decrypt[i]=((encrypt[i]-newkey[i]+26)%26)+'a';
}
else
{
encrypt[i]=((msg[i]+newkey[i])%26)+'A';
decrypt[i]=((encrypt[i]-newkey[i]+26)%26)+'A';}
}
encrypt[i]='\0';
decrypt[i]='\0';
printf("\nOriginal message:%s",msg);
printf("\nkey:%s",key);
printf("\nNew key:%s",newkey);
printf("\nEncrypted message:%s",encrypt);
printf("\nDecrypted message:%s\n",decrypt);
return 0;
}

