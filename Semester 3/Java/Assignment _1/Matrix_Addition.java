import java.util.Scanner;

class Matrix_Addition {

    static int m,n;

    static Scanner input = new Scanner(System.in);

    static void addMatrix(int[][] matrix_a, int[][] matrix_b, int[][] matrix_c) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];
            }
        }

        System.out.println("\n\nThe Sum of Matrix A and B is \n");
        for (int i = 0; i < m; i++) {
            for (int j =0; j < n; j++) {
                System.out.print(matrix_c[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {

        System.out.print("Enter Number of Rows : ");
        m = input.nextInt();
        System.out.print("Enter Number of Columns : ");
        n = input.nextInt();
        int[][] matrix_a = new int[m][n];
        int[][] matrix_b = new int[m][n];
        int[][] matrix_c = new int[m][n];

        System.out.println("\n" + "\n" + ".....Enter Elements for Matrix A.....\n");
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                System.out.print("Enter element"+"["+i+"]"+"["+j+"] :");
                matrix_a[i][j] = input.nextInt();
            }
        }

        System.out.println("\n\n.....Enter Elements for Matrix B.....\n");
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                System.out.print("Enter element"+"["+i+"]"+"["+j+"] :");
                matrix_b[i][j] = input.nextInt();
            }
        }
        addMatrix(matrix_a, matrix_b,matrix_c);
    }
}
