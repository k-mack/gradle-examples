package example.jni;

/**
 * Simple JNI.
 *
 * @author Kevin Macksamie
 *
 */
public class Util {

  static {
    System.loadLibrary("native");
  }

  private Util() {
  }

  public static native void sayHelloTo(String name);

}
