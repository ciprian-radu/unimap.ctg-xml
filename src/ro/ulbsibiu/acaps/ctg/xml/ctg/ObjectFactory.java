//
// This file was generated by the JavaTM Architecture for XML Binding(JAXB) Reference Implementation, vhudson-jaxb-ri-2.2-147 
// See <a href="http://java.sun.com/xml/jaxb">http://java.sun.com/xml/jaxb</a> 
// Any modifications to this file will be lost upon recompilation of the source schema. 
// Generated on: 2010.11.16 at 12:57:39 PM EET 
//


package ro.ulbsibiu.acaps.ctg.xml.ctg;

import javax.xml.bind.JAXBElement;
import javax.xml.bind.annotation.XmlElementDecl;
import javax.xml.bind.annotation.XmlRegistry;
import javax.xml.namespace.QName;


/**
 * This object contains factory methods for each 
 * Java content interface and Java element interface 
 * generated in the ro.ulbsibiu.acaps.ctg.xml.ctg package. 
 * <p>An ObjectFactory allows you to programatically 
 * construct new instances of the Java representation 
 * for XML content. The Java representation of XML 
 * content can consist of schema derived interfaces 
 * and classes representing the binding of schema 
 * type definitions, element declarations and model 
 * groups.  Factory methods for each of these are 
 * provided in this class.
 * 
 */
@XmlRegistry
public class ObjectFactory {

    private final static QName _Ctg_QNAME = new QName("http://webspace.ulbsibiu.ro/ciprian.radu/research/noc/application_mapping/unified_framework/schema/ctg", "ctg");

    /**
     * Create a new ObjectFactory that can be used to create new instances of schema derived classes for package: ro.ulbsibiu.acaps.ctg.xml.ctg
     * 
     */
    public ObjectFactory() {
    }

    /**
     * Create an instance of {@link DeadlineType }
     * 
     */
    public DeadlineType createDeadlineType() {
        return new DeadlineType();
    }

    /**
     * Create an instance of {@link CommunicationType }
     * 
     */
    public CommunicationType createCommunicationType() {
        return new CommunicationType();
    }

    /**
     * Create an instance of {@link CtgType }
     * 
     */
    public CtgType createCtgType() {
        return new CtgType();
    }

    /**
     * Create an instance of {@link CommunicatingTaskType }
     * 
     */
    public CommunicatingTaskType createCommunicatingTaskType() {
        return new CommunicatingTaskType();
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link CtgType }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://webspace.ulbsibiu.ro/ciprian.radu/research/noc/application_mapping/unified_framework/schema/ctg", name = "ctg")
    public JAXBElement<CtgType> createCtg(CtgType value) {
        return new JAXBElement<CtgType>(_Ctg_QNAME, CtgType.class, null, value);
    }

}
