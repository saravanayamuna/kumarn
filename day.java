import java.util.Scanner;


public class dfg {
	
	public static void main(String[] arr)
	{
		Scanner input=new Scanner(System.in);
		String str=input.nextLine();
		if(str.equals("sunday"))
		{
			System.out.println("false");
		}
		else if(str.equals("saturday"))
		{
			System.out.println("false");
		}
		else
		{
			System.out.println("true");
		}
}
}

