import java.util.Scanner;
public class Student {
    public static void main(String[] args){
        boolean isStudent = false;
        double gpa = 0;
        Scanner cin = new Scanner(System.in);

        System.out.print("Name: ");
        String name = cin.nextLine();

        System.out.print("Age: ");
        int age = cin.nextInt();

        System.out.print("Student? (y/n): ");
        String student = cin.next();

        if(student.equalsIgnoreCase("y")){
            isStudent = true;
            System.out.print("GPA: ");
            gpa = cin.nextDouble();
        }

        System.out.println("Your name is: " + name);
        System.out.println("Your age is: " + age);

        if(isStudent){
            System.out.println("Your GPA is: " + gpa);
        }
        else{
            System.out.println("You are not a student");
        }
        cin.close();
    }
}