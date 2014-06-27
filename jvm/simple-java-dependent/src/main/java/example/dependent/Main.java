package example.dependent;

import example.util.Util;

/**
 * A boring application.
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
    System.out.println("I'm a boring application that calls a boring library:");
    Util.sayHelloTo(args.length == 0 ? "<INPUT UNDEFINED>" : args[0]);
  }

}
