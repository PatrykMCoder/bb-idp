package PatrykMCoder;

import java.util.ArrayList;
import java.util.Scanner;

public class SortingJewelry {
    public static void main(String[] args) {
        Scanner scannerWords = new Scanner(System.in);
        System.out.println("Type words seperated by ',' without space");
        String words = scannerWords.next();
        String[] splitWords = words.split(",");

        ArrayList<String> sortedWords = new ArrayList<>();
        int i = splitWords.length;
    }
}

//abcdef, abc, abcde