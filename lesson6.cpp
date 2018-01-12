#include "./header.h"

// https://app.codility.com/demo/results/trainingYQ6TMA-BGA/
int Triangle(std::vector<int> &A) {
    if(A.size() < 3) {
        return 0;
    }

    std::sort(A.begin(), A.end());

    bool loop = true;
    int index = A.size() - 1;

    while(loop) {
        int r = A[index];
        int q = A[index - 1];
        int p = A[index - 2];

        if(r > 0 && q > 0 && p > 0)
            if(r - p < q)
                return 1;

        if (index - 2 > 0)
            index--;
        else
            return 0;
    }

    return 0;
}

// https://app.codility.com/demo/results/trainingYWFCBZ-SGZ/
int Distinct(std::vector<int> &A) {
    if(A.size() < 1)
        return 0;
    if(A.size() == 1)
        return 1;

    std::sort(A.begin(), A.end());

    unsigned cpt = 1;
    for(unsigned i = 1; i < A.size(); i++) {
        cpt = (A[i - 1] != A[i]) ? cpt + 1 : cpt;           
    }

    return cpt;
}

int main(int argc, char **argv) {
    std::vector<int> A;

    // A.push_back(10);
    // A.push_back(50);
    // A.push_back(5);
    // A.push_back(1);

    A.push_back(2);
    A.push_back(1);
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(1);

    auto start = std::chrono::high_resolution_clock::now();
    
    // std::cout << Triangle(A) << std::endl;
    std::cout << Distinct(A) << std::endl;

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Execution time: " << elapsed.count() << std::endl;
    return 0;
}