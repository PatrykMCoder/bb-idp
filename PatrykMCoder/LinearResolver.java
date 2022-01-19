package PatrykMCoder;

import java.util.Scanner;

public class LinearResolver {

    public static void main(String[] args) {
        Scanner scannerA = new Scanner(System.in);
        Scanner scannerB = new Scanner(System.in);
        System.out.println("Type a");
        int a = scannerA.nextInt();
        System.out.println("Type b");
        int b = scannerB.nextInt();  
        scannerA.close();
        scannerB.close();
        int x0;

        if (a == 0 && b == 0) {
            System.out.println("No result");
        } else if(a == 0) {
            System.out.println("No result(conflict)");
        } else if (b == 0) {
            System.out.println("X0 = 0");
        } else {
            x0 = -(b/a);
            System.out.println("X0 = " + x0);
        }
    }
}
