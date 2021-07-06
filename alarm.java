import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int hour = scan.nextInt();
        int min = scan.nextInt();

        int newHour, newMin;



        if (60>min>45) {
            newMin=min-45;
            System.out.printf("%d %d",hour, newMin);
        } else if (hour == 0){
            newHour = 23;
            newMin = min + 15;
            System.out.printf("%d %d", newHour, newMin);
        } else {
            newHour = hour - 1;
            newMin = min + 15;
            System.out.printf("%d %d", newHour, newMin);
        }

    }
}