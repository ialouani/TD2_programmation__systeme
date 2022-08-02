#include<stdio.h>
#include<stdlib.h>

int t[10];
void zones() {
  int s=0;
  void *p = malloc(10);
  printf("Code : %p Data : %p Heap : %p,%p Stack : %p",zones, t,sbrk(0), p,&s);
}

int main(){
  zones();
  return EXIT_SUCCESS;
}
