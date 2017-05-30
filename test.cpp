#include <iostream>

int addNewFunction(int x,int y)
{
    std::cout<< "add a new function"<<std::endl;
    return x+y;
}


int main()
{
    std::cout << "hello lemon,its a test cpp" << std::endl;
    addNewFunction(2,3); 
    return 0;
}

