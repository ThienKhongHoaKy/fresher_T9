#include<stdio.h>
int main(int argc, char const *argv[])
{
    int km;
    do
    {
        printf("nhap so km\n");
        scanf("%d",&km);
    } while (km<=0);
    if (km <=1)
    {
        printf("so tien phai tra: %d d\n",5000);
    }
    else if (km <= 30)
    {
        printf("so tien phai tra: %d d\n",5000+4000*(km-1));
    }
    else if (km > 30)
    {
        printf("so tien phai tra: %d d\n",5000+4000*29+3000*(km-30));
    }
    return 0;
}
