import java.util.Scanner;

class fib{
	public static void main(String[] args) {
		System.out.println("\t-------:Fibonacci series:--------");
		Scanner input = new Scanner(System.in);
		System.out.print("\t* Enter The No.(series upto) :- ");
		long no = input.nextLong();
		Fibonacci(no);
		input.close();
	}
	public static long Fibonacci(Long no)
	{
		long a = 0 , b = 1 ,nt;
		nt = a + b ;
		System.out.print("\t* Series:- ");
		System.out.print(" "+a);
		for(long i = 0; i < no ; i++)
		{
			System.out.print(" "+nt);
			nt = a + b;
			a = b ;
			b = nt;
		}
		return 0;
	}
}