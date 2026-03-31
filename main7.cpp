#include<iostream>

int main(){

    int a = 10;
    int b = 65;

    std::cout<<((a > b) && (a + b) >= 16)<<std::endl;
    // ambas condições são verdade (&& ambas)
    std::cout<<((a > b) || (a + b) >= 16)<<std::endl;
    // basta uma condição sendo verdade (|| ou)
    
    return 0;
}