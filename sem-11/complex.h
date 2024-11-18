#pragma once
#include <cstdlib>

class MyComplex {
 public:
  MyComplex();
  MyComplex(int64_t real, int64_t im);
  MyComplex(const MyComplex& rhs);

  MyComplex& operator=(const MyComplex& obj);
  MyComplex& operator+=(const MyComplex& obj);
  MyComplex& operator-=(const MyComplex& obj);
  MyComplex& operator*=(const MyComplex& obj);
  MyComplex& operator/=(const MyComplex& obj);
  MyComplex& operator++();
  MyComplex operator++(int);
  MyComplex& operator--();
  MyComplex operator--(int);
  MyComplex operator+() const;
  MyComplex operator-() const;
 private:
  int64_t real_;
  int64_t imaginary_;
  
  friend MyComplex operator+(const MyComplex& left, const MyComplex& right);
  friend MyComplex operator-(const MyComplex& left, const MyComplex& right);
  friend MyComplex operator*(const MyComplex& left, const MyComplex& right);
  friend MyComplex operator/(const MyComplex& left, const MyComplex& right);
  friend bool operator==(const MyComplex& left, const MyComplex& right);
  friend bool operator!=(const MyComplex& left, const MyComplex& right);
  friend bool operator<(const MyComplex& left, const MyComplex& right);
  friend bool operator>(const MyComplex& left, const MyComplex& right);
  friend bool operator<=(const MyComplex& left, const MyComplex& right);
  friend bool operator>=(const MyComplex& left, const MyComplex& right);
};