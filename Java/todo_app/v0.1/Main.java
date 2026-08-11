import java.util.LinkedList;
import java.util.Scanner;

public class Main {
    static Scanner cin = new Scanner(System.in);
    static LinkedList<String> tasks = new LinkedList<String>();
    static LinkedList<Boolean> status = new LinkedList<Boolean>();
    static boolean loop = true;

    public static boolean isEmpty() {
        if (tasks.toArray().length == 0) return true;
        return false;
    }

    public static int readInt() {
        boolean valid = true;
        String choice;
        do {
            System.out.print("> ");
            choice = cin.nextLine();
            try {
                Integer.parseInt(choice);
                valid = true;
            } catch (NumberFormatException error) {
                valid = false;
                System.out.println("<< Enter a numeric value >>");
                continue;
            }
        } while (!valid);
        return Integer.parseInt(choice);
    }

    public static void start() {
        while (loop) {
            displayMenu();
            selector(readOption());
        }
    }

    public static void addTask() {
        System.out.println();
        System.out.println("Task: ");
        String task = cin.nextLine();
        tasks.add(task);
        status.add(false);
        System.out.println("<< task added >>");
        System.out.println();
    }

    public static void removeTask() {
        System.out.println("Choose a task to remove:");
        displayTasks();
        boolean valid;
        int choice;
        int listLength = tasks.toArray().length;
    do {
        choice = readInt();
        if (choice > listLength || choice < 1) {
            System.out.println("<< choose between (" + 1 + "-" + listLength + ") >>");
            valid = false;
        } else {
            valid = true;
            tasks.remove(choice - 1);
            status.remove(choice - 1);
            System.out.println("<< Task was removed successfully >>");
            System.out.println();
        }
    } while(!valid);
    }

    public static boolean taskStatus(int task) {
        if (status.get(task)) return true;
        return false;
    }

    public static void completeTask() {
        if (isEmpty()) {
            System.out.println("<< Task list is empty >>");
            System.out.println();
            return;
        }
        if (!status.contains(false)) {
            System.out.println("~ You've already done a great job! ~");
            System.out.println();
            return;
        }
        int choice;
        boolean valid = true;
        System.out.println();
        System.out.println("Choose a task to complete:");
        displayTasks();
        int listLength = tasks.toArray().length;
        do {
            choice = readInt();
            if (choice > listLength || choice < 1) {
                System.out.println("<< choose between (" + 1 + "-" + listLength + ") >>");
                valid = false;
            } else valid = true;
//            System.out.println();
        } while (!valid);
        if (status.get(choice - 1) == true) {
            System.out.printf("<< already completed >>");
            System.out.println();
        } else {
            int task_index = choice - 1;
            status.set(task_index, true);
            String task = tasks.get(task_index);
            tasks.set(task_index, "\u001B[9m" + task + "\u001B[0m");
            System.out.println("<< task completed, keep up! >> ");
        }
        System.out.println();
    }

    public static void displayMenu() {
        System.out.println("[1] Add task");
        System.out.println("[2] Complete task");
        System.out.println("[3] Remove task");
        System.out.println("[4] Show tasks");
        System.out.println("[5] Quit app");
    }

    public static void displayTasks() {
//        System.out.println();
        System.out.println("============ Tasks ============");
        int i;
        for (i = 0; i < tasks.toArray().length; i++) {
            System.out.println((i + 1) + ". " + tasks.get(i));
        }
        if (i == 0) System.out.println(" ~ it's very quiet here! ~");
    }

    public static int readOption() {
        boolean valid = true;
        int choice;
        do {
//            System.out.print("> ");
            choice = readInt();
            if (choice < 1 || choice > 5) {
                System.out.println("<< Enter a value between (1-5) >>");
                valid = false;
            } else valid = true;
        } while (!valid);
        return choice;
    }

    public static void byebye() {
        System.out.println("<< byebye >>");
    }

    public static void selector(int option) {
        switch (option) {
            case 1 -> addTask();
            case 2 -> completeTask();
            case 3 -> removeTask();
            case 4 -> {
                System.out.println();
                displayTasks();
                System.out.println();
            }
            case 5 -> {
                byebye();
                loop = false;
            }
        }
    }

    public static void main(String[] args) {
        System.out.println("============ ToDo List Manager ============");
        start();
    }
}