public class sample2 {
    public static void main(String[] args) {
        ABC obj = new ABC();
        obj.ABC(10);
    }
}

class ABC
{
    int a;
    ABC(int a)
    {
        this.a = a;
    }
    ABC()
    {
        int arr[] = new int[20];
        this.a = 10;
        // System.out.println("Hello World");
        arr[0] = 10;
    }
    void ABC(int a)
    {
        System.out.println("Function Calling " + this.a);
    }
}
