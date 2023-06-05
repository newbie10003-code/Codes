import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class P13_Task_01_FileHandlingInJava {

	public static void main(String[] args) {
		FileHandling fh=new FileHandling();
		try {
			fh.countWords();
			fh.countLines();
			fh.countCharacter();
			fh.writeIntoAfile();
		}
		catch(IOException ioe)
		{
			System.out.println(ioe.getMessage());
		}
	}

}




class FileHandling
{
	int cwords=0;
	int cchars=0;
	int clines=0;
	public FileHandling() {
		cwords=0;
		cchars=0;
		clines=0;
	}
	void countWords() throws IOException
	{
		File file=new File("input.txt");
		FileReader obj=new FileReader(file); 
		BufferedReader br=new BufferedReader(obj);
		int prev=0,next=0;
		while((next=br.read())!=-1)
		{
			if(prev==' ' || prev=='\n' && (next!=' '|| next!='\n'))
			{
				cwords++;
			}
			prev=next;
		}
		System.out.println("Count of Words : "+cwords++);
		obj.close();
		br.close();
	}
	void countLines()throws IOException
	{
		File file=new File("input.txt");
		FileReader obj=new FileReader(file); 
		BufferedReader br=new BufferedReader(obj);
		String str;
		while((str=br.readLine())!=null)
		{
			clines++;
		}
		System.out.println("Count of Lines : "+clines++);
		
		obj.close();
		br.close();
	}
	
	void countCharacter()throws IOException
	{
		File file=new File("input.txt");
		FileReader obj=new FileReader(file); 
		BufferedReader br=new BufferedReader(obj);
		String str;
		while((str=br.readLine())!=null)
		{
			cchars+=str.length();
		}
		System.out.println("Count of Character : "+cchars++);
		
		obj.close();
		br.close();
	}
	
	void writeIntoAfile()throws IOException{
		FileWriter myObj=null;
		try {
			myObj=new FileWriter("outut.txt");
		}
		catch(IOException ioe)
		{
			ioe.printStackTrace();
		}
		BufferedWriter br=new BufferedWriter(myObj);
		String text="Hey this would store in outpt file";
		br.write(text);
		br.close();
		myObj.close();
	}
	
}
