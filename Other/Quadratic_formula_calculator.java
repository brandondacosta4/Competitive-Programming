import java.util.Scanner;  // Import the Scanner class
class Main {
  public static void main(String[] args) {
    Scanner myObj = new Scanner(System.in); // creates scanner object

    //input Section
    System.out.print("Enter value for a: "); //gets value of a 
    double a = myObj.nextDouble();

    System.out.print("Enter value for b: "); //gets value of b
    double b = myObj.nextDouble(); 

    System.out.print("Enter value for c: ");
    double c = myObj.nextDouble();


    //process/output Section
    double discriminant = Math.pow(b, 2) - (4.0 * a * c);

    if(discriminant > 0){ //checks if the discriminant is greater then 0
      double rootOne = (-b + Math.pow(discriminant, 0.5)) / (2.0 * a); //calculate the first root
      double rootTwo = (-b - Math.pow(discriminant, 0.5)) / (2.0 * a); //calulates the second root
      System.out.println("The roots are " + rootOne + " and " + rootTwo); //outputs roots 
    }

    else if(discriminant == 0){ //checks if the discriminant equals 0
      double rootOne = -b / (2.0 * a); //calculates the root
      System.out.println("The root is " + rootOne); // outputs the root
    }
    else{
      System.out.println("There are no roots."); //outputs that there are no roots
    }
  }
}
