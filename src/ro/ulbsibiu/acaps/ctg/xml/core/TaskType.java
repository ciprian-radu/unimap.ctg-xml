//
// This file was generated by the JavaTM Architecture for XML Binding(JAXB) Reference Implementation, vhudson-jaxb-ri-2.2-147 
// See <a href="http://java.sun.com/xml/jaxb">http://java.sun.com/xml/jaxb</a> 
// Any modifications to this file will be lost upon recompilation of the source schema. 
// Generated on: 2010.11.24 at 11:51:17 AM EET 
//


package ro.ulbsibiu.acaps.ctg.xml.core;

import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlAttribute;
import javax.xml.bind.annotation.XmlType;


/**
 * <p>Java class for taskType complex type.
 * 
 * <p>The following schema fragment specifies the expected content contained within this class.
 * 
 * <pre>
 * &lt;complexType name="taskType">
 *   &lt;complexContent>
 *     &lt;restriction base="{http://www.w3.org/2001/XMLSchema}anyType">
 *       &lt;attribute name="type" use="required" type="{http://www.w3.org/2001/XMLSchema}string" />
 *       &lt;attribute name="execTime">
 *         &lt;simpleType>
 *           &lt;restriction base="{http://www.w3.org/2001/XMLSchema}double">
 *             &lt;minExclusive value="0"/>
 *           &lt;/restriction>
 *         &lt;/simpleType>
 *       &lt;/attribute>
 *       &lt;attribute name="power">
 *         &lt;simpleType>
 *           &lt;restriction base="{http://www.w3.org/2001/XMLSchema}double">
 *             &lt;minExclusive value="0"/>
 *           &lt;/restriction>
 *         &lt;/simpleType>
 *       &lt;/attribute>
 *     &lt;/restriction>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "taskType")
public class TaskType {

    @XmlAttribute(name = "type", required = true)
    protected String type;
    @XmlAttribute(name = "execTime")
    protected Double execTime;
    @XmlAttribute(name = "power")
    protected Double power;

    /**
     * Gets the value of the type property.
     * 
     * @return
     *     possible object is
     *     {@link String }
     *     
     */
    public String getType() {
        return type;
    }

    /**
     * Sets the value of the type property.
     * 
     * @param value
     *     allowed object is
     *     {@link String }
     *     
     */
    public void setType(String value) {
        this.type = value;
    }

    /**
     * Gets the value of the execTime property.
     * 
     * @return
     *     possible object is
     *     {@link Double }
     *     
     */
    public Double getExecTime() {
        return execTime;
    }

    /**
     * Sets the value of the execTime property.
     * 
     * @param value
     *     allowed object is
     *     {@link Double }
     *     
     */
    public void setExecTime(Double value) {
        this.execTime = value;
    }

    /**
     * Gets the value of the power property.
     * 
     * @return
     *     possible object is
     *     {@link Double }
     *     
     */
    public Double getPower() {
        return power;
    }

    /**
     * Sets the value of the power property.
     * 
     * @param value
     *     allowed object is
     *     {@link Double }
     *     
     */
    public void setPower(Double value) {
        this.power = value;
    }

}
