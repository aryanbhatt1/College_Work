import java.util.Scanner;

public class Matrix_Multiplication {

    static Scanner input = new Scanner(System.in);

    static void printMatrix(int[][] matrix, int m, int n) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    static void multiplyMatrix(int row1, int col1, int[][] matrix_a, int row2, int col2, int[][] matrix_b) {

        int[][] matrix_c = new int[row1][col2];

        System.out.println("\nMatrix A:");
        printMatrix(matrix_a, row1, col1);
        System.out.println("\nMatrix B:");
        printMatrix(matrix_b, row2, col2);


        if (row2 != col1) {
            System.out.println("\nMultiplication Not Possible");
            return;
        }

        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                for (int k = 0; k < row2; k++)
                    matrix_c[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }

        System.out.println("\nMatrix C:");
        printMatrix(matrix_c, row1, col2);
    }

    public static void main(String[] args) {

        System.out.print("Enter Number of Rows of matrix A: ");
        int row1 = input.nextInt();
        System.out.print("Enter Number of Columns of matrix A: ");
        int col1 = input.nextInt();
        System.out.print("Enter Number of Rows of matrix B: ");
        int row2 = input.nextInt();
        System.out.print("Enter Number of Columns of matrix B: ");
        int col2 = input.nextInt();

        int[][] matrix_a = new int[row1][col1];
        int[][] matrix_b = new int[row2][col2];

        System.out.println("\n\n.....Enter Elements for Matrix A.....\n");
        for (int i=0; i<row1; i++) {
            for (int j=0; j<col1; j++) {
                System.out.print("Enter element"+"["+i+"]"+"["+j+"] :");
                matrix_a[i][j] = input.nextInt();
            }
        }

        System.out.println("\n\n.....Enter Elements for Matrix B.....\n");
        for (int i=0; i<row2; i++) {
            for (int j=0; j<col2; j++) {
                System.out.print("Enter element"+"["+i+"]"+"["+j+"] :");
                matrix_b[i][j] = input.nextInt();
            }
        }
        multiplyMatrix(row1, row2, matrix_a, row2, col2, matrix_b);
    }
}