#include <iostream>
#include <vector>

std::vector<int> fibonacci(int n) {
    std::vector<int> fib_sequence;
    int a = 0, b = 1;

    while (a <= n) {
        fib_sequence.push_back(a);
        int next = a + b;
        a = b;
        b = next;
    }

    return fib_sequence;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::vector<int> fib_sequence = fibonacci(n);
    std::cout << "Fibonacci sequence up to " << n << ": ";
    for (int num :
