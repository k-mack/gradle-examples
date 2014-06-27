package example.jni.app;

import example.jni.Util;

public class Main {

  public static void main(String[] args) {
    Util.sayHelloTo(args.length == 0 ? "<UNDEFINED>" : args[0]);
  }

}
