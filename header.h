#include <iostream>
#include <climits>
#include <vector>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <gmpxx.h>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <stack>
#include <chrono>

#define max(a, b) ((a > b) ? a : b)
#define min(a, b) ((a < b) ? a : b)

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