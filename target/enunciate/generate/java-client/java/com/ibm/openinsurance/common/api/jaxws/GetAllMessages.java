/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.common.api.jaxws;

import javax.xml.namespace.QName;

/**
 * Request bean for the getAllMessages operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "getAllMessages",
  namespace = "http://api.common.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "getAllMessages",
  namespace = "http://api.common.openinsurance.ibm.com/",
  propOrder = { "userId" }
)
@javax.xml.bind.annotation.XmlAccessorType ( javax.xml.bind.annotation.XmlAccessType.FIELD )
public class GetAllMessages {

  @javax.xml.bind.annotation.XmlElement (
    name = "userId"
  )
  protected java.lang.String userId;

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
