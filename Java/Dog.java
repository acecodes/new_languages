public class Dog {

    private static String bark() {
      return "Woof!";
    }

    private static String name(String name) {
      return "Dog's name is: " + name;
    }

    public static void main(String[] args) {
      System.out.println(bark());
      System.out.println(name("Sparky"));
    }
}
