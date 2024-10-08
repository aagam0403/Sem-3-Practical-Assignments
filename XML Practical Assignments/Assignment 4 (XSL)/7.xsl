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
							<xsl:when test="rank&lt;5">
								<td>Top Student</td>
							</xsl:when>
							<xsl:when test="rank&gt;5 and rank&lt;10">
								<td> Top 10 student </td>
							</xsl:when>
							<xsl:otherwise>
								<td>Average student </td>
							</xsl:otherwise>
						</xsl:choose>
				</tr>
			</xsl:for-each>
		</table>
	</body>
	</html>
</xsl:template>
</xsl:stylesheet>