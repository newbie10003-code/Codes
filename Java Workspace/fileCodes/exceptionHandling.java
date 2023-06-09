import java.util.Scanner;
import java.util.*;

public class exceptionHandling {
    public static void main(String[] args) throws Exception {
        // String str = null;
        // try
        // {
        // int a = 10 / 0;
        // System.out.println(str.length());
        // }
        // catch (ArithmeticException e)
        // {
        // System.err.println("ERRORRROROR " + e);
        // }

        // try
        // {
        // int num = Integer.parseInt("Newbie");
        // System.out.println(num);
        // }
        // catch (NumberFormatException e)
        // {
        // System.out.println(e);
        // }

        // try {
        // int a[] = new int[5];
        // a[7] = 9;
        // } catch (ArrayIndexOutOfBoundsException e) {
        // System.out.println(e);
        // }
        // finally
        // {
        // System.out.println("End of program");
        // }

        // try
        // {
        // throw new myException(5);
        // }
        // catch (Exception e)
        // {
        // System.out.println(e);
        // }

        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        try
        {
            validateInput(number);
        }
        catch(InvalidInputException e)
        {
            System.out.println("Exception caught");
        }
    }

    static void validateInput(int number) throws InvalidInputException {
        if (number > 1000) {
            throw new InvalidInputException("Exception");
        }
        else
        {
            System.out.println(number);
        }
    }

    // public static void a() throws Exception
    // {
    // try {
    // throw new ArithmeticException("Incorrect");
    // } catch (Exception e) {
    // Scanner sc = new Scanner(System.in);
    // int a = sc.nextInt();
    // System.out.println("Handled " + a);
    // }
    // }
}

// class myException extends Exception
// {
// int a;
// myException(int b)
// {
// a = b;
// }
// public String toString()
// {
// return "Exception Number = " + a;
// }
// }

// class MultipleCatchBlocks
// {
// public void a()
// {
// try {
// int a[] = new int[5];
// a[5] = 10;
// } catch (Exception e) {
// System.out.println("Common task completed");
// }
// catch (ArithmeticException e)
// {
// System.out.println("Task 1 is completed");
// }
// catch (ArrayIndexOutOfBoundsException e)
// {
// System.out.println("Task 2 is completed");
// }
// }
// }

class InvalidInputException extends Exception {
    InvalidInputException(String s)
    {
        System.out.println("Exception type = " + s);;
    }
}