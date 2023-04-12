import java.util.*;

public class P4_Task_01_GenericMatrixMultiplicationInJava {
    public static void main(String[] args) {
        multiply();
    }

    public static void multiply() {
        Scanner sc = new Scanner(System.in);
        int r1, c1, r2, c2;
        System.out.println("Enter the number of rows and number of columns of 1st matrix");
        r1 = sc.nextInt();
        c1 = sc.nextInt();
        System.out.println("Enter the number of rows and number of columns of 2nd matrix");
        r2 = sc.nextInt();
        c2 = sc.nextInt();
        if (c1 != r2)
            System.out.println("Matrix Multiplication not possible");
        else {
            int m1[][] = new int[r1][c1];
            int m2[][] = new int[r2][c2];
            int result[][] = new int[r1][c2];
            System.out.println("Enter elements of 1st matrix:");
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++) {
                    m1[i][j] = sc.nextInt();
                }
            }
            System.out.println("Enter elements of 2nd matrix:");
            for (int i = 0; i < r2; i++) {
                for (int j = 0; j < c2; j++) {
                    m2[i][j] = sc.nextInt();
                }
            }
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    result[i][j] = 0;
                    for (int k = 0; k < c1; k++) {
                        result[i][j] += m1[i][k] * m2[k][j];
                    }
                }
            }
            System.out.println("Matrix after multiplication:- ");
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    System.out.print(result[i][j] + " ");
                }
                System.out.println();
            }
        }
    }
}
