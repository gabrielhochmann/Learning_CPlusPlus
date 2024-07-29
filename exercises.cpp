#include "exercises.h"

#include <vector>

// Function to calculate the sum of integers from 1 to n
int soma_n(int n) {
    if (n > 0){
        return n + soma_n(n - 1);
    }

    return 0;
}

// Function to calculate the power of k raised to n
int power(int k, int n) {
    if (n > 0) {
        return k * power(k, n - 1);
    }

    return 1;
}

// Function to swap two integers using pointers
void troca_1(int *a, int*b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

// Function to swap two integers using references
void troca_2(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

// Function to swap two integers using arithmetic operations
void troca_3(int &a, int &b) {
    a += b;
    b = a - b;
    a = a - b;
}

// Function to reverse a vector between indices i an f
void inverte_vetor(std::vector<int> &v, int i, int f) {
    if (i <= f) {
        troca_1(&v[i], &v[f]);
        inverte_vetor(v, i + 1, f - 1);
    }
}

// Function to find the greatest commom divisor (GCD) of two numbers
int mdc(int x, int y){
    if (y != 0) {
        return mdc (y, x % y);
    }

    return x;
}

// Function to count the occurrences of digit e in number n
int conta_numero(int n, int e) {
    if (n > 0) {
        if (n % 10 == e) {
            return 1 + conta_numero(n / 10, e);
        } else {
            return conta_numero(n / 10, e);
        }
        // return (n % 10 == e ? 1 : 0) + conta_numero(n / 10, e);
    }

    return 0;
}

// Function to multiply two numbers using addition
int multiplica (int n1, int n2) {
    if (n2 > 0) {
        return n1 + multiplica(n1, n2 - 1);
    }

    return 0;
}

// Function to search for an element e in a vector
int busca(const std::vector<int> &v, int n, int e) {
    if (n > 0) {
        if (v[n - 1] != e) {
            return busca(v, n - 1, e);
        }
        return n - 1;
    }

    return -1;
}


// Function to calculate the sum of bits of an integer using bitwise operators
int somabits_operador_binario(int n) {
    if (n > 0) {
        return (n & 0x1) + somabits_operador_binario(n >> 1);
    }

    return 0;
}

// Function to calculate the sum of bits of an integer using modulos
int somabits(int n) {
    if (n > 0) {
        return (n % 2) + somabits(n / 2);
    }

    return 0;
}
