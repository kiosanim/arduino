package info.fabiosartori.arduino.managedbean;

import info.fabiosartori.arduino.ComunicacaoSerial;

public class AutomacaoMB {

	private ComunicacaoSerial comm;
	
	public AutomacaoMB() {
		
		super();
		this.comm = ComunicacaoSerial.getInstance();
		
	}
	
	public String ligarLampada() {
		
		comm.enviarDados(1);
		
		return "LAMPADA_LIGADA";
	}
	
	public String apagarLampada() {
		
		comm.enviarDados(0);
		
		return "LAMPADA_APAGADA";
	}
	
	
}
