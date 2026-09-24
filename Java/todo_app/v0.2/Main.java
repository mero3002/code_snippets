import java.util.LinkedList;
import java.util.Scanner;

public class Main {
    private LinkedList<Task> tasks;
    private boolean loop_start;
    private Scanner cin;
    private int maxOption;

    public Main(){
        tasks = new LinkedList<>();
        loop_start = true;
        cin = new Scanner(System.in);
        maxOption = 5;
    }

    // booleans

    public boolean isOptionValid(int option){
        return option >= 1 && option <= maxOption;
    }

    public boolean isTaskValid(int task){
        if (task < 1 || task > tasks.size()) return false;
        return true;
    }

    public boolean doesTaskExist(String name){
        for (Task task : tasks){
            if (task.getName().equalsIgnoreCase(name)){
                return true;
            }
        }
        return false;
        // this method compares names, ignores completion state
    }

    // readers

    public int readInteger(){
        boolean valid = false;
        String input;

        do{
            System.out.print("# ");
            input = cin.nextLine();

            try {
                Integer.parseInt(input);
                valid = true;
            }
            catch (NumberFormatException error){
                System.out.println("<< Enter an integer >>");
                valid = false;
            }

        }while (!valid);

        return Integer.parseInt(input);
    }

    public String readString(){
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

    public int readOption(){
        int option = 0;
        boolean valid = false;

        while (!valid){
            option = readInteger();
            if (!isOptionValid(option)){
                System.out.println("<< Enter a value between (" + 1 + "-" + maxOption + ") >>");
            }
            else valid = true;
        }

        return option;
    }

    public int readTaskNumber(){
        int task = 0;
        boolean valid = false;

        while (!valid){
            task = readInteger();
            if (!isTaskValid(task)){
                System.out.println("<< choose between (" + 1 + "-" + tasks.size() + ") >>");
            }
            else valid = true;
        }

        return task;
    }

    // displayers

    public void displayTasks(){
        if (tasks.isEmpty()){
            System.out.println("~ it's very quiet here! ~");
            System.out.println();
            return;
        }

        for (int i = 0; i < tasks.size(); i++){
            System.out.println((i + 1) + ". " + tasks.get(i));
        }
    }

    public static void displayOptions() {
        System.out.println("[1] Add a task");
        System.out.println("[2] Complete a task");
        System.out.println("[3] Remove a task");
        System.out.println("[4] Show tasks");
        System.out.println("[5] Quit app");
    }

    // raw/main methods

    public void addTask(Task t){
        if (t != null) {
            tasks.add(t);
        }
        // i may make this take string first and turn it into an object
    }

    public void completeTask(Task t){
        if (t != null){
            t.setCompleted();
        }
    }

    public void removeTask(int taskNumber){
        if (taskNumber != 0) {
            tasks.remove(taskNumber - 1);
        }
    }

    public void byebye(){
        System.out.print("<< byebye >>");
        loop_start = false;
    }

    public void execute(int option){
        switch(option){
            case 1 -> addTask(addTaskPortal());
            case 2 -> completeTask((completeTaskPortal()));
            case 3 -> removeTask(removeTaskPortal());
            case 4 -> {
                System.out.println("\n========== Tasks ==========");
                displayTasks();
                System.out.println();
            }
            case 5 -> byebye();
        }
    }

    public void start(){
        while (loop_start) {
            displayOptions();
            execute(readOption());
        }
    }

    public static void main(String[] args) {
        System.out.println("========= TODO Manager =========");
        new Main().start();
    }

    // testing some shit hoping it works

    public Task addTaskPortal(){
        System.out.println("\nTask: (Adding)");
        String taskName = readString();

        Task t = new Task(taskName);

        if (doesTaskExist(taskName)) {
            System.out.print("<< Task already exists, add it anyway? (Y/n)\n> ");
            String decision = cin.nextLine();

            if (decision.equalsIgnoreCase("y")){
                System.out.println("<< Task added >>\n");
                return t;
            }
            else{
                System.out.println("<< Task aborted >>\n");
                return null;
            }
        }

        else {
            System.out.println("<< Task added >>\n");
            return t;
        }

    }

    public Task completeTaskPortal(){
        if (tasks.isEmpty()){
            System.out.println("<< No tasks were added >>");
            System.out.println();
            return null;
        }

        System.out.println("\nChoose a task's number: (Completing)");
        displayTasks();
        Task t = tasks.get(readTaskNumber() - 1);

        if (t.isCompleted()){
            System.out.println("<< Already completed >>\n");
            return null;
        }

        System.out.println("<< Great job, keep going! >>\n");
        return t;
    }

    public int removeTaskPortal(){
        if (tasks.isEmpty()){
            System.out.println("<< No tasks were added >>");
            System.out.println();
            return 0;
        }

        System.out.println("\nTask: (Removing)");
        displayTasks();
        int choice = readTaskNumber();
        System.out.println("<< Task removed >>\n");
        return choice;
    }
}