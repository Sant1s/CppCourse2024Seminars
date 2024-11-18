#pragma once
#include <cstdlib>

template <typename T, std::size_t U>
class MyArray {
 public:
  MyArray();
  explicit MyArray(const T& val);
  ~MyArray();

  T& operator[](std::size_t  index);
  const T& operator[](std::size_t index) const;

  T& operator=(const MyArray<T, U> rhs);
 private:
  T* arr_;
};

template <typename T, std::size_t U>
MyArray<T, U>::MyArray() {
  this->arr_ = new T[U];
}

template <typename T, std::size_t U>
MyArray<T, U>::MyArray(const T& val) {
  this->arr_ = new T[U];
  for (auto i = 0; i < U; ++i) {
    this->arr_[i] = val;
  }
}

template <typename T, std::size_t U>
MyArray<T, U>::~MyArray() {
  delete[] this->arr_;
}

template <typename T, std::size_t U>
T& MyArray<T, U>::operator[](std::size_t index) {
  return this->arr_[index];
}

template <typename T, std::size_t U>
const T& MyArray<T, U>::operator[](std::size_t index) const {
  return this->arr_[index];
}

template <typename T, std::size_t U>
T& MyArray<T, U>::operator=(const MyArray<T, U> rhs) {
  for (auto i = 0; i < U; ++i) {
    this->arr_[i] = rhs[i];
  }
}

