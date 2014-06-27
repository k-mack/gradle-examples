package example.util;

/**
 * Utility methods that do... pretty much nothing useful.
 *
 * @author Kevin Macksamie
 *
 */
public final class Util {

  private Util() {
  }

  /**
   * Print "Hello, {@code name}" to stdout.
   *
   * @param name Object to greet.
   */
  public static void sayHelloTo(Object name) {
    System.out.println("Hello, " + name + "!");
  }

}
