package Day4.Practice;

public class Average {
    public static void main(String[] args) {
        int a[]={1,2,3,4,5,6,7,8};
        System.out.println("Average : "+calculateAverage(a));
    }
    static int calculateAverage(int a[]){
        int sum=0;
        for(int i:a){
            sum+=i;
        }
        return sum/a.length;
    }
}