#include "./header.h"

// https://codility.com/demo/results/training65UHK8-EGH/
int CountDiv(int A, int B, int K) {
    int diff_A = (A % K != 0) ? K - (A % K) : 0;
    int diff_B = (B % K != 0) ? (B % K): 0;

    A += diff_A;
    B -= diff_B;

    if(A % K != 0 || B % K != 0) {
        std::cout << "problem !!!!!!" << std::endl;
    }

    if(A > B) {
        return 0;
    }

    return (B - A) / K + 1;
}

// https://codility.com/demo/results/trainingNYY69U-FJG/
int PassingCars(std::vector<int> &A) {
    int P = 0;
    int nbPairs = 0;

    for(unsigned i = 0; i < A.size(); i++) {
        if(A[i] == 0) {
            P++;        
        } else {
            nbPairs += P;
        }

        if(nbPairs > 1000000000) {
            return -1;
        }
    }
    return nbPairs;
}


int MinAvgTwoSlice(std::vector<int> &A) {
    int length = 1;

    
}

int main(int argc, char **argv) {
    std::vector<int> A;

    // A.push_back(0);
    // A.push_back(1);
    // A.push_back(0);
    // A.push_back(1);
    // A.push_back(1);
    A.push_back(4);
    A.push_back(2);
    A.push_back(2);
    A.push_back(1);
    A.push_back(5);
    A.push_back(8);
    A.push_back(5);

    auto start = std::chrono::high_resolution_clock::now();

    // std::cout << CountDiv(1, 1, 1) << std::endl;
    
    // std::cout << PassingCars(A) << std::endl;

    std::cout << MinAvgTwoSlice(A) << std::endl;

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Execution time: " << elapsed.count() << std::endl;
    return 0;
}
