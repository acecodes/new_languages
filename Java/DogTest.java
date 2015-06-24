public class DogTest {

  public static void main(String[] args) {

    String[] dog_names = {"Sparky", "Bob", "Rusty", "Cupcake"};

    // Randomly choose a dog's name
    int choice = (int) (Math.random() * dog_names.length);

    // Instantiate a new Dog
    Dog d = new Dog();

    // Define Dog's properties
    d.size = 50;
    d.name = dog_names[choice];
    d.breed = "Doberman";
    d.bark = "Woooof!";

    // Let out a good old-fashioned woof
    System.out.println(d.bark());

  }

}
