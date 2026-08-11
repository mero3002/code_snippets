public class Task {
    private String name;
    private boolean completed;

    public Task(String name){
        this.name = name;
        // this.completed = false; // not needed, an object's boolean attribute is false by default
    }

    public boolean isCompleted() {
        return completed;
    }

    public String getName() {
        return name;
    }

    public void setCompleted() {
        completed = true;
    }

    public String toString(){
        return isCompleted() ? "\u001B[9m" + name + "\u001B[0m" : name;
    }

//    @Override
//    public boolean equals(Object o) {
//        if (!(o instanceof Task task)) return false;
//        return name.equalsIgnoreCase(task.name);
//    } // i didn't put it to use in this program, but at least i understand it now
}