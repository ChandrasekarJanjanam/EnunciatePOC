/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.policies.api.jaxws;

import javax.xml.namespace.QName;

/**
 * Response bean for the getTowingCompaniesResponse operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "getTowingCompaniesResponse",
  namespace = "http://api.policies.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "getTowingCompaniesResponse",
  namespace = "http://api.policies.openinsurance.ibm.com/",
  propOrder = { "_retval" }
)
 @javax.xml.bind.annotation.XmlAccessorType ( javax.xml.bind.annotation.XmlAccessType.FIELD )
public class GetTowingCompaniesResponse {

  @javax.xml.bind.annotation.XmlElement (
    name = "return"
  )
  protected java.util.List<com.ibm.openinsurance.domain.TowingCompany> _retval;

  /**
   * the towing companies
   */
  public java.util.List<com.ibm.openinsurance.domain.TowingCompany> getReturn() {
    return this._retval;
  }

  /**
   * the towing companies
   */
  public void setReturn(java.util.List<com.ibm.openinsurance.domain.TowingCompany> value) {
    this._retval = value;
  }

}