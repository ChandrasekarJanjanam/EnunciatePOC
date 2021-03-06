/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.domain;

/**
 *  The Class IdCardDetails.
 */
@javax.xml.bind.annotation.XmlType (
  name = "idCardDetails",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "idCardDetails",
  namespace = ""
)
public class IdCardDetails implements java.io.Serializable {

  private com.ibm.openinsurance.domain.Vehicle _vehicle;
  private com.ibm.openinsurance.domain.Policy _policy;
  private java.util.List<java.lang.String> _insuredPersons;

  /**
   * the vehicle
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "vehicle",
    namespace = ""
  )
  public com.ibm.openinsurance.domain.Vehicle getVehicle() {
    return this._vehicle;
  }

  /**
   * the vehicle
   */
  public void setVehicle(com.ibm.openinsurance.domain.Vehicle _vehicle) {
    this._vehicle = _vehicle;
  }

  /**
   * the policy
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "policy",
    namespace = ""
  )
  public com.ibm.openinsurance.domain.Policy getPolicy() {
    return this._policy;
  }

  /**
   * the policy
   */
  public void setPolicy(com.ibm.openinsurance.domain.Policy _policy) {
    this._policy = _policy;
  }

  /**
   * the insuredPersons
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "insuredPersons",
    namespace = ""
  )
  public java.util.List<java.lang.String> getInsuredPersons() {
    return this._insuredPersons;
  }

  /**
   * the insuredPersons
   */
  public void setInsuredPersons(java.util.List<java.lang.String> _insuredPersons) {
    this._insuredPersons = _insuredPersons;
  }

}
