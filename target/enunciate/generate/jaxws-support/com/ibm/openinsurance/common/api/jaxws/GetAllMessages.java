/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.common.api.jaxws;

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
public class GetAllMessages {

  private java.lang.String userId;

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