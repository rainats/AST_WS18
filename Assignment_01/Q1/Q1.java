import java.util.Scanner;
import java.util.stream.*;

public class calculator
{
  public static void main(String[] args)
  {
    // 1. It first inputs an integer between 1 and 100 from the user.
    // Let’s assume the user inputs n.
    Scanner input = new Scanner(System.in);//creating an instance of an input from System
    System.out.println("Enter an integer between 1 and 100 : ");
    int input_int = input.nextInt();//taking an input integer and storing the integer from user

    // 2. It then reads n more integers and stores them.
    int[] arr = new int[input_int]; // making an instance of an integer array
    System.out.println(" Enter "+ input_int + "number of integers");
    for (int i = 0 ; i < input_int; i++ )// taking the n input integers and storing them in an array
    {
      arr[i] = input.nextInt();
    }

    // 3. It computes the sum, the product, the average, the variance,
    // the smallest and the largest value of these numbers.
    //assert arr != null && arr.length == input_int: "Not the right number of entries"
    int sum = IntStream.of(arr).sum();
    int product = IntStream.of(arr).product();
    int average = IntStream.of(arr). average();
    int variance = IntStream.of(arr).variance();
    int small_val = IntStream.of(arr).smallest();
    int large_val = IntStream.of(arr).largest();


    // 4. It outputs, in a nicely formatted way, all the numbers
    //input and the statistics computed.
    System.out.println("The sum is " + sum);
    System.out.println("The product is " + product);
    System.out.println("The average is " + average);
    System.out.println("The variance is " + variance);
    System.out.println("The smallest value is " + small_val);
    System.out.println("The largest value is " + large_val);

  }
}
