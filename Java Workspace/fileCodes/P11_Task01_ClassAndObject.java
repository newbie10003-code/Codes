public class P11_Task01_ClassAndObject {
    public static void main(String[] args) {
        Tellcall obj = new Tellcall(123, "Newbie", 350);
        obj.compute();
        obj.display();
    }
}

class Tellcall {
    int phNo;
    String subsName = "";
    int noOfCalls;
    double billAmount;

    Tellcall(int phNo, String name, int n) {
        this.phNo = phNo;
        this.subsName = name;
        this.noOfCalls = n;
    }

    void compute() {
        if (noOfCalls >= 1 && noOfCalls <= 100) {
            billAmount = 500;
        } else if (noOfCalls >= 101 && noOfCalls <= 200) {
            billAmount = ((noOfCalls - 100) * 1) + 500;
        } else if (noOfCalls >= 201 && noOfCalls <= 300) {
            billAmount = 100 * 1 + ((noOfCalls - 200) * 1.20) + 500;
        } else if (noOfCalls > 300) {
            billAmount = (100 * 1) + (100 * 1.20) + ((noOfCalls - 300) * 1.50) + 500;
        }
    }

    void display() {
        System.out.println("Subscriber Name : " + subsName);
        System.out.println("Phone Number : " + phNo);
        System.out.println("Number of Calls : " + noOfCalls);
        System.out.println("Bill Amount : Rs " + billAmount);
    }
}
