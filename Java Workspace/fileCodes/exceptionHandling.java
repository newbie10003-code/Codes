public class exceptionHandling {
    public static void main(String[] args) {
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
        //     int num = Integer.parseInt("Newbie");
        //     System.out.println(num);
        // } 
        // catch (NumberFormatException e) 
        // {
        //     System.out.println(e);
        // }

        // try {
        //     int a[] = new int[5];
        //     a[7] = 9;
        // } catch (ArrayIndexOutOfBoundsException e) {
        //     System.out.println(e);
        // }
        // finally
        // {
        //     System.out.println("End of program");
        // }

        a();
    }

    public static void a()
    {
        try {
            throw new ArithmeticException("Incorrect");
        } catch (NumberFormatException e) {
            System.out.println("Handled");
        }
    }
}

class MultipleCatchBlocks
{
    public void a()
    {
        try {
            int a[] = new int[5];
            a[5] = 10;
        } catch (Exception e) {
            System.out.println("Common task completed");
        }
        catch (ArithmeticException e)
        {
            System.out.println("Task 1 is completed");
        }
        catch (ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Task 2 is completed");
        }
    }
}