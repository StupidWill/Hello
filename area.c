/**
 * Author: Will Cook
 * Date: 2020/8/25
 *
 * This program prompts the user to enter the
 * base and the height of a triangle and computes
 * its area using the well-known formula
 *  1/2 * base * height
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
  int base = atoi(argv[1]);
  double height = atof(argv[2]);


  double area;

  
  area = (1.0 / 2) * base * height;
  

  printf("The area is %f square units.\n", area);

  return 0;
}
