//
// Created by mikiele on 25.11.24.
//
#include <iostream>
#include <random>
#include <chrono>
#include <vector>
#include <algorithm>

template<typename T>
bool LessComp(const T& lhs, const T& rhs) {
  return lhs < rhs;
}

template<typename T>
struct LessCompStruct {
  bool operator()(const T& lhs, const T& rhs) const {
    return lhs < rhs;
  }
};

bool IsEven(const int& n) {
  return n % 2 == 0;
}

template<typename T, size_t N>
using Array = std::vector<T>;

template<typename T, size_t N, size_t M>
using Matrix = Array<Array<T, M>, N>;

using MyInt = int;

int main() {
  const auto seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
  std::mt19937_64 generator(seed);
  std::uniform_int_distribution<int> distribution(0, 100);

  const int k_vec_size = 10;
  std::vector<int> v_base;
  for (int i = 0; i < k_vec_size; ++i) {
    v_base.push_back(distribution(generator));
  }

  for (const auto& iter : v_base) {
    std::cout << iter << " ";
  }
  std::cout << std::endl;

  std::vector<int> v_copy_base_sort(v_base);
  std::sort(v_copy_base_sort.begin(), v_copy_base_sort.end());
  for (const auto& iter : v_copy_base_sort) {
    std::cout << iter << " ";
  }
  std::cout << std::endl;

  std::vector<int> v_sort_grater(v_base);
  std::sort(v_sort_grater.begin(), v_sort_grater.end(), std::greater<int>());
  for (const auto& iter : v_sort_grater) {
    std::cout << iter << " ";
  }
  std::cout << std::endl;

  std::vector<int> v_custom_less_sort_func(v_base);
  std::sort(v_custom_less_sort_func.begin(), v_custom_less_sort_func.end(), LessComp<int>);
  for (const auto& iter : v_custom_less_sort_func) {
    std::cout << iter << " ";
  }
  std::cout << std::endl;

  std::vector<int> v_custom_less_sort_struct(v_base);
  std::sort(v_custom_less_sort_struct.begin(), v_custom_less_sort_struct.end(), LessCompStruct<int>());
  for (const auto& iter : v_custom_less_sort_struct) {
    std::cout << iter << " ";
  }
  std::cout << std::endl;

  std::cout << "Hello, World!" << std::endl;

  std::vector<int> v_shuffle;
  for (int i = 0; i < k_vec_size; ++i) {
    v_shuffle.push_back(i);
  }
  for (const auto& iter : v_shuffle) {
    std::cout << iter << " ";
  }
  std::cout << std::endl;

  std::shuffle(v_shuffle.begin(), v_shuffle.end(), generator);
  for (const auto& iter : v_shuffle) {
    std::cout << iter << " ";
  }
  std::cout << std::endl;

  std::vector<int> v_find_if_func{1,1,1,1,1,1,1,1,1,1};
  for (const auto& iter : v_find_if_func) {
    std::cout << iter << " ";
  }
  std::cout << std::endl;

  auto it = std::find_if(v_find_if_func.begin(), v_find_if_func.end(), IsEven);
  if (it == v_find_if_func.end()) {
    std::cout << "not found" << std::endl;
  } else {
    std::cout << "found " << *it << std::endl;
  }
}