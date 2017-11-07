#include "./header.h"

// https://codility.com/demo/results/trainingY6NCUP-N9X/
int PermCheck(std::vector<int> &A) {
    std::sort(A.begin(), A.end());

    for(size_t i = 0; i < A.size(); i++) {
        if(A[i] != i + 1) { return 0; }
    }

    return 1;
}

int main(int argc, char **argv) {
    auto start = std::chrono::high_resolution_clock::now();
    
    std::vector<int> A;
    A.push_back(4);
    A.push_back(1);
    A.push_back(3);
    A.push_back(2);
    std::cout << PermCheck(A) << std::endl;

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Execution time: " << elapsed.count() << std::endl;
    return 0;
}