<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
<xsl:template match="Employee/name">
	<html>
	<body>
		<h1> Emp_Name : <xsl:value-of select="fname"></xsl:value-of><xsl:value-of select="lname"></xsl:value-of>  </h1>
		<h2> <xsl:value-of select="@id"></xsl:value-of> </h2>
	</body>
	</html>
</xsl:template>
</xsl:stylesheet>