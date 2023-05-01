import java.util.*;
public class userManualException {
    public static void main(String args[])
    {
        int a = 100,c;
        Scanner sc = new Scanner(System.in);
        int b = sc.nextInt();
        try{
            if(b == 5)
            {
                throw new UserManualException();
            }
            c= a/b;

        }
        catch(UserManualException e)
        {
            System.out.println(e.getMessage());
        }
    }
}
class UserManualException extends Exception{
    public String getMessage()
    {
        String detailMessage = "This is a user defined manual exception";
        return detailMessage;
    }
}
