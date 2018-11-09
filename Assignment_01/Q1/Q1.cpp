#include <iostream>
#include <limits>

long add( int [], int );
long multiply (int [], int );
int var_calc(int [], int , int );
int small_calc(int [] , int );
int large_calc(int [] , int );
void calculator();
int read_int_input(int , int );

using namespace std ;

void calculator()
{
// 1. It first inputs an integer between 1 and 100 from the user.
// Let’s assume the user inputs n.
  int lower = 1;
  int upper = 100;
  int input_int = 0;
  cout << "Input an integer between "<< lower << " and " << upper << endl;
  input_int = read_int_input(lower , upper);

// 2. It then reads n more integers and stores them.
  int arr[input_int] = {};
  cout<< "Input "<< input_int << " integers between "<< lower << " and " << upper << endl ;
  for (size_t i = 0; i < input_int; i++)
  {
    arr[i] = read_int_input(lower , upper);
  }


// 3. It computes the sum, the product, the average, the variance,
// the smallest and the largest value of these numbers.
  long sum = add(arr , input_int);
  long product = multiply(arr , input_int);
  int average = sum/input_int;
  int variance = var_calc(arr, average, input_int);
  int smallest = small_calc(arr , input_int);
  int largest = large_calc(arr , input_int);


// 4. It outputs, in a nicely formatted way, all the numbers
//input and the statistics computed.
  cout<< "The input integers are : ";
  for (size_t i = 0; i < input_int; i++)
  {
    cout<< arr[i] << " ";
  }
  cout<< endl;
  cout<< "Sum : "<< sum << endl;
  cout<< "Product : "<< product << endl;
  cout<< "Average : "<< average << endl;
  cout<< "Variance : "<< variance << endl;
  cout<< "Smallest number : "<< smallest << endl;
  cout<< "Largest number : "<< largest << endl;

}


// Finding the sum
long add( int arr[], int n)
{
  long sum = 0;
  for (size_t i = 0; i < n; i++)
    sum += arr[i];
  return sum;
}


// Finding the product
long multiply (int arr[], int n)
{
  long product = 1;
  for (size_t i = 0; i < n; i++)
    product = product * arr[i];
  return product;
}


// Finding the variance
int var_calc(int arr[], int avg , int n)
{
  int variance = 0;
  for (size_t i = 0; i < n; i++)
    variance += (arr[i] -  avg) * (arr[i] -  avg);
  return variance;
}


// Finding the smallest value
int small_calc(int arr[], int n)
{
  int smallest = arr[0];
  for (size_t i = 1; i < n; i++)
  {
    if (arr[i] < smallest)
    {
      smallest = arr[i];
    }
  }
  return smallest;
}


// Finding the largest value
int large_calc(int arr[], int n)
{
  int largest = arr[0];
  for (size_t i = 1; i < n; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }
  return largest;
}


//Reading Integer Inputs
int read_int_input(int lower, int upper)
{
  int input = 0;
  bool valid = false;
  do
  {
    cin >> input;
    if (cin.good() && lower <= input &&  input<= upper)
    {
      valid =  true;
    }
    else
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
      cout<< "Invalid entry ! Please re-enter the number "<<endl;
    }
  }
  while(!valid);
  return input;
}


//main function
int main() {
  calculator();
  return 0;
}
