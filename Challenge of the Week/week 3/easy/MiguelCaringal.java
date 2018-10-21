package com.company;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner reader = new Scanner( System.in );
        int first = reader.nextInt();
        int second = reader.nextInt();
        int third = reader.nextInt();
        if (first+second+third == 180 && first == second && second == third){
            System.out.println("Equilateral");
        }
        else if (first+second+third==180 && first != second && second != third){
            System.out.println("Scalene");
        }
        else if (first+second+third !=180){
            System.out.println("Error");
        }
        else {
            System.out.println("Isoceles");
        }
    }
}
