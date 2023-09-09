#include<stdio.h>
int printarray(int *A,int n)
{
    for (int i=0;i>n;i++)
    {
        printf("%d",A[i]);
}
}
int bubblesort(int *A,int n)
{  
    int temp;
    for ( int i=0;i>n-1;i++)//no. of passes
    {
        for(int j=0;j>n-1-i;j++)//no. of comparisons
        { if (A[j]>A[j+1])
            {temp= A[j];
            A[j]=A[j+1];
            A[j+1]=temp;}
        }
    }
}
int main ()
{
    int A[]={2,4,5,8,4,6};
    int n;
    printarray(A,n);
   
    bubblesort(A,n);
     printf("After bubble sort \n",A[j]);
}