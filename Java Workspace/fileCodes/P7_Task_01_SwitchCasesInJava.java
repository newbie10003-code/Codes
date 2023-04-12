import java.util.*;

public class P7_Task_01_SwitchCasesInJava {
    public static void main(String[] args) {
        int year;
        String month, day;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter current Year");
        year = sc.nextInt();
        sc.nextLine();
        System.out.println("Enter current month");
        month = sc.nextLine();
        System.out.println("Enter current day");
        day = sc.nextLine();
        System.out.println("enter 1 to print current year \nenter 2 to print current month\n3 to print current day");
        int ch = sc.nextInt();
        switch (ch) {
            case 1:
                System.out.println("Current year is:");
                System.out.println(year);
                break;
            case 2:
                System.out.println("Current month is:");
                System.out.println(month);
                break;
            case 3:
                System.out.println("Current day is:");
                System.out.println(day);
                break;
            case 4:
                System.out.println("Not Applicable");
                break;
            default:
                System.out.println("WRONG CHOICE!");
        }
    }
}
