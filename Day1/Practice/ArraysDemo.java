import java.util.Scanner;

public class ArraysDemo{
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter contents of array");
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
        
        /* for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    arr[j]=arr[j]^arr[j+1];
                    arr[j+1]=arr[j]^arr[j+1];
                    arr[j]=arr[j]^arr[j+1];
                }
            }
        } */
        for(int i=0;i<n;i++){
            int temp=i;
            for(int j=i+1;j<n;j++){
                temp= arr[j]<arr[temp]? j : temp;
            }
            if(i!=temp){
                arr[temp]=arr[temp]^arr[i];
                arr[i]=arr[temp]^arr[i];
                arr[temp]=arr[temp]^arr[i];
            }
        }
        System.out.println("The sorted list:");
        for(int i:arr){
            System.out.println(i);
        }
    }
}