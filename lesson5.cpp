#include "./header.h"

// https://codility.com/demo/results/training65UHK8-EGH/
int CountDiv(int A, int B, int K) {
    int diff_A = (A % K != 0) ? K - (A % K) : 0;
    int diff_B = (B % K != 0) ? (B % K) : 0;

    A += diff_A;
    B -= diff_B;

    if (A % K != 0 || B % K != 0) {
        std::cout << "problem !!!!!!" << std::endl;
    }

    if (A > B) {
        return 0;
    }

    return (B - A) / K + 1;
}

// https://codility.com/demo/results/trainingNYY69U-FJG/
int PassingCars(std::vector<int> &A) {
    int P = 0;
    int nbPairs = 0;

    for (unsigned i = 0; i < A.size(); i++) {
        if (A[i] == 0) {
            P++;
        } else {
            nbPairs += P;
        }

        if (nbPairs > 1000000000) {
            return -1;
        }
    }
    return nbPairs;
}

std::vector<int> GenomicRangeQuery(std::string &S, std::vector<int> &P,
                                   std::vector<int> &Q) {
    std::vector<int> resQueries;
    int A = 1;
    int C = 2;
    int G = 3;
    int T = 4;
}

// https://app.codility.com/demo/results/trainingDF3BC9-9ZJ/
int MinAvgTwoSlice(std::vector<int> &A) {
    // https://github.com/daotranminh/playground/blob/master/src/codibility/MinAvgTwoSlice/proof.pdf
    // Just check slices of length 2 or 3

    double minAvg = (A[0] + A[1]) / (double)2;
    int index = 0;

    for (unsigned i = 0; i < A.size() - 1; i++) {
        // check length of 2
        if ((A[i] + A[i + 1]) / (double)2 < minAvg) {
            minAvg = (A[i] + A[i + 1]) / (double)2;
            index = i;
        }

        // check length of 3
        if (i < A.size() - 2 &&
            (A[i] + A[i + 1] + A[i + 2]) / (double)3 < minAvg) {
            minAvg = (A[i] + A[i + 1] + A[i + 2]) / (double)3;
            index = i;
        }
    }
    return index;
}

int main(int argc, char **argv) {
    // std::vector<int> A;

    // A.push_back(4);
    // A.push_back(2);
    // A.push_back(2);
    // A.push_back(5);
    // A.push_back(1);
    // A.push_back(5);
    // A.push_back(8);

    // A.push_back(10);
    // A.push_back(10);
    // A.push_back(-1);
    // A.push_back(2);
    // A.push_back(4);
    // A.push_back(-1);
    // A.push_back(2);
    // A.push_back(-1);

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
