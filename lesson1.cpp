#include "./header.h"

// https://codility.com/demo/results/trainingASNX88-FPN/
int binaryGap(int n) {
    int max_gap = 0;
    int current_gap = -1;

    while (n != 0) {
        if ((n & 1) == 1) {
            max_gap = max(max_gap, current_gap);
            current_gap = 0;
        } else if (current_gap != -1) {
            current_gap++;
        }
        n /= 2;
    }

    return max_gap;
}

int main(int argc, char **argv) {
    auto start = std::chrono::high_resolution_clock::now();

    std::cout << binaryGap(1041) << std::endl;

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Execution time: " << elapsed.count() << " s\n";
    return 0;
}