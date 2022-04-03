
import java.util.Scanner;

public class Q7 {
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        System.out.print("\t* Enter The Month no. :-  ");
        int m_no = obj.nextInt();
        System.out.print("\t* Enter The Day no. :- ");
        int d_no = obj.nextInt();
        if ((m_no == 1 && d_no >= 20) || (m_no == 2) && d_no <= 18) {
            System.out.print("\t* Zodiac sign for ");
            if (m_no == 1) {
                System.out.println("Jan " + d_no + " is Aquarius.");
            } else
                System.out.println("Feb " + d_no + " is Aquarius.");
        }
        if ((m_no == 2 && d_no >= 19) || (m_no == 3) && d_no <= 20) {
            System.out.print("\t* Zodiac sign for ");
            if (m_no == 2) {
                System.out.println("Feb " + d_no + " is Pisces");
            } else
                System.out.println("March " + d_no + " is Pisces");
        }
        if ((m_no == 3 && d_no >= 21) || (m_no == 4) && d_no <= 19) {
            System.out.print("\t* Zodiac sign for ");
            if (m_no == 3) {
                System.out.println("March " + d_no + " is Aries");
            } else
                System.out.println("Apr " + d_no + " is Aries");
        }
        if ((m_no == 4 && d_no >= 20) || (m_no == 5) && d_no <= 20) {
            System.out.print("\t* Zodiac sign for ");
            if (m_no == 4) {
                System.out.println("Apr " + d_no + " is Taurus");
            } else
                System.out.println("May " + d_no + " is Taurus");
        }
        if ((m_no == 5 && d_no >= 21) || (m_no == 6) && d_no <= 20) {
            System.out.print("\t* Zodiac sign for ");
            if (m_no == 5) {
                System.out.println("May " + d_no + " is Gemini");
            } else
                System.out.println("Jun " + d_no + " is Gemini");
        }
        if ((m_no == 6 && d_no >= 21) || (m_no == 7) && d_no <= 22) {
            System.out.print("\t* Zodiac sign for ");
            if (m_no == 6) {
                System.out.println("Jun " + d_no + " is Cancer");
            } else
                System.out.println("Jul " + d_no + " is Cancer");
        }
        if ((m_no == 7 && d_no >= 23) || (m_no == 8) && d_no <= 22) {
            System.out.print("\t* Zodiac sign for ");
            if (m_no == 7) {
                System.out.println("Jul " + d_no + " is Leo");
            } else
                System.out.println("Aug " + d_no + " is Leo");
        }
        if ((m_no == 8 && d_no >= 23) || (m_no == 9) && d_no <= 22) {
            System.out.print("\t* Zodiac sign for ");
            if (m_no == 8) {
                System.out.println("Aug " + d_no + " is Vigro");
            } else
                System.out.println("Sep " + d_no + " is Vigro");
        }
        if ((m_no == 9 && d_no >= 23) || (m_no == 10) && d_no <= 22) {
            System.out.print("\t* Zodiac sign for ");
            if (m_no == 9) {
                System.out.println("Sep " + d_no + " is Libra");
            } else
                System.out.println("Oct " + d_no + " is Libra");
        }
        if ((m_no == 10 && d_no >= 23) || (m_no == 11) && d_no <= 21) {
            System.out.print("\t* Zodiac sign for ");
            if (m_no == 10) {
                System.out.println("Oct " + d_no + " is Scorpio");
            } else
                System.out.println("Nov " + d_no + " is Scorpio");
        }
        if ((m_no == 11 && d_no >= 22) || (m_no == 12) && d_no <= 21) {
            System.out.print("\t* Zodiac sign for ");
            if (m_no == 11) {
                System.out.println("Nov " + d_no + " is Sagittarius");
            } else
                System.out.println("Dec " + d_no + " is Sagittarius");
        }
        if ((m_no == 12 && d_no >= 22) || (m_no == 13) && d_no <= 19) {
            System.out.print("\t* Zodiac sign for ");
            if (m_no == 12) {
                System.out.println("Dec " + d_no + " is Capricorn");
            } else
                System.out.println("Jan " + d_no + " is Capricorn");
        }
        obj.close();
    }
}
