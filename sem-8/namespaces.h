#pragma once
// #include <iostream>

// Пример создания namespace
namespace myNamespace {
    void print();
}

// Подключение namespace в локальной видимости
void foo() {
    using namespace myNamespace;
    print();  // Без myNamespace::
}

// Подключение глобального namespace
using namespace std;

// Вложеность namespace
namespace outerNamespace {
    namespace innerNamespace {
        void display() {
            std::cout << "Hello from innerNamespace!" << std::endl;
        }
    }
}

// Анонимные namespace
namespace {
    int secretValue = 42;
}

// secretValue будет доступен только в текущем файле.

// Привет шаблонного namespace
//! template <typename T> не бывает шаблонных пространств имён
namespace template_namespace {
    template <typename T>
    void foo_template();
}

template <typename T>
void template_namespace::foo_template() {
    std::cout << T();
}



// Внешнее пространство имен с `inline namespace` для версий
namespace library {
    #include <iostream> // можно включать другие заголовочные файлы в рамках пространства имён

    inline namespace v1 {
        template <typename T>
        void print(const T& data) {
            std::cout << "[v1] Data: " << data << std::endl;
        }
    }

    inline namespace v2 {
        template <typename T>
        void print(const T& data) {
            std::cout << "[v2] Data: " << data << std::endl;
        }
    }
}


namespace my_std {
    template <typename T>
    class vector {
     public:
        vector() {
            vec_ = new(T);
            size_ = 0;
        }

        ~vector() {
            std::cout << secretValue;
        }
    
     private:
        T* vec_;
        std::size_t size_;
        
    };
    
}