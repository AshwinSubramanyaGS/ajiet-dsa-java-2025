package Day4.Practice;

import java.util.ArrayList;

public class ArrayListSizeDemo {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < 5; i++) {
            list.add(i);
            System.out.println("Size: " + list.size());
        }
    }
}