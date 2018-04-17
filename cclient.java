import java.io.*;
import java.net.Socket;

public class client {

	public static void main(String args[]){
          try {
		System.out.println("Connected");
		Socket soc = new Socket("192.168.1.47",5471);
		BufferedReader input = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Client : ");
		String str = input.readLine();
		PrintWriter out = new PrintWriter(soc.getOutputStream(),true);
		out.println(str);

		BufferedReader in = new 
BufferedReader(new InputStreamReader(soc.getInputStream()));

		System.out.println(in.readLine());
	}
	catch(Exception e)
	{
		e.printStackTrace();
	}
  }
}
