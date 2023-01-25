public class rolingDice {
  static int rollDice() {
    double randomNumber = Math.random();
    randomNumber *= 6;
    randomNumber += 1;
    int randomInt = (int) randomNumber;
    return randomInt;
  }

  public static void main(String[] args) {
    System.out.println("Dice: " + rollDice());
  }

}
