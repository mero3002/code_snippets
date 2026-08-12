import java.util.TreeMap;
import java.util.Scanner;

public class Counter {
    Scanner cin;
    boolean loop_start;

    public Counter(){
        cin = new Scanner(System.in);
        loop_start = true;
    }

    public String readString(){
        System.out.println("Text:");

        String input;

        do{
            System.out.print("> ");
            input = cin.nextLine();

            if (input.isEmpty()) {
                System.out.println("<< Input cannot be empty >>");
            }

        }while(input.isEmpty());

        return input;
    }

    public void displayChars(TreeMap m){
        if (m != null) {
            System.out.println(m + "\n");
        }
    }

    public TreeMap countChars(String s){
        if (s.equals("exit")){
            loop_start = false;
            System.out.printf("<< byebye >>");
            return null;
        }
        TreeMap m = new TreeMap();

        for (char c : s.toCharArray()){
            if (m.containsKey(c)){
                int old = (int) m.get(c);
                m.put(c, old + 1);
            }
            else{
                m.put(c, 1);
            }
        }
        return m;
    }

    public void start(){
        while (loop_start){
            displayChars(countChars(readString()));
        }
    }

    public static void main(String[] args) {
        new Counter().start();
    }
}