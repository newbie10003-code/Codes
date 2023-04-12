import java.util.*;

public class P9_Task01_JaggedArray {
    public static void main(String[] args) {
        Jagged();
    }

    public static void Jagged() {
        Scanner sc = new Scanner(System.in);
        int arr[][] = new int[3][];
        arr[0] = new int[3];
        arr[1] = new int[2];
        arr[2] = new int[3];
        System.out.println("Enter elements");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                int x = sc.nextInt();
                arr[i][j] = x;
            }
        }
        System.out.println("Jagged Array");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.print("\n");
        }
    }
}
