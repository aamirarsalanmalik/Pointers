// Write a C++ program to perform insertion sort using pointers. 
#include<iostream>
using namespace std;
void insertion_sort(int*,int);
int main()
{
    int array[7],size,*pointer;
    cout<<"Enter the number of elements you want to sort "<<endl;
    cin>>size;
    int num = 0;
    pointer = new int[size]; //Dynamic memory allocation 
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element no : "<<num+1<<endl;
        cin>>pointer[i];
        num++;
    }
    insertion_sort(pointer,size);
    cout<<"The sorted array is "<<endl;
    for(int j=0; j<size; j++) // Output of insertion sort 
        cout << pointer[j] <<" ";
    return 0;
}

void insertion_sort(int *pointer, int size)
{   int j =1;
    int count = size-1;
    int marker = pointer[j];
    while (count>0)
    {
        for(int k =j ; k>0; k--)
        {
            // Here we have used pointer offset notation 
            if(pointer[k]<pointer[k-1]) 
            {
                int temp = *(pointer + k);
                *(pointer + k) = *(pointer + (k-1));
                *(pointer + (k-1)) =temp;
            }
        }
        if(j<=size-1)
        {
            j++;
            count--;
        }
    }
}