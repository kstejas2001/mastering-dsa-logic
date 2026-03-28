// =============================================
// File     : Problem01.java
// Day      : 05 — Operators and Expressions
// Topic    : Basic operators in Java
// =============================================

public class Problem01 {
    public static void main(String[] args) {
        int a = 10;
        int b = 3;

        System.out.println(a + b);   // addition
        System.out.println(a - b);   // subtraction
        System.out.println(a * b);   // multiplication
        System.out.println(a / b);   // division
        System.out.println(a % b);   // remainder

        System.out.println(a == b);  // equal?
        System.out.println(a != b);  // not equal?
        System.out.println(a > b);   // greater than?
        System.out.println(a < b);   // less than?
        System.out.println(a >= b);  // greater than or equal?
        System.out.println(a <= b);  // less than or equal?
    }
}