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
				<th> Result </th>
			</tr>
			<xsl:for-each select="student">
				<tr>
					<td> <xsl:value-of select="no"></xsl:value-of> </td>
					<td> <xsl:value-of select="name"></xsl:value-of> </td>
					<td> <xsl:value-of select="marks"></xsl:value-of> </td>
					<td> <xsl:value-of select="rank"></xsl:value-of> </td>
						<xsl:choose>
							<xsl:when test="marks&gt;70">
								<td>Dist</td>
							</xsl:when>
							<xsl:when test="marks&lt;70 and marks&gt;60">
								<td> First </td>
							</xsl:when>
							<xsl:when test="marks&lt;60 and marks&gt;40">
								<td> Second </td>
							</xsl:when>
							<xsl:otherwise>
								<td>Fail </td>
							</xsl:otherwise>
						</xsl:choose>
				</tr>
			</xsl:for-each>
		</table>
	</body>
	</html>
</xsl:template>
</xsl:stylesheet>