/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.policies.api.jaxws;

import javax.xml.namespace.QName;

/**
 * Request bean for the doCheckPayment operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "doCheckPayment",
  namespace = "http://api.policies.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "doCheckPayment",
  namespace = "http://api.policies.openinsurance.ibm.com/",
  propOrder = { "policyId", "userId", "routingNumber", "checkingAccount", "amount" }
)
@javax.xml.bind.annotation.XmlAccessorType ( javax.xml.bind.annotation.XmlAccessType.FIELD )
public class DoCheckPayment {

  @javax.xml.bind.annotation.XmlElement (
    name = "policyId"
  )
  protected java.lang.String policyId;
  @javax.xml.bind.annotation.XmlElement (
    name = "userId"
  )
  protected java.lang.String userId;
  @javax.xml.bind.annotation.XmlElement (
    name = "routingNumber"
  )
  protected java.lang.String routingNumber;
  @javax.xml.bind.annotation.XmlElement (
    name = "checkingAccount"
  )
  protected java.lang.String checkingAccount;
  @javax.xml.bind.annotation.XmlElement (
    name = "amount"
  )
  protected java.lang.String amount;

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

  /**
   * the routing number
   */
  public java.lang.String getRoutingNumber() {
    return this.routingNumber;
  }

  /**
   * the routing number
   */
  public void setRoutingNumber(java.lang.String routingNumber) {
    this.routingNumber = routingNumber;
  }

  /**
   * the checking account
   */
  public java.lang.String getCheckingAccount() {
    return this.checkingAccount;
  }

  /**
   * the checking account
   */
  public void setCheckingAccount(java.lang.String checkingAccount) {
    this.checkingAccount = checkingAccount;
  }

  /**
   * the amount
   */
  public java.lang.String getAmount() {
    return this.amount;
  }

  /**
   * the amount
   */
  public void setAmount(java.lang.String amount) {
    this.amount = amount;
  }
}
