#include<iostream>
#include<math.h>
using namespace std;

void print_table();
int* func_1(int , int );
int* func_2(int , int );
int* func_3(int , int );
int* func_4(int , int );
int* func_5(int , int );
int* func_6(int , int );


int* func_1(int lower, int upper)
{
  //f (n) = 2n
  static int arr[101] = {};
  for (size_t i = 0 ;i <=100; i++)
  {
    arr[i] = 2*i;
  }

  return arr;
}

int* func_2(int lower, int upper)
{
  //f (n) = sqrt(n)
  static int arr[101] = {};
  for (size_t i = 0 ;i <=100; i++)
  {
    arr[i] = sqrt(i);
  }

  return arr;
}

int* func_3(int lower, int upper)
{
  //f (n) = 10^n
  static int arr[101] = {};
  for (size_t i = 0 ;i <=100; i++)
  {
    arr[i] = pow(10,i);
  }

  return arr;
}

int* func_4(int lower, int upper)
{
  //f (n) = n^3
  static int arr[101] = {};
  for (size_t i = 0 ;i <=100; i++)
  {
    arr[i] = pow(i,3);
  }

  return arr;
}

int* func_5(int lower, int upper)
{
  //f (n) = 2^(1/n)
  static int arr[101] = {};
  for (size_t i = 0 ;i <=100; i++)
  {
    arr[i] = pow(2, 1/i);
  }

  return arr;
}

int* func_6(int lower, int upper)
{
  //f (n) = e^(n)
  static int arr[101] = {};
  for (size_t i = 0 ;i <=100; i++)
  {
    arr[i] = exp(i);
  }

  return arr;
}

void print_table()
{
  func_1(lower, upper);
  func_2(lower, upper);
  func_3(lower, upper);
  func_4(lower, upper);
  func_5(lower, upper);
  func_6(lower, upper);  
}

int main()
{
  int lower = 0;
  int upper = 100;
  print_table(lower,upper);
  return 0;
}
