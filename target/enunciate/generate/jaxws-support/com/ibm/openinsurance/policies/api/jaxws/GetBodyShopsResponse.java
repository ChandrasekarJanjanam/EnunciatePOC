/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.policies.api.jaxws;

/**
 * Response bean for the getBodyShopsResponse operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "getBodyShopsResponse",
  namespace = "http://api.policies.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "getBodyShopsResponse",
  namespace = "http://api.policies.openinsurance.ibm.com/",
  propOrder = { "return" }
)
public class GetBodyShopsResponse {

  private java.util.List<com.ibm.openinsurance.domain.BodyShop> _retval;

  /**
   * the body shops
   */
  public java.util.List<com.ibm.openinsurance.domain.BodyShop> getReturn() {
    return this._retval;
  }

  /**
   * the body shops
   */
  public void setReturn(java.util.List<com.ibm.openinsurance.domain.BodyShop> value) {
    this._retval = value;
  }
}
