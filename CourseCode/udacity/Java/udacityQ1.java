public class udacityQ1 {
  public static void main(String[] args) {
    double balance = 0;
    balance += 20;
    balance -= 25;
    balance += 30;
    balance -= 25;

    if (balance < 0) {
      System.out.println("We're in the red!");
    } else if (balance > 0) {
      System.out.println("We made a profit!");
    } else {
      System.out.println("We broke even.");
    }
  }
}