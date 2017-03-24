/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.policies.api.jaxws;

import javax.xml.namespace.QName;

/**
 * Request bean for the storeVehicleDetails operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "storeVehicleDetails",
  namespace = "http://api.policies.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "storeVehicleDetails",
  namespace = "http://api.policies.openinsurance.ibm.com/",
  propOrder = { "policyId", "vehicle" }
)
@javax.xml.bind.annotation.XmlAccessorType ( javax.xml.bind.annotation.XmlAccessType.FIELD )
public class StoreVehicleDetails {

  @javax.xml.bind.annotation.XmlElement (
    name = "policyId"
  )
  protected java.lang.String policyId;
  @javax.xml.bind.annotation.XmlElement (
    name = "vehicle"
  )
  protected com.ibm.openinsurance.domain.Vehicle vehicle;

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
   * the vehicle
   */
  public com.ibm.openinsurance.domain.Vehicle getVehicle() {
    return this.vehicle;
  }

  /**
   * the vehicle
   */
  public void setVehicle(com.ibm.openinsurance.domain.Vehicle vehicle) {
    this.vehicle = vehicle;
  }
}