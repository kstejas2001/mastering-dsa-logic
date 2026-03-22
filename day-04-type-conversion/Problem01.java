// =============================================
// File     : Problem01.java
// Day      : 04 — Type Conversion
// Topic    : Converting data types in Java
// =============================================

public class Problem01 {
    public static void main(String[] args) {
        // string to number
        String a = "5";
        String b = "3";

        int numA = Integer.parseInt(a);
        int numB = Integer.parseInt(b);

        int c = numA + numB;
        System.out.println(c);

        // number to text
        int x = 10;
        String y = String.valueOf(x);

        System.out.println(y);

        // whole number to decimal
        double z = x;
        System.out.println(z);
    }
}