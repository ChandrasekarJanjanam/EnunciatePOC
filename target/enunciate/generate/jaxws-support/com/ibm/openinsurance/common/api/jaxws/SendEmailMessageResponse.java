/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.common.api.jaxws;

/**
 * Response bean for the sendEmailMessageResponse operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "sendEmailMessageResponse",
  namespace = "http://api.common.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "sendEmailMessageResponse",
  namespace = "http://api.common.openinsurance.ibm.com/",
  propOrder = { "return" }
)
public class SendEmailMessageResponse {

  private java.lang.String _retval;

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
