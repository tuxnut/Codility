#include "./header.h"

// https://app.codility.com/demo/results/trainingW9CWGY-XR2/
int Brackets(std::string S) {
    std::stack<char> brackets;

    for(unsigned i = 0; i < S.size(); i++) {
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

    std::stack<int> poiscaille;

    for(unsigned i = 0; i < A.size(); i++) {
        
    }

    return 0;
}

int main(int argc, char **argv) {
    // std::string S = "{[()()]}";
    // std::string S = "([)()]";

    std::vector<int> A, B;

    A.push_back(4);
    A.push_back(3);
    A.push_back(2);
    A.push_back(1);
    A.push_back(5);

    B.push_back(0);
    B.push_back(1);
    B.push_back(0);
    B.push_back(0);
    B.push_back(0);

    auto start = std::chrono::high_resolution_clock::now();

    // std::cout << Brackets(S) << std::endl;

    std::cout << Fish(A, B) << std::endl;

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Execution time: " << elapsed.count() << std::endl;
    return 0;
}