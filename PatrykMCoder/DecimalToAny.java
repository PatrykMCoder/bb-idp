package PatrykMCoder;

import java.util.Scanner;

public class DecimalToAny {
    public static void main(String[] args) {
        Scanner scannerMode = new Scanner(System.in);
        Scanner scannerNumber = new Scanner(System.in);

        System.out.println("Select mode");
        int mode = scannerMode.nextInt();
        System.out.println("Type a decimal");
        int decimal = scannerNumber.nextInt();

        scannerMode.close();
        scannerNumber.close();

        String result = switch (mode) {
            case 1 -> {
                yield decToBin(decimal);
            }
            case 2 -> {
                yield decToHex(decimal);
            }                
            default -> {
                throw new IllegalArgumentException();
            }
        };

        System.out.println(result);
    }

    private static String decToHex(int decimal) {
        return Integer.toHexString(decimal);
    }

    private static String decToBin(int decimal) {
        return Integer.toBinaryString(decimal);
    }
}
