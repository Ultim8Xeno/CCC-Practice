#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    
    int pairs = 0;
    
    int a = std::floor(n/4.0f);
    
    while(a>=0)
    {
        if ((n-4*a) % 5 == 0) pairs++;
        a--;
    }
    
    std::cout << pairs << std::endl;
}