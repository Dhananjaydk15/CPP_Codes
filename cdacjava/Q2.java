
import java.util.Scanner;
public class Q2 {
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        System.out.println("\t-------------: factorial :-----------");
        System.out.print("\t* Enter The No. : ");
        long input = obj.nextLong();
        System.out.println("\t* factorial of "+input+" is "+fact(input));
        obj.close();
    }
    public static long fact(Long no) {
        if (no != 0)
        {
            return (no * fact(no - 1));
        }

        return 1;
    }
}
