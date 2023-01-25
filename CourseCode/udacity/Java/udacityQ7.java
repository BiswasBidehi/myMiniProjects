public class udacityQ7 {
  public static void main(String[] args) {
    double playbackPosition = 120;
    boolean rewinding = true;
    if (rewinding) {
      double rewindAmount = 0.1;
      playbackPosition -= rewindAmount; // rewindAmount will work only inside if block
      // outside if block it doenn't exist.
    }
    System.out.println(playbackPosition);
  }

}
