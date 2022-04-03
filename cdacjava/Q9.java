import java.util.Scanner;

public class Q9 {
    public static void main(String[] args) {
        int[] arr;
        System.out.println("\n\t-----------: Array Sort :------------");
        System.out.println("\n\t1.) For Ascending.");
        System.out.println("\t2.) For Descending. ");
        System.out.print("\n\t* Enter Your Choise...");
        Scanner obj = new Scanner(System.in);
        char key = obj.next().charAt(0);
        System.out.println("\t-------------------------------------");
        switch (key) {
            case '1', 'A' ,'a':
                System.err.print("\t* Enter The Length of Array :- ");
                int no = obj.nextInt();
                arr = new int[no];
                getdata(arr, no);
                sort(arr, no);
                System.out.print("\t* Elements of sorted array(Ascending) :- ");
                for (int j = 0; j < arr.length; j++) {
                    System.out.print(" " + arr[j]);
                }
                break;
            case '2', 'D' , 'd':
                System.err.print("\t* Enter The Length of Array :- ");
                no = obj.nextInt();
                arr = new int[no];
                getdata(arr, no);
                sort(arr, no);
                System.out.print("\t* Elements of sorted array(Descending) :- ");
                for (int j = arr.length - 1; j >= 0; j--) {
                    System.out.print(" " + arr[j]);
                }
                break;
            default:
                System.out.println("\n\t* Please enter correct choise.");
                break;
        }
        obj.close();
    }
    public static void getdata(int arr[], int no) {
        Scanner obj = new Scanner(System.in);
        System.out.print("\t* Enter The Element of Array :- ");
        for (int i = 0; i < no; i++) {
            System.out.print(" ");
            arr[i] = obj.nextInt();
        }
        obj.close();
    }
    public static void sort(int arr[], int no) {
        int temp;
        for (int i = 0; i < no - 1; i++) {
            for (int j = i + 1; j < no; j++) {
                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}
