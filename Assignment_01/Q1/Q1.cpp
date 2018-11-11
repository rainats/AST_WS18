// Program needs to be compiled by C++ 11th version, use -std=c++11 to compile

#include <iostream>
#include <limits>

using namespace std ;

long add( int [], int );
long multiply (int [], int );
int var_calc(int [], long , int );
int small_calc(int [] , int );
int large_calc(int [] , int );
long* calculator(int , int );
int read_int_input(int , int , istream& stream);



long* calculator(int lower, int upper)
{
// 1. It first inputs an integer between 1 and 100 from the user.
// Let’s assume the user inputs n.

  int input_int = 0;
  static long parameters[6] = {};
  cout << "Input an integer between "<< lower << " and " << upper << endl;
  input_int = read_int_input(lower , upper , cin);

// 2. It then reads n more integers and stores them.
  int arr[input_int] = {};
  cout<< "Input "<< input_int << " integers between "<< lower << " and " << upper << endl ;
  for (int i = 0; i < input_int; i++)
  {
    arr[i] = read_int_input(lower , upper , cin);
  }


// 3. It computes the sum, the product, the average, the variance,
// the smallest and the largest value of these numbers.
  parameters[0] = add(arr , input_int); //sum
  parameters[1] = multiply(arr , input_int); //product
  parameters[2] = parameters[0]/input_int; //average
  parameters[3] = var_calc(arr, parameters[2], input_int); //variance
  parameters[4] = small_calc(arr , input_int); //smallest
  parameters[5] = large_calc(arr , input_int); //largest


// 4. It outputs, in a nicely formatted way, all the numbers
//input and the statistics computed.
  cout<< "The input integers are : ";
  for (int i = 0; i < input_int; i++)
  {
    cout<< arr[i] << " ";
  }
  cout<< endl;
  cout<< "Sum : "<< parameters[0] << endl;
  cout<< "Product : "<< parameters[1] << endl;
  cout<< "Average : "<< parameters[2] << endl;
  cout<< "Variance : "<< parameters[3] << endl;
  cout<< "Smallest number : "<< parameters[4] << endl;
  cout<< "Largest number : "<< parameters[5] << endl;

  return parameters;
}


// Finding the sum
long add( int arr[], int size)
{
  long sum = 0;
  for (int i = 0; i < size; i++)
    sum += arr[i];
  return sum;
}


// Finding the product
long multiply (int arr[], int size)
{
  long product = 1;
  for (int i = 0; i < size; i++)
    product = product * arr[i];
  return product;
}


// Finding the variance
int var_calc(int arr[], long avg , int size)
{
  int variance = 0;
  for (int i = 0; i < size; i++)
    variance += (arr[i] -  avg) * (arr[i] -  avg);
  return variance;
}


// Finding the smallest value
int small_calc(int arr[], int size)
{
  int smallest = arr[0];
  for (int i = 1; i < size; i++)
  {
    if (arr[i] < smallest)
    {
      smallest = arr[i];
    }
  }
  return smallest;
}


// Finding the largest value
int large_calc(int arr[], int size)
{
  int largest = arr[0];
  for (int i = 1; i < size; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }
  return largest;
}


//Reading Integer Inputs
int read_int_input(int lower, int upper, istream& stream)
{
  int input = 0;
  bool valid = false;
  do
  {
    stream >> input;
    if (stream.good() && lower <= input &&  input<= upper)
    {
      valid =  true;
    }
    else
    {
      stream.clear();
      stream.ignore(numeric_limits<streamsize>::max(),'\n');
      cout<< "Invalid entry ! Please re-enter the number "<<endl;
    }
  }
  while(!valid);
  return input;
}


//main function
int main()
{
  int lower = 1;
  int upper = 100;
  calculator(lower, upper);
  return 0;
}
