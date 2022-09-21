#include<stdio.h>
int Arr[]={1,2,2,3,3,4,3,2,5,5,3,2}; 
int length_Arr(int* ptr)
{
    int length = 0; 
    while (*(ptr+length)!='\0')
    {
        length++;
    }
    return length;
}
int main(int argc, char const *argv[])
{
    int l = length_Arr(Arr);
    int  max =0, pos=0;
    for (int i=0; i<l-1; i++){
        int count = 0;
        for (int j=0; j<l; j++){
            if (Arr[i] == Arr[j])
            {
                count++;
            }
        }
        if (count > max){
            max = count;
            pos = i;
        }
    }
    printf("so xuat hien nhieu nhat ");
    printf("%d, %d lan \n",Arr[pos],max);
    printf("vi tri xuat hien ");
    for (int i=0; i<l ; i++){
        if (Arr[i] == Arr[pos] ){
            printf("%d ",i);
        }
    }
    return 0;
}
