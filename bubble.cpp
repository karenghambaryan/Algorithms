#include <iostream>
#include <vector>

namespace my
{
    void swap(int& a, int& b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    template <typename T>
    void bubble(std::vector<T>& arr)
    {
        int n = arr.size();

        for(int i = 0; i < n - 1; i++)
        {
            for(int j = 0; j < n - i - 1; j++)
            {
                if(arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
}

int main()
{
    std::vector<int> arr = {5, 3, 8, 1, 2};

    my::bubble(arr);

    for(int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}