/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.policies.api.jaxws;

/**
 * Response bean for the getVehicleDetailsResponse operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "getVehicleDetailsResponse",
  namespace = "http://api.policies.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "getVehicleDetailsResponse",
  namespace = "http://api.policies.openinsurance.ibm.com/",
  propOrder = { "return" }
)
public class GetVehicleDetailsResponse {

  private com.ibm.openinsurance.domain.Vehicle _retval;

  /**
   * the vehicle details
   */
  public com.ibm.openinsurance.domain.Vehicle getReturn() {
    return this._retval;
  }

  /**
   * the vehicle details
   */
  public void setReturn(com.ibm.openinsurance.domain.Vehicle value) {
    this._retval = value;
  }
}
