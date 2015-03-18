import info.fabiosartori.arduino.serial.SerialUtil;
import info.fabiosartori.arduino.serial.TwoWaySerialComm;


public class Main {

	
	
	
	public static void main(String[] args) {

	    SerialUtil.listPorts();
	    
		try {
			new TwoWaySerialComm().connect("/dev/tty.usbmodem1421");
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}

}
