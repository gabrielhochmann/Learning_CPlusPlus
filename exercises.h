#ifndef EXERCISES_H
#define EXERCISES_H

#include <vector>

// Function to calculate the sum of integers from 1 to n
int soma_n(int n);

// Function to calculate the power of k raised to n
int power(int k, int n); // renamed from exp to avoid name conflict

// Function to swap two integers using pointers
void troca_1(int* a, int* b);

// Function to swap two integers using references
void troca_2(int& a, int& b);

// Function to swap two integers using arithmetic operations
void troca_3(int& a, int& b);

// Function to reverse a vector between indices i and f
void inverte_vetor(std::vector<int>& v, int i, int f);

// Function to find the greatest common divisor (GCD) of two numbers
int mdc(int x, int y);

// Function to count the occurrences of digit e in number n
int conta_numero(int n, int e);

// Function to multiply two numbers using addition
int multiplica(int n1, int n2);

// Function to search for an element e in a vector
int busca(const std::vector<int>& v, int n, int e);

// Function to calculate the sum of bits of an integer using bitwise operators
int somabits_operador_binario(int n);

// Function to calculate the sum of bits of an integer using modulos
int somabits(int n);

#endif // EXERCISES_H
