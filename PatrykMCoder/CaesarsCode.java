package PatrykMCoder;

import java.util.Scanner;

class CeasarsCode {
    public static void main(String[] args) {
        Scanner scannerMode = new Scanner(System.in);
        Scanner scannerText = new Scanner(System.in);
        Scanner scannerK = new Scanner(System.in);
        System.out.println("Select mode");
        int mode = scannerMode.nextInt();
        System.out.println("Type text");
        String text = scannerText.nextLine();
        System.out.println("Type k");
        int k = scannerK.nextInt();

        scannerMode.close();
        scannerText.close();
        scannerK.close();
        
        String result = switch(mode) {
            case 1 -> {
                yield encrypt(text, k); 
            } 
            case 2 -> {
                yield decrypt(text, k);
            }
            default -> {
                throw new IllegalArgumentException("Select 1 or 2");
            }
        };

        System.out.println(result);
    }

    private static String encrypt(String text, int k) {
        StringBuilder stringBuilder = new StringBuilder();
        for (int i = 0; i < text.length(); i++) {
            char c = text.charAt(i);
            int asciiChar = (int)c;
            if (checkSpecialChar(asciiChar)){
                stringBuilder.append(c);
                continue;
            }
            char l = Character.toChars(asciiChar + k)[0];
            stringBuilder.append(l);
        }

        return stringBuilder.toString();
    }

    private static String decrypt(String text, int k) {
        StringBuilder stringBuilder = new StringBuilder();
        for (int i = 0; i < text.length(); i++) {
            char c = text.charAt(i);
            int asciiChar = (int)c;
            if (checkSpecialChar(asciiChar)){
                stringBuilder.append(c);
                continue;
            }
            char l = Character.toChars(asciiChar - k)[0];
            stringBuilder.append(l);
        }
        return stringBuilder.toString();
    }

    private static boolean checkSpecialChar(int asciiChar) {
        return (asciiChar >= 33 && asciiChar <= 47) || (asciiChar >=58 && asciiChar <= 64) || (asciiChar >= 91 && asciiChar <=96) || (asciiChar >=123 && asciiChar <= 127);
    }
}