#include "my_class.h"
#include <vector>

int main() {
    my_vector vec1();
    my_vector vec2(12);
    my_vector vec3(12, 1);
    
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);

    int elem = vec1.pop_back();
    std::cout << elem << '\n'; 
    return 0;
}