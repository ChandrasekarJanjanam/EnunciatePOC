/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.policies.api.jaxws;

/**
 * Request bean for the getCoverageDetails operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "getCoverageDetails",
  namespace = "http://api.policies.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "getCoverageDetails",
  namespace = "http://api.policies.openinsurance.ibm.com/",
  propOrder = { "policyId", "userId" }
)
public class GetCoverageDetails {

  private java.lang.String policyId;
  private java.lang.String userId;

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
   * the user id
   */
  public java.lang.String getUserId() {
    return this.userId;
  }

  /**
   * the user id
   */
  public void setUserId(java.lang.String userId) {
    this.userId = userId;
  }
}
