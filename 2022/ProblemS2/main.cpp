#include <iostream>

int main()
{
    int x = 0;
    std::cin >> x;
    std::string** work_together = new std::string*[x];
    for (int i = 0; i < x; i++)
    {
        work_together[i] = new std::string[2];
        std::cin >> work_together[i][0];
        std::cin >> work_together[i][1];
    }
    
    int y = 0;
    std::cin >> y;
    std::string** work_apart = new std::string*[y];
    for (int i = 0; i < y; i++)
    {
        work_apart[i] = new std::string[2];
        std::cin >> work_apart[i][0];
        std::cin >> work_apart[i][1];
    }
    
    int g = 0;
    std::cin >> g;
    
    int violations = 0;
    
    for (int i = 0; i < g; i++)
    {
        std::string group[3];
        std::cin >> group[0];
        std::cin >> group[1];
        std::cin >> group[2];
        
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < x; k++)
            {
                if (group[j] == work_together[k][0] && !(group[0] == work_together[k][1] || group[1] == work_together[k][1] || group[2] == work_together[k][1])) violations++;
            }
        }
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < y; k++)
            {
                if (group[j] == work_apart[k][0] && (group[0] == work_apart[k][1] || group[1] == work_apart[k][1] || group[2] == work_apart[k][1])) violations++;
            }
        }
    }
    
    std::cout << violations << std::endl;

    for (int i = 0; i < x; i++)
    {
        delete[] work_together[i];
    }
    delete[] work_together;
    for (int i = 0; i < y; i++)
    {
        delete[] work_apart[i];
    }
    delete[] work_apart;
}