public class udacityQ5 {
  public static void main(String[] args) {
    int time = 18;
    String timeofDay = null;
    if (time >= 5 && time < 12) {
      timeofDay = "monring";
    } else if (time >= 12 && time < 20) {
      timeofDay = "daytime";
    } else {
      timeofDay = "night";
    }
    System.out.println(timeofDay);
  }
}
