/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.common.api.jaxws;

import javax.xml.namespace.QName;

/**
 * Response bean for the forgotPasswordResponse operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "forgotPasswordResponse",
  namespace = "http://api.common.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "forgotPasswordResponse",
  namespace = "http://api.common.openinsurance.ibm.com/",
  propOrder = { "_retval" }
)
 @javax.xml.bind.annotation.XmlAccessorType ( javax.xml.bind.annotation.XmlAccessType.FIELD )
public class ForgotPasswordResponse {

  @javax.xml.bind.annotation.XmlElement (
    name = "return"
  )
  protected java.lang.String _retval;

  /**
   * the string
   */
  public java.lang.String getReturn() {
    return this._retval;
  }

  /**
   * the string
   */
  public void setReturn(java.lang.String value) {
    this._retval = value;
  }

}
