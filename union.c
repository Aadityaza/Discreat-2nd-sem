#include<stdio.h>


int main(void)
{
    int arr_A[]={1,2,3,7,9,8,41,32};
    int n=8;
    int arr_B[]={21,43,78,9,43,78,43,23,67};
    int n2=9;
    int c2=0;

    int arr_union[100];
    for(int i= 0 ;  i !=n ; i++)
    {
        arr_union[i]=arr_A[i];
    }


     for(int i= 0;i !=n2 ; i++)
    {
        int c =0;

        for(int j=0 ;j!=n;j++)
        {
        if(arr_B[i] == arr_A[j])
        c++;
        }
        if(c==0)
        arr_union[i+n-c2]=arr_B[i];
        else c2++;
    }

  for(int i=0 ; i !=(n+n2-c2); i++)
    {
     printf("%d\n",arr_union[i]);
    }
    return 0;

}
