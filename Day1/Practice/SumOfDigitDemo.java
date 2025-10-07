package Day1.Practice;

import java.util.Scanner;

public class SumOfDigitDemo {
    public static void main(String[] args) {
        int n=new Scanner(System.in).nextInt();
        System.out.println("Sum of digits of "+n+" is "+sod(n));
        
    }
    static int sod(int no){
        if (no<10&&no>=0)return no;
        return no%10+sod(no/10);

    }
}
