package Day4.Practice;

import java.util.ArrayList;

public class ReverseArrayListDemo {
    static void reverseList(ArrayList<Integer> list) {
        int left = 0, right = list.size() - 1;
        while (left < right) {
            int temp = list.get(left);
            list.set(left, list.get(right));
            list.set(right, temp);
            left++;
            right--;
        }
    }
    public static void main(String[] args) {
        ArrayList<Integer> list=new ArrayList<>();
        for(int i=0;i<5;i++){
            list.add(i+1);
        }
        System.out.println("Original list: "+list);
        //reverseList(list);
        java.util.Collections.reverse(list);
        System.out.println("Reversed list: "+list);
    }
}
