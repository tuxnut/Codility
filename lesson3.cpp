#include "./header.h"

int PermMissingElem(std::vector<int> &A) {
    if(A.size() < 2) {
        return 1;
    }

    std::sort(A.begin(), A.end());

    for(size_t i = 0; i < A.size(); i++) {
        if(A[i] != i + 1) {
            return i + 1;
        }
    }
}

int main(int argc, char **argv) {
    auto start = std::chrono::high_resolution_clock::now();
    
    std::vector<int> A;
    A.push_back(2);
    A.push_back(3);
    A.push_back(1);
    A.push_back(5);

    std::cout << PermMissingElem(A) << std::endl;

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Execution time: " << elapsed.count() << std::endl;
    return 0;
}