import java.util.ArrayList;
import java.util.Scanner;

public class MiguelCaringal {
    public static void main(String[] args) {
        String ploopy;
        ArrayList array = new ArrayList();
        Scanner reader = new Scanner( System.in );
        int length = reader.nextInt();
        for (int i = 0; i<length;i++){
            ploopy = reader.nextLine();
            String parts[] = ploopy.split(" ");
            array.add(parts);
        }
    }
}