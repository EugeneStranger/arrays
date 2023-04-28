#pragma once
#include "constants.h"

template<typename T>T Min(const T arr[], const int n);
template<typename T>T Min(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Max(const T arr[], const int n);
template<typename T>T Max(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Sum(const T arr[], const int n);
unsigned int Sum(const unsigned char arr[], const int n);
template<typename T>T Sum(const T arr[ROWS][COLS], const int ROWS, const int COLS);
unsigned int Sum(const unsigned char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(const T arr[], const int n);
template<typename T>double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS);