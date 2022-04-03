public class Q4 {
    public static void main(String[] args) {
        System.out.println("\t");
        for (int i = 1; i <= 110; i++) {
            if(i%3==0 && i%5==0)
            System.out.print(" CozaLoza ");
            else if(i%3==0)
            System.out.print(" Coza ");
            else if(i%5==0)
            System.out.print(" Loza ");
            else if(i%7==0)
            System.out.print(" Woza ");
            else if(i==33||i==66||i==99)
            System.out.println("\n ");
            else
            System.out.print(i+" ");
        }
    }
}
