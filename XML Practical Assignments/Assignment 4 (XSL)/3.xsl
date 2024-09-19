<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
<xsl:template match="Books">
	<html>
	<body>
		<table border="1">
			<tr>
				<th>Title </th>
				<th>Author </th>
				<th>Year </th>
				<th>Publisher </th>
			</tr>
				<xsl:for-each select="book">
					<tr>
				<xsl:if test="year&lt;1998">
					<td> <xsl:value-of select="@title"></xsl:value-of> </td>
					<td> <xsl:value-of select="author"></xsl:value-of> </td>
					<td> <xsl:value-of select="year"></xsl:value-of> </td>
					<td> <xsl:value-of select="publisher"></xsl:value-of> </td>
				</xsl:if>
					</tr>
				</xsl:for-each>
		</table>
	</body>
	</html>
</xsl:template>
</xsl:stylesheet>