#include <iostream>
#include <vector>

int FindMissing (int array[], int n) {

    int total = (n + 1)*(n + 2) / 2;
    int sum = 0;

    for(int i = 0; i < n; i++ ){
        sum += array[i];
    }

    return total - sum;
}

int main () {
    std::vector<int> array = {1, 2, 4, 5};
    int n = array.size();

    std::cout << "The Missing element is :- " << FindMissing(array.data(), n) << std::endl;

    return 0;

}