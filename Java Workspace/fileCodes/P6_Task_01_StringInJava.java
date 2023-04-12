import java.util.*;

public class P6_Task_01_StringInJava {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string to check Palindrome\n");
        String s = sc.nextLine();
        if (isPalin(s)) {
            System.out.println("String is Palindrome\n");
        } else {
            System.out.println("String is not Palindrome\n");
        }
    }

    public static boolean isPalin(String s) {
        int start = 0, end = s.length() - 1;
        while (start < end) {
            if (s.charAt(start) != s.charAt(end))
                return false;
            start++;
            end--;
        }
        return true;
    }
}
