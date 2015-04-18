package info.fabiosartori.arduino;

import gnu.io.CommPortIdentifier;
import gnu.io.NoSuchPortException;
import gnu.io.PortInUseException;
import gnu.io.SerialPort;
import gnu.io.UnsupportedCommOperationException;

import java.io.IOException;
import java.io.OutputStream;

public class ComunicacaoSerial {

	private SerialPort porta;
	private CommPortIdentifier portId = null;
	private int taxa = 9600;
	private String portaSO = "/dev/tty.usbmodem1411";
	private OutputStream serialOut;
	
	private static ComunicacaoSerial instance;
	
	private ComunicacaoSerial() {
		super();
		try {
			portId = CommPortIdentifier.getPortIdentifier(this.portaSO);
		} catch (NoSuchPortException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		try {
			porta = (SerialPort) portId.open("Comunicação Serial", this.taxa);
			serialOut = porta.getOutputStream();
			porta.setSerialPortParams(this.taxa, SerialPort.DATABITS_8, SerialPort.STOPBITS_1, SerialPort.PARITY_NONE);
			
		} catch (PortInUseException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (UnsupportedCommOperationException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
	
	public static ComunicacaoSerial getInstance() {
		
		if (instance == null) {
			
			instance = new ComunicacaoSerial();
			
		}

		return instance;
		
	}
	
	/**
	 * Enviar mensagem
	 * @param opcao
	 */
	public void enviarDados(int opcao) {
		try {
			this.serialOut.write(opcao);
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
	
}
