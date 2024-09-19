<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
<xsl:template match="ord_det">
	<html>
	<body>
		<table border="1">
			<tr>
				<th>Order Number</th>
				<th>Order Rate</th>
				<th>Order Amount</th>
				<th>Item Price</th>
				<th>Item Name</th>
				<th>Quantity</th>
			</tr>
			<tr>
				<td> <xsl:value-of select="no"></xsl:value-of> </td>
				<td> <xsl:value-of select="rate"></xsl:value-of> </td>
				<td> <xsl:value-of select="amount"></xsl:value-of> </td>
				<td> <xsl:value-of select="price"></xsl:value-of> </td>
				<td> <xsl:value-of select="name"></xsl:value-of> </td>
				<td> <xsl:value-of select="quant"></xsl:value-of> </td>
			</tr>
		</table>
	</body>
	</html>
</xsl:template>
</xsl:stylesheet>