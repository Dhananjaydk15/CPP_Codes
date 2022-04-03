import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        System.out.println("\t------------------: Age group :------------------");
        System.out.print("\t* Enter The Age of Person : ");
        int age = obj.nextInt();
        if(age > 0 && age <= 3)
        System.out.println("\t* The Age group of the person is toddlers.");
        if(age > 3 && age <= 8)    
        System.out.println("\t* The Age group of the person is Kids");
        if(age > 8 && age <= 12)
        System.out.println("\t* The Age group of the person is Child");
        if(age > 12 && age <= 18)
        System.out.println("\t* The Age group of the person is Teen");
        if(age > 18 && age <= 40)
        System.out.println("\t* The Age group of the person is Adult");
        if(age > 41 && age <= 60)
        System.out.println("\t* The Age group of the person is Matured Adult");
        if(age > 61 && age <= 75)
        System.out.println("\t* The Age group of the person is Seniors");
        if(age > 75)
        System.out.println("\t* The Age group of the person is Super Seniors");
        obj.close();
    }
    
}
