import java.util.*;

public class P5_Task_01_ArrayInJava {
    public static void Duplicates() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the elements of array");
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] > max)
                max = arr[i];
        }
        int a[] = new int[max + 1];
        for (int i = 0; i < n; i++) {
            a[arr[i]]++;
        }
        System.out.println("The Duplicate elements are: ");
        for (int i = 0; i < max + 1; i++) {
            if (a[i] > 1)
                System.out.print(i + " ");
        }
    }

    public static void main(String[] args) {
        Duplicates();
    }
}
