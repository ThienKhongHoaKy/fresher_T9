#include<stdio.h>
int Arr[]={4,6,7,9,23,3,1,6}; 
int length_Arr(int* ptr)
{
    int length = 0; 
    while (*(ptr+length)!='\0')
    {
        length++;
    }
    return length-1;
}
void ascending_Arr(int* ptr)
{
    int l = length_Arr(ptr);
    for (int i= 0 ; i < l-1 ; i++){
        for (int j = i+1 ; j < l ; j++)
        {
            if (*(ptr+i) > *(ptr+j))
            {
                int temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }       
    }
    for (int i=0; i<l; i++)
    {
        printf("%d ",Arr[i]);
    }
}
void descending_Arr(int* ptr)
{
        int l = length_Arr(ptr);
    for (int i= 0 ; i < l-1 ; i++){
        for (int j = i+1 ; j < l ; j++)
        {
            if (*(ptr+i) < *(ptr+j))
            {
                int temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }       
    }
    for (int i=0; i<l; i++)
    {
        printf("%d ",Arr[i]);
    }
}
int main(int argc, char const *argv[])
{
    
    descending_Arr(Arr);
    
    return 0;
}
