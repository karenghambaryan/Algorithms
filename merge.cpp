#include <iostream>
#include <vector>

namespace my
{
    template <typename T>
    void merge(std::vector<T>& arr, int left, int right)
    {
        if(left >= right)
        {
            return;
        }
        int mid = (left + right) / 2;
        merge(arr, left, mid);
        merge(arr, mid + 1, right);
        int i = left;
        int j = mid + 1;
        std::vector<T> temp;
        while(i <= mid && j <= right)
        {
            if(arr[i] < arr[j])
            {
                temp.push_back(arr[i++]);
            }
            else
            {
                temp.push_back(arr[j++]);
            }
        }
        while(i <= mid)
        {
            temp.push_back(arr[i++]);
        }
        while(j <= right)
        {
            temp.push_back(arr[j++]);
        }
        for(int k = 0; k < temp.size(); k++)
        {
            arr[left + k] = temp[k];
        }
    }
}

int main()
{
    std::vector<int> arr = {7, 2, 9, 1, 5};
    my::merge(arr, 0, arr.size() - 1);
    for(int x : arr)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}