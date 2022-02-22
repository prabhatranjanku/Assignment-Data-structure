#include <iostream>  
#include <stack>  
int main()  
{  
         std::stack<int> newstack;  
         for(int j= 0; j<5; j++)  
         newstack.push(j);  
         std::cout << "Poping the elements out of the stack??.";  
         while (!newstack.empty () )  
         {  
       std::cout<<" " << newstack.top ();  
        newstack.pop();  
    }  
      
  
std::cout<<"\n";  
return 0;  
}