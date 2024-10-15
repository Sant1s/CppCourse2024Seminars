#include <iostream>
#include <vector>
#include <iterator>

template <typename Iter, typename T>
bool my_binary_search(Iter begin, Iter end, const T& value) {
  while (begin < end) {
    Iter mid = begin + (end - begin) / 2;
    if (*mid == value) {
      return true;
    } else if (*mid < value) {
      begin = mid + 1;
    } else {
      end = mid;
    }
  }
  return false;
}

template <typename InputIt, typename OutputIt>
OutputIt my_copy(InputIt first, InputIt last, OutputIt d_first) {
  while (first != last) {
    *d_first++ = *first++;
  }
  return d_first;
}

template <typename ForwardIt, typename T>
void my_fill(ForwardIt first, ForwardIt last, const T& value) {
  while (first != last) {
    *first++ = value;
  }
}

int main() {
  std::vector<int> sorted_vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int search_value = 5;
  if (my_binary_search(sorted_vec.begin(), sorted_vec.end(), search_value)) {
    std::cout << "Value " << search_value << " found in sorted_vec." << std::endl;
  } else {
    std::cout << "Value " << search_value << " not found in sorted_vec." << std::endl;
  }

  std::vector<int> v1 = {10, 20, 30, 40, 50};
  std::vector<int> v2(v1.size());
  my_copy(v1.begin(), v1.end(), v2.begin());
  std::cout << "Copied vector v2: ";
  for (int n : v2) {
    std::cout << n << " ";
  }
  std::cout << std::endl;

  my_fill(v2.begin(), v2.end(), 0);
  std::cout << "Filled vector v2 with zeros: ";
  for (int n : v2) {
    std::cout << n << " ";
  }
  std::cout << std::endl;

  return 0;
}
