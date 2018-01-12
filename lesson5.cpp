#include "./header.h"

// https://codility.com/demo/results/training65UHK8-EGH/
int CountDiv(int A, int B, int K) {
    int diff_A = (A % K != 0) ? K - (A % K) : 0;
    int diff_B = (B % K != 0) ? (B % K) : 0;

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

std::vector<int> GenomicRangeQuery(std::string &S, std::vector<int> &P, std::vector<int> &Q) {
    std::vector<int> resQueries;
    int A = 1;
    int C = 2;
    int G = 3;
    int T = 4;

    std::vector<int> sequence;

    for(unsigned i = 0; i < S.size(); i++) {
        if(S[i] == 'A')
            sequence.push_back(A);
        else if(S[i] == 'C')
            sequence.push_back(C);
        else if(S[i] == 'G')
            sequence.push_back(G);
        else if(S[i] == 'T')
            sequence.push_back(T);
    }

    for(unsigned i = 0; i < P.size(); i++) {
        int idxRange = P[i];
        int min = sequence[idxRange];

        for(unsigned x = idxRange; x <= Q[i]; x++) {
            min = (sequence[x] < min) ? sequence[x] : min;
        }

        resQueries.push_back(min);
    }

    return resQueries;
}

int MinAvgTwoSlice(std::vector<int> &A) {
    double sum = 0, avg = 0;
    int index = 0;

    // init
    for(auto const value : A) {
        sum += value;
    }
    avg = sum / A.size();

    return index;
}

int main(int argc, char **argv) {
    // std::vector<int> A;

    // A.push_back(0);
    // A.push_back(1);
    // A.push_back(0);
    // A.push_back(1);
    // A.push_back(1);

    // A.push_back(4);
    // A.push_back(2);
    // A.push_back(2);
    // A.push_back(5);
    // A.push_back(1);
    // A.push_back(5);
    // A.push_back(8);

    // A.push_back(-3);
    // A.push_back(-5);
    // A.push_back(-8);
    // A.push_back(-4);
    // A.push_back(-10);

    std::string S = "CAGCCTA";
    std::vector<int> P, Q;

    P.push_back(2);
    P.push_back(5);
    P.push_back(0);

    Q.push_back(4);
    Q.push_back(5);
    Q.push_back(6);
    auto start = std::chrono::high_resolution_clock::now();

    // std::cout << CountDiv(1, 1, 1) << std::endl;

    // std::cout << PassingCars(A) << std::endl;

    // std::cout << MinAvgTwoSlice(A) << std::endl;
    
    std::vector<int> A = GenomicRangeQuery(S, P, Q);

    auto finish = std::chrono::high_resolution_clock::now();
    displayVector(A);
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Execution time: " << elapsed.count() << std::endl;
    return 0;
}
