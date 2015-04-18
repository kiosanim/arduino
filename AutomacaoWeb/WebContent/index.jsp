<%@ taglib uri="http://java.sun.com/jsf/core" prefix="f" %>
<%@ taglib uri="http://java.sun.com/jsf/html" prefix="h" %>
<f:view>
	<html>
	
		<head>
			<title>Automacao Residencial</title>
		</head>
	
		<body>
			<center>Interruptor</center>
			<h:form>
				<h:commandButton action="#{automacaoMB.ligarLampada}" value="LIGAR" /></br>
				<h:commandButton action="#{automacaoMB.apagarLampada}" value="APAGAR" />
			</h:form>
		</body>
	</html>
</f:view>