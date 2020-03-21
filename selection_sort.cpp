// Write a C++ program to perform selection sort using pointers. 
#include <iostream>
using namespace std;
void selection_sort(int*,int);//////////////////prototype
void swap_numbers(int*,int*);
int main()
{
       int array[5],size=5,*pointer;
       cout<<"Enter the number of elements you want to sort "<<endl;
       cin>>size;
       pointer = new int[size]; //Dynamic memory allocation 
       for(int num=0;num<size;num++)
       {
       cout<<"Enter element no : "<<num+1<<endl;
       cin>>pointer[num];
       }
       //pointer=array;
       selection_sort(pointer,size);
       for(int j=0; j<size; j++) // Output of selection sort 
            cout << pointer[j] <<" ";
       return 0;
       }

       void selection_sort(int *pointer,int size)
       {
              int count1,count2,swap;

              for(count1=0;count1<size-1;count1++)
              {
                  int minimum = count1;
                     for(count2=count1+1;count2<size;count2++)                    
                           if(pointer[count2]<pointer[minimum])
                               minimum = count2;
                               swap_numbers(&pointer[minimum],&pointer[count1]); //Here we have used the pointer virable with the array subscript
              }
       }
       

void swap_numbers(int *num1,  int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
