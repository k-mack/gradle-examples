package example;

import example.util.Util;

/**
 * Main example application.
 *
 * @author Kevin Macksamie
 *
 */
public class Main {

  /**
   * Entry point to the application.
   *
   * @param args Command line parameters.
   */
  public static void main(String[] args) {
    Util.sayHelloTo(args.length == 0 ? "UNDEFINED" : args[0]);
  }

}
