import java.util.Scanner;

public class Fibonacci_Array {

    static void printArray(int[] array) {
        System.out.println("\nThe Fibonacci Series is ");
        for (int j : array) {
            System.out.print(j + " ");
        }
    }
    static void fibonacciSeries(int N) {
        int[] array = new int[N];
        array[0] = 0;
        array[1] = 1;
        for (int i=2 ; i<N; i++) {
            array[i] = array[i-1] + array[i-2];
        }
        printArray(array);
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("Enter the Number : ");
        int N = input.nextInt();
        fibonacciSeries(N);
    }
}
