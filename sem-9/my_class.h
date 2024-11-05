#pragma once

class my_vector {
public:
    my_vector();
    my_vector(size_t size, int fill_elem);
    explicit my_vector(std::size_t size);
    ~my_vector();

    void resize(std::size_t new_size);

    void push_back(int elem);
    int pop_back();

    static int number_of_instance();
    
private:
    int* vec_;
    std::size_t size_ = 0;
    std::size_t capacity_ = 0;
    // static size_t number_of_instance_ 0;
};
