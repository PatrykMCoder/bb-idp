package PatrykMCoder;

import java.util.Scanner;

class ValueOfFunctions {
    public static void main(String[] args) {
        Scanner scannerMode = new Scanner(System.in);
        Scanner scannerX = new Scanner(System.in);
        System.out.println("Select mode");
        int mode = scannerMode.nextInt();
        System.out.println("Type X");
        int x = scannerX.nextInt();
        scannerMode.close();
        scannerX.close();
        
        float result = switch (mode) {
            case 1 -> {
                yield functionA(x);
            }
            case 2 -> {
                yield functionB(x);
            }
            case 3 -> {
                yield functionC(x);
            }
      
            default -> {
                throw new IllegalArgumentException("Enter 1 for functionA, enter 2 for functionB or enter 3 for functionC");
            }
        };

        System.out.println(result);
    }

    private static float functionA(float x) {
        float value;
        if (x > 0)
            value = x * 2;
        else if (x == 0)
            value = 0;
        else
            value = -3 * x;
        return value;
    }

    private static float functionB(float x) {
        float value;
        if (x >= 1)
            value = x * x;
        else
            value = x;
        return value;
    }

    private static float functionC(float x) {
        float value;
        if (x > 2)
            value = 2 + x;
        else if (x == 2)
            value = 8;
        else
            value = x - 4;
        return value;
    }
}