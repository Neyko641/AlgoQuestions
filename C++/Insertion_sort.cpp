#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

template<class T>
std::vector<T> GetData (std::vector<T> arr) {
    std::vector<int> data = {5, 2, 4, 6, 1, 3};
    for( auto el : data) {
        arr.push_back(el);    
    }
  return arr;
}
template<class T>
std::vector<T> InsertionSort(std::vector <T> arr) {
    for(auto j = 1; j < arr.size(); j++) {
        auto key = arr[j];
        auto i = j - 1;
        while((i > -1) && (arr[i] > key)) {
            arr[i+1] = arr[i];
            --i;
            }
            arr[i+1] = key;
    }    
    return arr;
}

int main()
{
    
    auto data = GetData<int>(std::vector<int>{});
    for (auto el : data) { 
        std::cout << "Data before InsertionSort: " << el << "\n";
    }
    auto sortedData = InsertionSort<int>(data);
    for (auto el : sortedData) { 
        std::cout << "Data after InsertionSort: " << el << '\n';
    }
  
}
