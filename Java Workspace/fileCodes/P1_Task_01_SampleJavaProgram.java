public class P1_Task_01_SampleJavaProgram {
    public static void main(String[] args) {
        System.out.println("Hello World");
        main();
    }

    // Main Method can be overloaded but there can be only one public main method in
    // one class
    static void main() {
        System.out.println("Overloaded Main Method");
    }
}