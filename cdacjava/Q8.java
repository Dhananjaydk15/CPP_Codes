
public class Q8 {
public static void main(String[] args) {
    int arr[] = {1,8,27,6,4},sum=0;
    arr[2] = -7; // 1,8,-7,6,4
    arr[0] = arr[4]; // 4,8,-7,6,4
    arr[4] = arr[2] - arr[3]; // 4,8,-7,6,-13
    System.out.print("\n\t* Modified array :- ");
    for (int i = 0; i < arr.length; i++) {
        System.out.print(" "+arr[i] );
        sum = sum + arr[i];
    }
    System.out.println("\n\t* sum of array elements :- "+sum);

}
    
}