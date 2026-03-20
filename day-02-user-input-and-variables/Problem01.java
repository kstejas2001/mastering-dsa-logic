// =============================================
// File     : Problem01.java
// Day      : 02 — User Input & Variables
// Topic    : Taking input and adding two numbers
// =============================================

import java.util.Scanner;

public class Problem01 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int a = sc.nextInt();

        System.out.print("Enter second number: ");
        int b = sc.nextInt();

        int c = a + b;

        System.out.println(c);
        
        sc.close();
    }
}