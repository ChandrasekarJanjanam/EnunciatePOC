/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.policies.api.jaxws;

import javax.xml.namespace.QName;

/**
 * Response bean for the getAllPoliciesResponse operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "getAllPoliciesResponse",
  namespace = "http://api.policies.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "getAllPoliciesResponse",
  namespace = "http://api.policies.openinsurance.ibm.com/",
  propOrder = { "_retval" }
)
 @javax.xml.bind.annotation.XmlAccessorType ( javax.xml.bind.annotation.XmlAccessType.FIELD )
public class GetAllPoliciesResponse {

  @javax.xml.bind.annotation.XmlElement (
    name = "return"
  )
  protected java.util.List<com.ibm.openinsurance.domain.Policy> _retval;

  /**
   * the all policies
   */
  public java.util.List<com.ibm.openinsurance.domain.Policy> getReturn() {
    return this._retval;
  }

  /**
   * the all policies
   */
  public void setReturn(java.util.List<com.ibm.openinsurance.domain.Policy> value) {
    this._retval = value;
  }

}