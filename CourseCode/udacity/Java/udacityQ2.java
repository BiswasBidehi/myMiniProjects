public class udacityQ2 {
  public static void main(String[] args) {
    int dogs = 1, cats = 2;

    if (dogs > 0 && cats == 0) {
      if (dogs > 1) {
        System.out.println("Dog lover");
      } else {
        System.out.println("Dog person");
      }
    } else if (cats > 0 && dogs == 0) {
      if (cats > 1) {
        System.out.println("Cat lover");
      } else {
        System.out.println("Cat person");
      }
    } else if (cats > 0 && dogs > 0) {
      if (dogs > cats) {
        System.out.println("You like dogs more");
      } else if (dogs == cats) {
        System.out.println("You like both equally");
      } else {
        System.out.println("You like cats move");
      }
    } else {
      System.out.println("What, don't you like pets?");
    }
  }
}
