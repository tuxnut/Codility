#include "./header.h"

// https://codility.com/demo/results/trainingY6NCUP-N9X/
int PermCheck(std::vector<int> &A) {
    std::sort(A.begin(), A.end());

    for(size_t i = 0; i < A.size(); i++) {
        if(A[i] != i + 1) { return 0; }
    }

    return 1;
}
// https://codility.com/demo/results/training6BBQ28-2G3/
int FrogRiverOne(int X, std::vector<int> &A) {
    int cpt = 0;
    std::vector<int> way(X, 0);

    for(size_t i = 0; i < A.size(); i++) {
        if(way[A[i]-1] == 0) {
            way[A[i]-1] = A[i];
            cpt++;
        }

        if(cpt == X) {
            return i;
        }
    }

    return -1;
}

int main(int argc, char **argv) {
    auto start = std::chrono::high_resolution_clock::now();
    
    std::vector<int> A;
    // A.push_back(4);
    // A.push_back(1);
    // A.push_back(3);
    // A.push_back(2);
    // std::cout << PermCheck(A) << std::endl;

    A.push_back(1);
    A.push_back(3);
    A.push_back(1);
    A.push_back(4);
    A.push_back(2);
    A.push_back(3);
    A.push_back(5);
    A.push_back(4);
    std::cout << FrogRiverOne(5, A) << std::endl;

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Execution time: " << elapsed.count() << std::endl;
    return 0;
}