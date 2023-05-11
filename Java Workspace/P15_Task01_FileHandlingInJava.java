import java.util.*;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class P15_Task01_FileHandlingInJava {

	public static void main(String[] args) throws IOException {
		FileHandelling name = new FileHandelling();
		name.countWords();
		name.countLines();
		name.writeIntoAFile();
		name.countCharacter();

	}

}

class FileHandelling {
	void countWords() throws IOException {
		String path = "myFile.txt";
		File file = new File(path);
		FileReader obj = new FileReader(file);
		BufferedReader br = new BufferedReader(obj);
		int count = 1, prev = 0, next = 0;
		prev = br.read();
		while ((next = br.read()) != -1) {
			if (prev == ' ' || prev == '\n' && (next != ' ' || next != '\n')) {
				count++;
			}
			prev = next;
		}
		System.out.println("Count Of Words:" + count);
		obj.close();
		br.close();
	}

	void countLines() throws IOException {
		File file = new File("myFile.txt");
		FileReader obj = new FileReader(file);
		BufferedReader br = new BufferedReader(obj);
		String str;
		int lines = 0;
		while ((str = br.readLine()) != null) {
			lines++;
		}
		System.out.println("Number of lines in file:" + lines);
		obj.close();
		br.close();
	}

	void writeIntoAFile() throws IOException {
		FileWriter obj = null;
		try {
			obj = new FileWriter("myFile.txt");
		} catch (IOException e) {
			e.printStackTrace();
		}
		BufferedWriter f_writer = new BufferedWriter(obj);
		String text = "This is the program to store data in a text file";
		f_writer.write(text);
		f_writer.close();

	}

	void countCharacter() throws IOException {
		File file = new File("myFile.txt");
		FileReader obj = new FileReader(file);
		BufferedReader br = new BufferedReader(obj);
		String str;
		int countChar = 0;
		while ((str = br.readLine()) != null) {
			countChar += str.length();
		}
		System.out.println("Number of Characters:" + countChar);
		obj.close();
		br.close();
	}
}