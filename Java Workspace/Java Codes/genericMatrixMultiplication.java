import java.util.*;

public class genericMatrixMultiplication {

    public static void main(String[] args) {
        multiplyTwoMatrics();

    }

    static void multiplyTwoMatrics() {
        Scanner sc = new Scanner(System.in);
        int r1, r2, c1, c2, i, j, k;
        System.out.println("enter no of rows and columns of 1 matrics:");
        r1 = sc.nextInt();
        c1 = sc.nextInt();
        System.out.println("enter no of rows and columns of 2 matrics:");
        r2 = sc.nextInt();
        c2 = sc.nextInt();
        int mat1[][] = new int[r1][c1];
        int mat2[][] = new int[r2][c2];
        int res[][] = new int[r1][c2];
        if (c1 != r2) {
            System.out.println("multiplication not possible");
            return;
        }
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                // int no = sc.nextInt();
                mat1[i][j] = sc.nextInt();
            }
        }
        System.out.println("enter elements of second matrics");
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                // int no = sc.nextInt();
                mat2[i][j] = sc.nextInt();
            }
        }
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                int sum = 0;
                for (k = 0; k < c1; k++) {
                    sum = sum + mat1[i][k] * mat2[k][j];
                    res[i][j] = sum;
                }
            }
        }
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                System.out.print(res[i][j]);
            }
            System.out.print("\n");
        }
    }

}