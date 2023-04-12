public class arrayOfObjects {
    public static void main(String[] args) {
        Student arr[] = new Student[3];
        arr[0] = new Student("Hrishabh", 20, 26);
        arr[1] = new Student("Nilesh", 20, 42);
        arr[2] = new Student("Rameshwari", 20, 50);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i].Name + " ");
            System.out.print(arr[i].roll + " ");
            System.out.println(arr[i].age);
        }
        System.out.println("The count of objects is: " + Student.count);
    }
}

class Student
{
    String Name;
    int roll, age;
    static int count = 0;
    Student(String name, int age, int roll)
    {
        count++;
        this.Name = name;
        this.age = age;
        this.roll = roll;
    }
}
