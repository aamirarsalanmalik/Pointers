// Write a C++ program to perform bubble sort using pointers. 
#include <iostream>
using namespace std;
void bubble(int*,int);//////////////////prototype

int main()
{
       int Array[5],size=5,*pointer;

       for(int num=0;num<size;num++)
       {
       cout<<"Enter element no : "<<num+1<<endl;
       cin>>Array[num];
       }
       pointer=Array;
       bubble(pointer,size);
       return 0;
       }

       void bubble(int *pointer,int size)
       {
              int count1,count2,swap;

              for(count1=0;count1<size-1;count1++)
              {
                     for(count2=0;count2<size-count1-1;count2++)
                     {
                    
                           if(*(pointer+count2)>*(pointer+count2+1))
                           {
                           swap=*(pointer+count2);
                           *(pointer+count2)=*(pointer+count2+1);
                           *(pointer+count2+1)=swap;
                          
                           }
                    
                     }
              }

              for(count1=0;count1<size;count1++)
              {
              cout<<*(pointer+count1)<<" , ";
              }
       }
