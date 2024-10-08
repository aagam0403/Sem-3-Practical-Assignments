<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
    <xsl:output method="html" encoding="UTF-8" />
    
    <xsl:template match="students">
        <html>
            <body>
                <table border="1">
                    <tr>
                        <th>Name</th>
                        <th>Address</th>
                        <th>Birth date</th>
                        <th>Gender</th>
                        <th>Mobile</th>
                        <th>Result</th>
                    </tr>
                    <xsl:for-each select="student">
                        <xsl:sort select="name" data-type="text" order="ascending" />
                        <tr>    
                            <td><xsl:value-of select="name"/></td>
                            <td><xsl:value-of select="info/add"/></td>
                            <td><xsl:value-of select="info/date"/></td>
                            <td><xsl:value-of select="info/gender"/></td>
                            <td><xsl:value-of select="info/mobile"/></td>
                            <td><xsl:value-of select="result"/></td>
                        </tr>
                    </xsl:for-each>
                </table>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>