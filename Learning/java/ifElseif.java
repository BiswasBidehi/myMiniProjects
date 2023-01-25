public class ifElseif{
    public static void main(String[] args){
        int mark = 65;
        if(mark < 50){
            System.out.println("Fail");
        }
        else if(mark >= 50){
            System.out.println("D");
        }
        else if(mark >= 60 && mark < 70){
            System.out.println("C");
        }
        else if(mark >= 70 && mark < 80){
            System.out.println("B");
        }
        else if(mark >= 80 && mark < 90){
            System.out.println("A");
        }
        else{
            System.out.println("A+");
        }

    }
}