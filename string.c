#include <stdio.h>
#include <string.h>
int main(void) {
     char k[100];
     gets(k);
     int lk=strlen(k);
     int times;
     scanf("%d",&times);
     int tl= times*lk;
     int i,x=0;
        for(i=lk-1;i<tl;i++)
        {
        k[i+1]=k[x];
        x++;
        }
    for(i=0;i<tl;i++)
    {
    printf("%c",k[i]);
    }

     return 0;
}
