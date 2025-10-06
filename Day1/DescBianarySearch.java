import java.util.Scanner;    
public class DescBianarySearch{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int ar[]={5,4,3,2,1},n=5;
        int key = sc.nextInt();
        int mid = n/2;
        int low = 0;
        while (low<=n){
            mid = (low +n)/2;
            if(ar[mid]==key){
                System.out.println("The key element is found at"+(mid+1));
                return;
            }
            else if(ar[mid]>key){
                low=mid+1;

            }
            else{
                n=mid-1;
            }
        }
        System.out.println("Key element not found");

    }
}