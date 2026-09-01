import java.util.Scanner;
	
	public class Main {
		public static void main(String[] args) {
			Scanner scanner = new Scanner(System.in);

			System.out.println("Digite o seu nome" );
			String nome = scanner.nextLine();
			
			System.out.println("digite a sua idade: ");
			int idade = scanner.nextInt();	
			
			System.out.println("sua idade e: " + idade);
			System.out.println("o seu nome e: " + nome);

			if ( idade <= 17 ) {
				System.out.println("voce e menor de idade");
}
			else{
			System.out.println("voce e maior de idade");
}

			
}
}