/*Write a program in C++ to say digits using recursion*/
#include<iostream>
using namespace std;
void sayDigit(int n , string arr[]){
      if (n == 0) 
            return;

        int digit = n % 10;
        n = n / 10;
        sayDigit(n, arr);
         cout<<arr[digit]<<" ";
}
int main()
{
     string arr[11] = {"Zero", "One", "Two", "Three", "Four",
                "Five", "Six", "Seven", "Eight",
                "Nine"};
      int n;
      cout<<"Enter the number=> ";
      cin>>n;
      cout<<endl<<endl<<endl;
      sayDigit(n,arr);
      cout<<endl<<endl<<endl;
      return 0;
}