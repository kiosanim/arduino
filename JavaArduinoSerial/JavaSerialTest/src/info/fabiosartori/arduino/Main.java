package info.fabiosartori.arduino;

public class Main {

	public static void main(String[] args) {

		ComunicacaoSerial comm = new ComunicacaoSerial();
			
		System.out.println("Ligando Luz");
		comm.enviarDados(1);
		
		try {
			Thread.sleep(5000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
		comm.enviarDados(1);
		
		try {
			Thread.sleep(10000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		System.out.println("Apagando Luz");
		comm.enviarDados(0);
	}

}
