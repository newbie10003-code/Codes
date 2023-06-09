// Stream is a sequence of data
// Byte stream = It mainly incorporates with byte data. When i/o is in the form of bytes, it is known as byte stream
// Character stream = It is a stream which incorporates with characters. When i/o process is in the form of characters, it is known as char stream

// canRead() = Tests whether the file is readable or not
// canWrite() = Tests whether the file is writable or not
// createNewFile()
// Delete()
// Exists()
// getName()
// getAbsolutePath()
// Length()
// List()
// Mkdir()

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class fileHandling {
    public static void main(String[] args) {
        // try
        // {
        //     File obj = new File("First File.txt");
        //     if (obj.createNewFile()) 
        //     {
        //         System.out.println("File is created " + obj.getName());
        //     }
        //     else
        //     {
        //         System.out.println("Already exists " + obj.getName());
        //     }
        // }
        // catch(IOException e)
        // {
        //     System.out.println("An error ocurred");
        //     e.printStackTrace();
        // }


        // File obj = new File("First File.txt");
        // if (obj.exists()) 
        // {
        //     System.out.println(obj.getName());
        //     System.out.println(obj.getAbsolutePath());
        //     System.out.println(obj.canWrite());
        //     System.out.println(obj.canRead());
        //     System.out.println(obj.length());
        // }
        // else
        // {
        //     System.err.println("File doesn't exist");
        // }


        // FileWriter obj;
        // try 
        // {
        //     obj = new FileWriter("C:\\Users\\niles\\Desktop\\Codes\\Java Workspace\\fileCodes\\First File.txt");
        //     obj.write("My name is Bunnu");
        //     obj.close();
        // } 
        // catch (IOException e) 
        // {
        //     e.printStackTrace();
        // }


        // FileReader obj;
        // char ch[] = new char[30];
        // try
        // {
        //     obj = new FileReader("First File.txt");
        //     obj.read(ch);
        //     for (int i = 0; i < ch.length; i++) {
        //         System.out.print(ch[i]);
        //     }
        //     System.out.println();
        //     obj.close();
        // }
        // catch (Exception e)
        // {
        //     e.printStackTrace();
        // }


        try
        {
            File obj = new File("First File1.txt");
            Scanner sc = new Scanner(obj);
            String data = "";
            while (sc.hasNext()) 
            {
                data += sc.nextLine();
                System.out.println(data);
            }
            sc.close();
        }
        catch (FileNotFoundException e)
        {
            System.out.println("No such file exists");
            e.printStackTrace();
        }
    }
}
