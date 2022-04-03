import java.util.Scanner;

public class Q1 {
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        System.out.println("\t-------:Check No. is Positive or negative:-------");
        System.out.print("\t* Enter The No.:- ");
        int input = obj.nextInt();
        if (Positive_Negative(input)) {
            System.out.println("\t* " + input + " is positive no.");
        } else
            System.out.println("\t* " + input + " is Not Positive:");
        obj.close();
    }

    public static boolean Positive_Negative(int no) {
        if (no > 0)
            return true;
        else
            return false;
    }
}
