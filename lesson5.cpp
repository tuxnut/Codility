#include "./header.h"

int CountDiv(int A, int B, int K) {
    int diff = B - A;
    
    return 0;
}

int main(int argc, char **argv) {
    auto start = std::chrono::high_resolution_clock::now();

    std::cout << CountDiv(6, 11, 2) << std::endl;
    
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Execution time: " << elapsed.count() << std::endl;
    return 0;
}