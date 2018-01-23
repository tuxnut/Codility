#include "./header.h"

// https://app.codility.com/demo/results/trainingW9CWGY-XR2/
int Brackets(std::string S) {
    std::stack<char> brackets;

    for (unsigned i = 0; i < S.size(); i++) {
        if (S[i] == '(' || S[i] == '[' || S[i] == '{')
            brackets.push(S[i]);
        else {
            if (S[i] == ')' && brackets.top() == '(')
                brackets.pop();
            else if (S[i] == ']' && brackets.top() == '[')
                brackets.pop();
            else if (S[i] == '}' && brackets.top() == '{')
                brackets.pop();
            else
                return 0;
        }
    }

    return brackets.empty() ? 1 : 0;
}

int Fish(std::vector<int> &A, std::vector<int> &B) {
    /* std::stack<std::pair<int, int>> poissons;
    bool descendingFish = false;
    int lastDescForce = -1;

    for (unsigned i = 0; i < A.size(), i < B.size(); i++) {
        if (B[i] == 0) {
            if (!descendingFish) {
                poissons.push(std::pair<int, int>(A[i], 0));
            } else {
                if (lastDescForce > A[i]) {
                    continue;
                } else {
                    while (!poissons.empty() && poissons.top().second == 1) {
                        if (poissons.top().first < A[i])
                            poissons.pop();
                    }
                    if (poissons.empty() || poissons.top().second == 0) {
                        poissons.push(std::pair<int, int>(A[i], 0));
                    }
                }
            }
        } else {
            descendingFish = true;
            lastDescForce = A[i];
            poissons.push(std::pair<int, int>(lastDescForce, 1));
        }
    }

    return poissons.size(); */
    

    return 0;
}

// https://app.codility.com/demo/results/trainingW4QD5U-Q62/#task-0
int Nesting(std::string &S) {
    std::stack<char> pouloulou;

    for (unsigned i = 0; i < S.size(); i++) {
        if (S[i] == '(') {
            pouloulou.push(S[i]);
        } else {
            if (!pouloulou.empty() && pouloulou.top() == '(')
                pouloulou.pop();
            else
                return 0;
        }
    }

    return pouloulou.empty() ? 1 : 0;
}

int main(int argc, char **argv) {
    // std::string S = "{[()()]}";
    // std::string S = "([)()]";

    // std::string S = "(()(())())";
    std::string S = "())";

    // std::vector<int> A, B;

    // A.push_back(6);      B.push_back(1);
    // A.push_back(4);      B.push_back(1);
    // A.push_back(3);      B.push_back(1);
    // A.push_back(2);      B.push_back(0);
    // A.push_back(1);      B.push_back(0);
    // A.push_back(5);      B.push_back(0);

    auto start = std::chrono::high_resolution_clock::now();

    // std::cout << Brackets(S) << std::endl;

    // std::cout << Fish(A, B) << std::endl;

    std::cout << Nesting(S) << std::endl;

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Execution time: " << elapsed.count() << std::endl;
    return 0;
}