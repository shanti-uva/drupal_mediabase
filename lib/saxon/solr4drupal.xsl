<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet version="2.0"	xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    
    <xsl:output method="xml" encoding="UTF-8" indent="yes"/>
    
    <xsl:param name="nid" />
    <xsl:param name="nlabel" />
    <xsl:param name="fid" />
    <xsl:param name="site" />
    <xsl:param name="hash" />
    <xsl:param name="path" />
    <xsl:param name="extras" />
    
    <xsl:variable name="high_url" select="'http://www.thlib.org/static/video/high/'"/>
    <xsl:variable name="low_url" select="'http://www.thlib.org/static/video/low/'"/>
    <xsl:variable name="audio_url" select="'http://www.thlib.org/static/audio/'"/>
    
    <xsl:template match="/">
        <xsl:apply-templates select="TITLE"/>
    </xsl:template>
    
    <xsl:template match="TITLE">
        <add>
            <xsl:variable name="title" select="@id"/>
            <xsl:variable name="extrafields">
            	<xsl:for-each select="tokenize($extras, ',')">
              	<field name="{substring-before(.,'=')}"><xsl:value-of select="substring-after(.,'=')"/></field>
              </xsl:for-each>
            </xsl:variable>
            <xsl:apply-templates select="TEXT/S">
                <xsl:with-param name="title" select="$title" />
                <xsl:with-param name="series">
                    <xsl:for-each select="METADATA/belongsTo">
                        <xsl:choose>
                            <xsl:when test="starts-with(.,'c')">
                                <xsl:text> </xsl:text><xsl:value-of select="substring-before(.,'_')"/><xsl:text>.</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:value-of select="substring-before(.,'_')"/><xsl:text>.</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:for-each>
                </xsl:with-param>
                <xsl:with-param name="high" select="METADATA/video[quality='high']/name" />
                <xsl:with-param name="low" select="METADATA/video[quality='low']/name" />
                <xsl:with-param name="audio" select="METADATA/video[quality='audio']/name" />
                <xsl:with-param name="extrafields" select="$extrafields" />
            </xsl:apply-templates>
        </add>
    </xsl:template>
   
    <xsl:template match="S">
        <xsl:param name="title" select="''"/>
        <xsl:param name="series" select="''"/>
        <xsl:param name="high" select="''"/>
        <xsl:param name="low" select="''"/>
        <xsl:param name="audio" select="''"/>
        <xsl:param name="extrafields" select="''"/>
        
        <xsl:variable name="sid" select="@id"/>
        <xsl:variable name="snum" select="format-number(number(substring($title,2)) * 1000 + position(), '#')" />
        <doc>   					
        		<field name="id"><xsl:value-of select="concat($hash,'/sentence/',$nid,'-',$sid)"/></field>
            <field name="entity_type">fragment</field>
            <field name="bundle">sentence</field>
            <field name="bundle_name">Sentence</field>
            <field name="label"><xsl:value-of select="$nlabel"/></field>
            <field name="hash"><xsl:value-of select="$hash"/></field>
            <field name="site"><xsl:value-of select="$site"/></field>
            <field name="is_nid"><xsl:value-of select="$nid"/></field>
            <field name="ss_node_label"><xsl:value-of select="$nlabel"/></field>
            <field name="is_fid"><xsl:value-of select="$fid"/></field>
            <field name="ss_sid"><xsl:value-of select="$sid"/></field>
            <xsl:copy-of select="$extrafields" />
            
            <!-- <xsl:if test="normalize-space(@who)">
            	<xsl:variable name="spname" select="//SPEAKER[@personId=current()/@who]"/>
							<field name="ss_speaker">
								<xsl:choose>
									<xsl:when test="not(normalize-space($spname))">
										<xsl:value-of select="@who"/>
									</xsl:when>
									<xsl:otherwise>
										<xsl:value-of select="$spname"/>
									</xsl:otherwise>
								</xsl:choose>
							</field>
            </xsl:if> -->
            
            <xsl:variable name="speakerbo"><xsl:value-of select="//SPEAKER[@personId=current()/@who]/name_bod"/></xsl:variable>
            <xsl:variable name="speakerwylie"><xsl:value-of select="//SPEAKER[@personId=current()/@who]/name_wylie"/></xsl:variable>
            <xsl:if test="normalize-space($speakerbo)">
            	<field name="ss_speaker"><xsl:value-of select="$speakerbo"/></field>
            	<field name="ss_speaker_bod"><xsl:value-of select="$speakerbo"/></field>
            </xsl:if>
            <xsl:if test="normalize-space($speakerwylie)">
            	<field name="ss_speaker_wylie"><xsl:value-of select="$speakerwylie"/></field>
            	<field name="ss_speaker_eng"><xsl:value-of select="$speakerwylie"/></field>
            </xsl:if>
            <field name="path"><xsl:value-of select="$path"/></field>
            <field name="url"><xsl:value-of select="concat($site, '/', $path, '#', $sid)"/></field>
            <field name="content">
            	<xsl:value-of select="normalize-space(FORM[@xml:lang='bo'])"/><xsl:text> </xsl:text>
            	<xsl:value-of select="normalize-space(FORM[@xml:lang='bo-Latn'])"/><xsl:text> </xsl:text>
            	<xsl:value-of select="normalize-space(TRANSL[@xml:lang='en'])"/><xsl:text> </xsl:text>
            	<xsl:value-of select="normalize-space(TRANSL[@xml:lang='zh'])"/>
            </field>       
            <field name="content_bod"><xsl:value-of select="normalize-space(FORM[@xml:lang='bo'])"/></field>
            <field name="ts_content_wylie"><xsl:value-of select="normalize-space(FORM[@xml:lang='bo-Latn'])"/></field>
            <xsl:if test="TRANSL[@xml:lang='en']">
                <field name="ts_content_eng"><xsl:value-of select="normalize-space(TRANSL[@xml:lang='en'])"/></field>
            </xsl:if>
            <xsl:if test="TRANSL[@xml:lang='zh']">
                <field name="ts_content_zho"><xsl:value-of select="normalize-space(TRANSL[@xml:lang='zh'])"/></field>
            </xsl:if>
            <xsl:choose>
            	<xsl:when test="string(AUDIO/@start)">
                <field name="fts_start"><xsl:value-of select="format-number(AUDIO/@start,'0.000')"/></field>
                <xsl:if test="string(AUDIO/@end)">
                    <field name="fts_end"><xsl:value-of select="format-number(AUDIO/@end,'0.000')"/></field>
                    <xsl:variable name="duration"><xsl:value-of select="format-number(AUDIO/@end - AUDIO/@start,'0.000')"/></xsl:variable>
                    <xsl:choose>
                    	<xsl:when test="$duration&lt;0">
                    		<field name="fts_duration">0.000</field>
                    	</xsl:when>
                    	<xsl:otherwise>
                    		<field name="fts_duration"><xsl:value-of select="$duration"/></field>
                    	</xsl:otherwise>
                    </xsl:choose>
                </xsl:if>
              </xsl:when>
              <xsl:otherwise>
              	<field name="fts_duration">0.000</field>
              </xsl:otherwise>
            </xsl:choose>
        </doc>
    </xsl:template>

<!-- Here's what a chunk of transcript looks like:

      <S who="N400005" id="d148e29">
         <FORM xml:lang="bo">དེ་རིང་གནམ་ཡག་པོ་ར་ཅིག་༿འདྲ་ཅིག༾མི་འདུག་གས།</FORM>
         <FORM xml:lang="bo-Latn">de ring gnam yag po ra cig {'dra cig}mi 'dug gas/</FORM>
         <TRANSL xml:lang="en">Isn't it a nice day today?</TRANSL>
         <TRANSL xml:lang="zh">今天的天气多好啊, 是吧!</TRANSL>
         <AUDIO end="8.925999997392298" start="7.63"/>
      </S>
-->
    
</xsl:stylesheet>
