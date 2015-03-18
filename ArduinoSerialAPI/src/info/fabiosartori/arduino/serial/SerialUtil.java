package info.fabiosartori.arduino.serial;

import gnu.io.CommPortIdentifier;

/**
 * Classe utilitária para SERIAL
 * Baseada em: http://rxtx.qbang.org/wiki/index.php/Discovering_comm_ports
 * @author sartori
 *
 */
public class SerialUtil {

	/**
	 * Lista as portas seriais disponíveis.
	 */
	public static void listPorts() {
        java.util.Enumeration<CommPortIdentifier> portEnum = CommPortIdentifier.getPortIdentifiers();
        while ( portEnum.hasMoreElements() ) 
        {
            CommPortIdentifier portIdentifier = portEnum.nextElement();
            System.out.println(portIdentifier.getName()  +  " - " +  getPortTypeName(portIdentifier.getPortType()) );
        }        
    }
    
    public static String getPortTypeName ( int portType ) {
        switch ( portType )
        {
            case CommPortIdentifier.PORT_I2C:
                return "I2C";
            case CommPortIdentifier.PORT_PARALLEL:
                return "Parallel";
            case CommPortIdentifier.PORT_RAW:
                return "Raw";
            case CommPortIdentifier.PORT_RS485:
                return "RS485";
            case CommPortIdentifier.PORT_SERIAL:
                return "Serial";
            default:
                return "unknown type";
        }
    }
	}
