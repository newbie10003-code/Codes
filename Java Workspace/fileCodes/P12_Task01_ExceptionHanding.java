import java.util.*;

public class P12_Task01_ExceptionHanding{
    public static void main(String args[]) throws Exception {
        ExceptionClass obj=new ExceptionClass();
        obj.handelException();
        obj.multipleCatch();
        obj.inputMismatchException();
        obj.stackOverFlowError();
        obj.indexOutofBoundException();
        obj.nullPointerException();
        obj.useofThrow(12);
        obj.useofThrow_And_Finally();
    }
}

class ExceptionClass{

    void handelException() {
        try {
            int b=0;
            int a=10/b;
            System.out.println(a);
        } catch (ArithmeticException e) {
            System.out.println(e.getMessage());
            System.out.println("Done!");
        } catch (Exception e) {
            System.out.println("An unexpected exception has occurred: " + e.getMessage());
            System.out.println("Please try again later.");
        }
    }
    void multipleCatch(){

        try {
            int b=0;
            int a=10/b;
            System.out.println(a);
        }//child class exception came first
        catch (ArithmeticException e) {
            System.out.println(e.getMessage() + " Arithmetic!!!!");
            System.out.println("Done!");
        }catch(Exception e) {
            System.out.println(e.getMessage() + " exception!!");
        }
    }
    void inputMismatchException() {
        try {
            Scanner sc=new Scanner(System.in);
            System.out.print("Enter the number:");
            int number=sc.nextInt();
            System.out.println("You entered:" + number);
        } catch (InputMismatchException e) {
            System.out.println(e + " Resolved");
        } catch (Exception e) {
            System.out.println("An unexpected exception has occurred: " + e.getMessage());
            System.out.println("Please try again later.");
        }

        System.out.println("Done!!!!!");
    }
    void stackOverFlowError() {
    	int i=1;
        try {
            while(i>0) {
                i++;
            }
            //this is error can't resolved because it is not a exception
        } catch (StackOverflowError e) {
            System.out.println(e.getMessage());
        }

        System.out.println("Other code execute!!");

    }

    void indexOutofBoundException() {
        int arr[] = new int[4];
        try {
        	arr[10]=5;
        }
        catch (IndexOutOfBoundsException ie) {
        	System.out.println(ie.getMessage());
        }
        System.out.println("Index Out of Bond Exception Handled");
    }
    void nullPointerException() {
        try {
            String s = null;
            System.out.println(s.length());
        } catch (NullPointerException e) {
            System.out.println(e.getMessage());
        } catch (Exception e) {
            System.out.println("An unexpected exception has occurred: " + e.getMessage());
            System.out.println("Please try again later.");
        }
    }

    void useofThrow(int age) {
        try {
            if (age < 18) {
                throw new Exception("You are not allowed to enter.");
            } else {
                System.out.println("You are allowed to enter.");
            }
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }

    void useofThrow_And_Finally() {
        try {
            useofThrow(17);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println("The 'try catch' block is finished");
        }
    }
}
