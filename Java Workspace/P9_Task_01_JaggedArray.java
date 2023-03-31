public class P9_Task_01_JaggedArray {
    public static void main(String[] args) {
        m1();
        m2();
    }

    static void m1() {
        int arr_name[][] = new int[][] {
                new int[] { 10, 20, 30, 40 },
                new int[] { 50, 60, 70, 80, 90 },
                new int[] { 110, 120 },
        };
        for (int i = 0; i < arr_name.length; i++) {
            for (int j = 0; j < arr_name[i].length; j++) {
                System.out.print(arr_name[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println();
    }

    static void m2()
    {
        int arr[][] = new int[3][];
        arr[0] = new int[3];
        arr[1] = new int[2];
        arr[2] = new int[3];

        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                arr[i][j] = count++;
            }
        }
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}