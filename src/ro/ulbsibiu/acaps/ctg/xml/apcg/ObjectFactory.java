//
// This file was generated by the JavaTM Architecture for XML Binding(JAXB) Reference Implementation, vhudson-jaxb-ri-2.2-147 
// See <a href="http://java.sun.com/xml/jaxb">http://java.sun.com/xml/jaxb</a> 
// Any modifications to this file will be lost upon recompilation of the source schema. 
// Generated on: 2010.09.06 at 04:36:08 PM EEST 
//


package ro.ulbsibiu.acaps.ctg.xml.apcg;

import javax.xml.bind.JAXBElement;
import javax.xml.bind.annotation.XmlElementDecl;
import javax.xml.bind.annotation.XmlRegistry;
import javax.xml.namespace.QName;


/**
 * This object contains factory methods for each 
 * Java content interface and Java element interface 
 * generated in the ro.ulbsibiu.acaps.ctg.xml.apcg package. 
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

    private final static QName _Apcg_QNAME = new QName("http://webspace.ulbsibiu.ro/ciprian.radu/research/noc/application_mapping/unified_framework/schema/apcg", "apcg");

    /**
     * Create a new ObjectFactory that can be used to create new instances of schema derived classes for package: ro.ulbsibiu.acaps.ctg.xml.apcg
     * 
     */
    public ObjectFactory() {
    }

    /**
     * Create an instance of {@link ApcgType }
     * 
     */
    public ApcgType createApcgType() {
        return new ApcgType();
    }

    /**
     * Create an instance of {@link CoreType }
     * 
     */
    public CoreType createCoreType() {
        return new CoreType();
    }

    /**
     * Create an instance of {@link TaskType }
     * 
     */
    public TaskType createTaskType() {
        return new TaskType();
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link ApcgType }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://webspace.ulbsibiu.ro/ciprian.radu/research/noc/application_mapping/unified_framework/schema/apcg", name = "apcg")
    public JAXBElement<ApcgType> createApcg(ApcgType value) {
        return new JAXBElement<ApcgType>(_Apcg_QNAME, ApcgType.class, null, value);
    }

}
