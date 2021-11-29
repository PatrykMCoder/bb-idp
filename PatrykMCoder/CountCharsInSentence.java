package PatrykMCoder;

import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;

public class CountCharsInSentence {
    public static void main(String[] args) {
        Scanner scannerSentence = new Scanner(System.in);
        String sentence = scannerSentence.nextLine();
        scannerSentence.close();

        Map<String, Integer> map = countChars(sentence);
        map.forEach((k, v) -> {
            System.out.println(k + ":" + v);
        });
    }

    private static Map<String, Integer> countChars(String sentence) {
        Map<String, Integer> map = new LinkedHashMap<>();

        for (int i = 0; i < sentence.length(); i++) {
            String c = String.valueOf(sentence.charAt(i));
            if (c.equals(" ")) {
                continue;
            }
            if (map.get(c) != null) {
                int count = map.get(c) + 1;
                map.put(c, count);
            } else {
                map.put(c, 1);
            }
        }
        return map;
    }
}