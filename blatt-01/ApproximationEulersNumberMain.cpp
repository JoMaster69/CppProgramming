// Copyright 2018, University of Freiburg,
// Chair of Algorithms and Data Structures.
// Author: Hannah Bast <bast@cs.uni-freiburg.de>

#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#include "./ApproximationEulersNumber.cpp"

// Program that computes the approximation e using the sum(1/x!) method.
int main(int argc, char** argv) {
  int n = 64;  // last working value
  // any higher value gives the same result,
  // because the faculty produces a overflow
  // and my program detects this and
  // breaks the loop and returns the n=64 value of e
  printf("\n");
  printf("Approximation of e        : %1.10f\n", approximateEulersNumber(n));
  printf("Internal value of e       : %1.10f\n", M_E);
  printf("\n");
}
