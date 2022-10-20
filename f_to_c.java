import java.util.*;

public class f_to_c {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Give the Farhenite temperrature");
        float farhenite = sc.nextFloat();
        float celsius=(((farhenite - 32)*5)/9);
        System.out.println("Celsius temperature is ");
        System.out.format("%.4f",celsius);
        sc.close();
    }
}
