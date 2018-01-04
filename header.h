#include <algorithm>
#include <assert.h>
#include <chrono>
#include <climits>
#include <fstream>
#include <gmpxx.h>
#include <iostream>
#include <iterator>
#include <sstream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

// https://codility.com/demo/results/trainingN58C3E-BU2/

#define max(a, b) ((a > b) ? a : b)
#define min(a, b) ((a < b) ? a : b)

void displayVector(std::vector<int> &A) {
    for(auto const &value : A) {
        std::cout << value << "\t";
    }
    std::cout << std::endl;
}

// lesson 1
int binaryGap(int n);

// lesson 2
int OddOccurrencesInArray(std::vector<int> &A);
std::vector<int> CyclicRotation(std::vector<int> &A, int K);

// lesson 3
int PermMissingElem(std::vector<int> &A);
int TapeEquilibrium(std::vector<int> &A);
int FrogJmp(int X, int Y, int D);

// lesson 4
int PermCheck(std::vector<int> &A);
int FrogRiverOne(int X, std::vector<int> &A);
int MissingInteger(std::vector<int> &A);
std::vector<int> MaxCounters(int N, std::vector<int> &A);

// lesson 5
int CountDiv(int A, int B, int K);
int PassingCars(std::vector<int> &A);
int MinAvgTwoSlice(std::vector<int> &A);
