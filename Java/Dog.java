public class Dog extends Animal {

    String breed;
    String name;
    String bark;

    public String bark() {
      return bark;
    }

    public String name(String name) {
      return "Dog's name is: " + name;
    }

    public static void main(String[] args) {};
}
