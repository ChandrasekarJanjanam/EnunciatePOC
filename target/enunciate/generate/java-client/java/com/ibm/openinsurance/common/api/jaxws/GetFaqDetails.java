/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.common.api.jaxws;

import javax.xml.namespace.QName;

/**
 * Request bean for the getFaqDetails operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "getFaqDetails",
  namespace = "http://api.common.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "getFaqDetails",
  namespace = "http://api.common.openinsurance.ibm.com/",
  propOrder = { "userId", "policyId", "faqId" }
)
@javax.xml.bind.annotation.XmlAccessorType ( javax.xml.bind.annotation.XmlAccessType.FIELD )
public class GetFaqDetails {

  @javax.xml.bind.annotation.XmlElement (
    name = "userId"
  )
  protected java.lang.String userId;
  @javax.xml.bind.annotation.XmlElement (
    name = "policyId"
  )
  protected java.lang.String policyId;
  @javax.xml.bind.annotation.XmlElement (
    name = "faqId"
  )
  protected java.lang.String faqId;

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
   * the faq id
   */
  public java.lang.String getFaqId() {
    return this.faqId;
  }

  /**
   * the faq id
   */
  public void setFaqId(java.lang.String faqId) {
    this.faqId = faqId;
  }
}
