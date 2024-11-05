#include "my_class.h"

my_vector::my_vector() {
    this->vec_ = new int[0];
    this->size_ = 0;
    this->capacity_ = 1;
    ++number_of_instance_;
}

my_vector::my_vector(size_t size, int fill_elem) {
    this->size_ = size;
    this->capacity_ = this->size_ * 2;
    this->vec_ = new int[this->capacity_];
    for (auto i = 0; i < size; ++i) {
        this->vec_[i] = fill_elem;
    }
    ++number_of_instance_;
}

my_vector::my_vector(std::size_t size) {
    this.size_ = size;
    this.capacity_ = this.size_ * 2;
    this->vec_ = new int[this.capacity_];
    ++number_of_instance_;
}

my_vector::~my_vector() {
    delete[] this->vec_;
    --number_of_instance_;
}

static int my_vector::number_of_instance() {
    return number_of_instance_;
}

int my_vector::pop_back() {
    int last_elem = this->vec_[this.size_ - 1]
    --this->size_;
    return last_elem;
}

void my_vector::resize(size_t new_size) {
    int* new_vec = new int[new_size*2];
    if (this.size_ < new_size) {
        for (size_t i = 0; i < this.size_; ++i) {
            new_vec = this->vec_[i];
        }

        for (size_t i = this.size_; i < new_size; ++i) {
            new_vec = 0;
        }

    } else {
        for (size_t i  = 0; i < new_size; ++i) {
            new_vec = this->vec_[i];
        }
    }

    this->size_ = new_size;
    this->capacity_ = new_size*2;
    delete[] this->vec_;

    this->vec_ = new_vec;
}

void my_vector::push_back(int elem) {
    if (this->size_ == this->capacity_) {
        this->resize(this->capacity_)
        push_back(elem);
    } else {
        this->vec_[this->size_] = elem;
        ++this->size_;
    }
}