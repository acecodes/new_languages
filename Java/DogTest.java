public class DogTest {

  public static void main(String[] args) {

    String[] dog_names = {"Sparky", "Bob", "Rusty", "Cupcake"};

    // Randomly choose a dog's name
    int choice = (int) (Math.random() * dog_names.length);

    // Instantiate a new Dog
    Dog d = new Dog();

    // Define inherited Animal properties
    d.size = 50;
    // d.age = 10;
    d.mammal = true;

    // Define Dog's properties
    d.name = dog_names[choice];
    d.breed = "Doberman";
    d.bark = "Woooof!";

    // Let out a good old-fashioned woof
    System.out.println(d.bark());

    // Is this Animal a mammal?
    System.out.println(d.mammal);

    // How old is he? (Inheritance test - Animal default is 25)
    System.out.println(d.age);

  }

}
