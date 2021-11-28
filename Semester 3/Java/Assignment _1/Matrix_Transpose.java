import java.util.Scanner;

public class Matrix_Transpose {

    static Scanner input = new Scanner(System.in);

    static void printMatrix(int[][] matrix, int row, int col) {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j<col; j++) {
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
    }

    static void matrixTranspose(int[][] matrix_a, int row, int col) {
        System.out.println("Matrix A : ");
        printMatrix(matrix_a,row,col);

        int[][] matrix_b = new int[col][row];

        for (int i = 0; i < col; i++) {
            for (int j = 0; j < row; j++) {
                matrix_b[i][j] = matrix_a[j][i];
            }
        }

        System.out.println("Matrix B i.e Transpose of Matrix A :");
        printMatrix(matrix_b,col,row);
    }

    public static void main(String[] args) {

        System.out.println("Enter Elements of Matrix A\n");
        System.out.print("Enter Number of rows :");
        int row = input.nextInt();
        System.out.print("Enter Number of Columns :");
        int col = input.nextInt();

        int[][] matrix_a = new int[row][col];

        System.out.println("\nEnter Elements of matrix A\n");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print("Enter element"+"["+i+"]"+"["+j+"] :");
                matrix_a[i][j] = input.nextInt();
            }
        }

        matrixTranspose(matrix_a,row,col);
    }
}
