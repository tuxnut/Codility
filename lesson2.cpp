#include "./header.h"

// https://codility.com/demo/results/trainingBP6EKW-JCN/
int OddOccurrencesInArray(std::vector<int> &A) {
    std::sort(A.begin(), A.end());

    for(size_t i = 0; i < A.size(); i +=2 ) {
        if(A[i] != A[i+1])
            return A[i];
    }
}

std::vector<int> CyclicRotation(std::vector<int> &A, int K) {
    if(K == 0 || A.size() < 2 || K == A.size()) {
        return A;
    }

    for(size_t i = 0; i < K; i++) {
        A.insert(A.begin(), A.back());
        A.pop_back();
    }

    return A;
}

int main(int argc, char **argv) {
    
    std::vector<int> A;
    // A.push_back(9);
    // A.push_back(3);
    // A.push_back(9);
    // A.push_back(3);
    // A.push_back(9);
    // A.push_back(7);
    // A.push_back(9);
    A.push_back(3);
    A.push_back(8);
    A.push_back(9);
    A.push_back(7);
    A.push_back(6);
    A.push_back(6);

    auto start = std::chrono::high_resolution_clock::now();

    // std::cout << OddOccurrencesInArray(A) << std::endl;
    std::cout << CyclicRotation(A, 3)[0] << std::endl;

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Execution time: " << elapsed.count() << std::endl;
    return 0;
}