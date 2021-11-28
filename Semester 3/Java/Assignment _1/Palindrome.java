import java.util.Arrays;
import java.util.Scanner;

public class Palindrome {

    static char[] reverse(char[] s) {
        int j = 0;
        char[] second = new char[s.length];

        for (int i = s.length-1; i >= 0; i--) {
            second[j] = s[i];
            j++;
        }
        return second;
    }

    static void isPalindrome(char[] s, int length) {

        if (Arrays.equals(s, reverse(s))) {

            char[] first_half = new char[length/2];
            char[] second_half = new char[length/2];
            System.arraycopy(s, 0, first_half, 0, length / 2);
            System.arraycopy(s, (length / 2)+1, second_half, 0, length / 2);
            System.out.println("first = " + Arrays.toString(first_half));
            System.out.println("second = " + Arrays.toString(second_half));
            System.out.print("Palindrome");
        }
        else {
            System.out.println("first = []\nsecond = []");
            System.out.print("Not a Palindrome");
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter String : ");
        String str = input.nextLine();
        final int length = str.length();
        char[] first = new char[length];

        for (int i = 0; i < str.length(); i++) {
            first[i] = str.charAt(i);
        }
        isPalindrome(first,length);
    }
}