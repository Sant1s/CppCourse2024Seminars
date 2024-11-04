#include <iostream>

namespace my_library {
    inline namespace v1 {
        void print_version() {
            std::cout << "Version 1\n";
        }
    }

    namespace v2 {
        void print_version() {
            std::cout << "Version 2\n";
        }
    }
}

int main() {
    // Используется версия по умолчанию (v1)
    my_library::print_version();  // Output: Version 1

    // Явное указание v2 для вызова другой версии
    my_library::v2::print_version();  // Output: Version 2

    return 0;
}
