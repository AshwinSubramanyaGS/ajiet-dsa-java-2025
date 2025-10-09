package Day4.Practice;

import java.util.ArrayList;

import java.util.stream.Collectors;

public class RemoveEvenDemo {
    static ArrayList<Integer> removeEven(ArrayList<Integer> list) {
        ArrayList<Integer> result = new ArrayList<>();
        for (int num : list) {
            if (num % 2 != 0) {
                result.add(num);
            }
        }
        return result;
    }
    public static void main(String[] args) {
        ArrayList<Integer>list=new ArrayList<>();
        for (int i=1;i<13;i++){
            list.add(i);
        }
        System.out.println("Orginal List : " + list);
        //list=removeEven(list);
        //list.removeIf(x->x%2==0);
        ArrayList<Integer> newList=list.stream().filter(x->x%2!=0).collect(Collectors.toCollection(ArrayList::new));
        System.out.println("Modified List : " + newList);
    }

}
