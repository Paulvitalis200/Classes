#include <iostream>

using namespace std;

template<typename T>
T larger(T first, T second) {
    return (first > second) ? first : second;
}

int main() {

    auto result = larger<double>(1, 3.3);

    return 0;
}