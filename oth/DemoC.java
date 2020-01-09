
public class DemoC {



    static
    {
        System.loadLibrary("DemoC");
    }

    public static native void sayHello();

    @SuppressWarnings("static-access")
    public static void main(String[] args)
    {
        new DemoC().sayHello();
    }
}
