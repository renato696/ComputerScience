import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner reading = new Scanner(System.in);

        System.out.println("Digite seu nome: ");
        String name = reading.nextLine();

        if (name == "Renato"){
            System.out.println("Você é um bom aluno");
        } else {
            System.out.println("Você precisa estudar mais =P");
        }

    }
}
