#include<stdio.h>
struct A  /***declaring a structure***/
{
  char ch;  /***char type member***/
  int in;
  float f; 
};
void read(struct A *);
void show(struct A);
void main()
{   
    struct A a;
    read(&a);
    show(a);
}
