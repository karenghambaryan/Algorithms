#include <iostream>
#include <vector>

namespace my
{
    template <typename T>
    void Quick(std::vector<T>& vector, int Right, int Left)
    {
        int i = Left;
        int j = Right;
        T middle = vector[(Right + Left) / 2];
        while(i <= j)
        {
            while(vector[i] < middle)
            {
                i++;
            }
            while(vector[j] > middle)
            {
                j--;
            }
            if(i <= j)
            {
                swap(vector[i], vector[j]);
                i++;
                j--;
            }
            if(Left < j)
            {
                Quick(v,Left,j);
            }
            if(i < Right);
            {
                Quick(v,i,Right);
            }
        }
    }
}


int main()
{
    std::vector<int> v = {1, 8, 10, 9, 6};

    my::Quick(v, 0, v.size() - 1);

    for (int x : v)
    {
        std::cout << x << " " << std::endl;
    }
    std::cout << std::endl;
    return 0;   
}