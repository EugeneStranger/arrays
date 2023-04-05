#pragma once
#include "constants.h"

void ShiftRight(int arr[], const int n, int step);
void ShiftRight(double arr[], const int n, int step);
void ShiftRight(char arr[], const int n, int step);
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int step);
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int step);
void ShiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int step);

void ShiftLeft(int arr[], const int n, int step);
void ShiftLeft(double arr[], const int n, int step);
void ShiftLeft(char arr[], const int n, int step);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int step);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int step);
void ShiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int step);