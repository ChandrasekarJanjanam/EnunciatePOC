/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.policies.api.jaxws;

import javax.xml.namespace.QName;

/**
 * Request bean for the getClaimDetails operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "getClaimDetails",
  namespace = "http://api.policies.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "getClaimDetails",
  namespace = "http://api.policies.openinsurance.ibm.com/",
  propOrder = { "policyId", "userId" }
)
@javax.xml.bind.annotation.XmlAccessorType ( javax.xml.bind.annotation.XmlAccessType.FIELD )
public class GetClaimDetails {

  @javax.xml.bind.annotation.XmlElement (
    name = "policyId"
  )
  protected java.lang.String policyId;
  @javax.xml.bind.annotation.XmlElement (
    name = "userId"
  )
  protected java.lang.String userId;

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
