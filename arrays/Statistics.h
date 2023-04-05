#pragma once
#include "constants.h"

int Min(int arr[], const int n);
double Min(double arr[], const int n);
char Min(char arr[], const int n);
int Min(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Min(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Min(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Max(int arr[], const int n);
double Max(double arr[], const int n);
char Max(char arr[], const int n);
int Max(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Max(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Max(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
char Avg(char arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);
