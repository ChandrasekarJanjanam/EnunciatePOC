/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.policies.api.jaxws;

/**
 * Response bean for the getIdCardDetailsResponse operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "getIdCardDetailsResponse",
  namespace = "http://api.policies.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "getIdCardDetailsResponse",
  namespace = "http://api.policies.openinsurance.ibm.com/",
  propOrder = { "return" }
)
public class GetIdCardDetailsResponse {

  private com.ibm.openinsurance.domain.IdCardDetails _retval;

  /**
   * the id card details
   */
  public com.ibm.openinsurance.domain.IdCardDetails getReturn() {
    return this._retval;
  }

  /**
   * the id card details
   */
  public void setReturn(com.ibm.openinsurance.domain.IdCardDetails value) {
    this._retval = value;
  }
}