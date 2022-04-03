public class Q6 {
    public static void main(String[] args) {
        int no = 6 , j ,i ;
        for (i = 0; i < no; i++) {
            for (j = no - i; j > 1; j--) {
                System.out.print(" ");
            }
            for (j = 0; j <= i; j++)
            {
                System.out.print(" *");
            }    
            System.out.println();
        }

    }
}
