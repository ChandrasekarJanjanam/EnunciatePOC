/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.policies.api.jaxws;

/**
 * Request bean for the getDriverDetails operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "getDriverDetails",
  namespace = "http://api.policies.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "getDriverDetails",
  namespace = "http://api.policies.openinsurance.ibm.com/",
  propOrder = { "policyId", "driverId" }
)
public class GetDriverDetails {

  private java.lang.String policyId;
  private java.lang.String driverId;

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
   * the driver id
   */
  public java.lang.String getDriverId() {
    return this.driverId;
  }

  /**
   * the driver id
   */
  public void setDriverId(java.lang.String driverId) {
    this.driverId = driverId;
  }
}