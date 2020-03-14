/*Write a function that takes a C string as an input parameter and reverses the string. The function
should use two pointers, front and rear. The front pointer should initially reference the first
character in the string, and the rear pointer should initially reference the last character in the string.
Reverse the string by swapping the characters referenced by front and rear, then increment front
to point to the next character and decrement rear to point to the preceding character, and so on,
until the entire string is reversed. Write a main program to test your function on various strings of
both even and odd length.*/
#include<iostream>
#include <string.h>
using namespace std;
void reverse_string(char*);

int main()
{
    char str[]="";
    cout<<"Enter the string you want to reverse "<<endl;
    cin>>str;
    cout<<"The address is "<<&str<<endl;
    reverse_string(str);
   return 0;
}

void reverse_string(char *s)
{
    char *front,*rear;
    char ch;
    int len_str = strlen(s);
    cout<<"The length is "<<len_str<<endl;

    //int len_str = *s.length();
    front = s;
    rear = s;
    cout<<"Front is "<<front<<endl;
    cout<<"Rear is "<<rear<<endl;

    // Move the end_ptr to the last character 
    for (int i = 0; i<len_str-1; i++) 
        {
            rear++; 
        }
    
    // Swap the char from start and end 
    // index using begin_ptr and end_ptr 
    for (int i = 0; i < len_str/2; i++) 
        { 
            // swap character 
            ch = *rear; 
            *rear = *front; 
            *front = ch; 
  
            // update pointers positions 
            front++; 
            rear--; 
        } 
        for (int i =0;i<len_str;i++)
            cout<<s[i];
}