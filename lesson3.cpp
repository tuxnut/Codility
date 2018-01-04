#include "./header.h"

// https://codility.com/demo/results/training8MC94N-4RT/
int PermMissingElem(std::vector<int> &A) {
    if(A.size() == 0) return 1;

    std::sort(A.begin(), A.end());

    for(size_t i = 0; i < A.size(); i++) {
        if(A[i] != i + 1) {
            return i + 1;
        }
    }

    return A.back() + 1;
}

// https://codility.com/demo/results/trainingPE3Y93-CSA/
int TapeEquilibrium(std::vector<int> &A) {
    int firstPart = A[0];
    int secondPart = 0;

    // secondPart = std::accumulate(A.begin() + 1, A.end, 0);
    for(int i = 1; i < A.size(); i++) {
        secondPart += A[i];
    }

    int minEquilibrium = std::abs(firstPart - secondPart);

    for(size_t i = 1; i < A.size() - 1; i++) {
        firstPart += A[i];
        secondPart -= A[i];

        minEquilibrium = min(minEquilibrium, std::abs(firstPart - secondPart));
    }

    return minEquilibrium;
}

// https://codility.com/demo/results/trainingYZEBSG-TET/
int FrogJmp(int X, int Y, int D) {
    int diff = (Y - X) % D;
    return (diff == 0) ? (Y - X) / D : (Y - X) / D + 1;
}

int main(int argc, char **argv) {
    auto start = std::chrono::high_resolution_clock::now();

    // std::vector<int> A;
    // A.push_back(2);
    // A.push_back(5);
    // A.push_back(3);
    // A.push_back(1);
    // std::cout << PermMissingElem(A) << std::endl;

    // A.push_back(3);
    // A.push_back(1);
    // A.push_back(2);
    // A.push_back(4);
    // A.push_back(3);
    // std::cout << TapeEquilibrium(A) << std::endl;

    std::cout << FrogJmp(10, 85, 30) << std::endl;

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Execution time: " << elapsed.count() << std::endl;
    return 0;
}