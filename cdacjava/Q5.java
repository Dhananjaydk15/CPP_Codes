import java.util.Scanner;

public class Q5 {
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        System.out.println("\t------------: prime no :--------------");
        System.out.print("\t* Enter The No. : ");
        int no = obj.nextInt();
        if (prime(no))
            System.out.println("\t* " + no + " is prime.");
        else

            System.out.println("\t* " + no + " is not prime.");
        obj.close();
    }

    public static boolean prime(int no) {
        for (int i = 2; i < no / 2; i++) {
            if (no % i == 0) {
                return false;
            }
        }
        if (no == 1)
            return false;
        return true;
    }
}
