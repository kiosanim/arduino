package info.fabiosartori.arduino.serial;

import gnu.io.CommPort;
import gnu.io.CommPortIdentifier;
import gnu.io.SerialPort;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

/**
 * Classe para comunicação serial de duas vias
 * Baseada em: http://rxtx.qbang.org/wiki/index.php/Two_way_communcation_with_the_serial_port
 * @author sartori
 *
 */
public class TwoWaySerialComm {

	public TwoWaySerialComm() {
        super();
    }
    
    public void connect ( String portName ) throws Exception {
        CommPortIdentifier portIdentifier = CommPortIdentifier.getPortIdentifier(portName);
        
        if ( portIdentifier.isCurrentlyOwned() ) {
            System.out.println("Error: Port is currently in use");
        } else {
            CommPort commPort = portIdentifier.open(this.getClass().getName(),2000);
            
            if ( commPort instanceof SerialPort ) {
                SerialPort serialPort = (SerialPort) commPort;
                serialPort.setSerialPortParams(9600,SerialPort.DATABITS_8,SerialPort.STOPBITS_1,SerialPort.PARITY_NONE);
                
                InputStream in = serialPort.getInputStream();
                OutputStream out = serialPort.getOutputStream();
                
                (new Thread(new SerialReader(in))).start();
                (new Thread(new SerialWriter(out))).start();

            } else {
                System.out.println("Error: Only serial ports are handled by this example.");
            }
        }     
    }
    
    /** */
    public static class SerialReader implements Runnable {
        InputStream in;
        
        public SerialReader ( InputStream in ) {
            this.in = in;
        }
        
        public void run () {
            byte[] buffer = new byte[1024];
            int len = -1;
            try {
                while ( ( len = this.in.read(buffer)) > -1 ) {
                    System.out.print(new String(buffer,0,len));
                }
            } catch ( IOException e ) {
                e.printStackTrace();
            }            
        }
    }

    /** */
    public static class SerialWriter implements Runnable {

    	OutputStream out;
        
        public SerialWriter ( OutputStream out ) {
            this.out = out;
        }
        
        public void run () {
            try {   
                int c = 0;
                while ( ( c = System.in.read()) > -1 ) {
                    this.out.write(c);
                }                
            } catch ( IOException e ) {
                e.printStackTrace();
            }
        }
    }
}
