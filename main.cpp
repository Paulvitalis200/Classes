#include <iostream>

using namespace std;

template<typename T>
T larger(T first, T second) {
    return (first > second) ? first : second;
}

int main() {

    larger(1.1, 2.2);
    // larger(1, 2);
    larger(1.2, 3.3);
    // larger("1", "3");
    return 0;
}