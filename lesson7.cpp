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

int main(int argc, char **argv) {
    // std::string S = "{[()()]}";
    // std::string S = "([)()]";

    auto start = std::chrono::high_resolution_clock::now();

    std::cout << Brackets(S) << std::endl;

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Execution time: " << elapsed.count() << std::endl;
    return 0;
}