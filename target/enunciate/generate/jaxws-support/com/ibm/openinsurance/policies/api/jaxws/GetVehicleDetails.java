/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.policies.api.jaxws;

/**
 * Request bean for the getVehicleDetails operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "getVehicleDetails",
  namespace = "http://api.policies.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "getVehicleDetails",
  namespace = "http://api.policies.openinsurance.ibm.com/",
  propOrder = { "policyId", "vehicleId" }
)
public class GetVehicleDetails {

  private java.lang.String policyId;
  private java.lang.String vehicleId;

  /**
   * the policy id
   */
  public java.lang.String getPolicyId() {
    return this.policyId;
  }

  /**
   * the policy id
   */
  public void setPolicyId(java.lang.String policyId) {
    this.policyId = policyId;
  }

  /**
   * the vehicle id
   */
  public java.lang.String getVehicleId() {
    return this.vehicleId;
  }

  /**
   * the vehicle id
   */
  public void setVehicleId(java.lang.String vehicleId) {
    this.vehicleId = vehicleId;
  }
}
