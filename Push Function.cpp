#include <iostream>  
#include <stack>  
int main()  
{  
    std::stack<int> a,b;  
    a.push(5); a.push(8); a.push(50);  
    b.push(132); b.push(45);  
    std::cout<<"Size of a: "<<a.size();  
    std::cout<<"\n Size of b:" <<b.size();  
    return 0;  
}  