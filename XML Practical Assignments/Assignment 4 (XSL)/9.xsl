<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
<xsl:template match="students">
	<html>
	<body>
		<table border="1">
			<tr>
				<th>Roll No</th>
				<th>Name</th>
				<th>Marks</th>
				<th>Rank</th>
			</tr>
			<xsl:for-each select="student">
				<tr>
					<td> <xsl:value-of select="no"></xsl:value-of> </td>
					<td> <xsl:value-of select="name"></xsl:value-of> </td>
					<td> <xsl:value-of select="marks"></xsl:value-of> </td>
					<td> <xsl:value-of select="rank"></xsl:value-of> </td>
				</tr>
			</xsl:for-each>
		</table>
	</body>
	</html>
</xsl:template>
</xsl:stylesheet>