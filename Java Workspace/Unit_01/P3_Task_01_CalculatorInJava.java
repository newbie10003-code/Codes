
// public class P3_Task_01_CalculatorInJava {
//  static    class Calculator
//     {
//         public  static void add(int a, int b)
//         {
//             System.out.println(a + b);
//         }
//         public static void subtract(int a, int b)
//         {
//             System.out.println(Math.abs(a - b));
//         }
//         public static void multiply(int a, int b)
//         {
//             System.out.println(a * b);
//         }
//         public static void divide(int a, int b)
//         {
//             System.out.println(a / b);
//         }
//     }
//     public static void main(String[] args) {
//         Calculator C = new Calculator();
//        //Calculator C;
//         C.add(10, 2);
//         C.subtract(10, 5);
//         C.multiply(30, 3);
//         C.divide(3, 0);
//     }
// }


public class P3_Task_01_CalculatorInJava 
{
       public static void main(String[] args) {
           Calculator C = new Calculator();
        //    Calculator C;
        //    System.out.println(a);
           C.add(10, 2);
           C.subtract(10, 5);
           C.multiply(30, 3);
           C.divide(3, 0);
       }
}
   class Calculator
       {
           public  void add(int a, int b)
           {
               System.out.println(a + b);
           }
           public void subtract(int a, int b)
           {
               System.out.println(Math.abs(a - b));
           }
           public  void multiply(int a, int b)
           {
               System.out.println(a * b);
           }
           public  void divide(int a, int b)
           {
               System.out.println(a / b);
           }
       }