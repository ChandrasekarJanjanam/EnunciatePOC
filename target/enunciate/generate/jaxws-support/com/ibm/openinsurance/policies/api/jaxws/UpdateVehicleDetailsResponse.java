/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.policies.api.jaxws;

/**
 * Response bean for the updateVehicleDetailsResponse operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "updateVehicleDetailsResponse",
  namespace = "http://api.policies.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "updateVehicleDetailsResponse",
  namespace = "http://api.policies.openinsurance.ibm.com/",
  propOrder = { "return" }
)
public class UpdateVehicleDetailsResponse {

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
