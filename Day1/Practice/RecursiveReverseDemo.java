package Day1.Practice;

public class RecursiveReverseDemo {
    public static void main(String[] args) {
        System.out.println(recRev(1234, 0));
    }
    static int recRev(int n,int sum){
        if(n==0)return sum;
        return recRev(n/10, (sum*10)+n%10);

    }
}
