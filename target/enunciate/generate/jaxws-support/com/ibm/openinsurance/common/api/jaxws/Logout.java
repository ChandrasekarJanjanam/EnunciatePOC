/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.common.api.jaxws;

/**
 * Request bean for the logout operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "logout",
  namespace = "http://api.common.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "logout",
  namespace = "http://api.common.openinsurance.ibm.com/",
  propOrder = { "userName" }
)
public class Logout {

  private java.lang.String userName;

  /**
   * the user name
   */
  public java.lang.String getUserName() {
    return this.userName;
  }

  /**
   * the user name
   */
  public void setUserName(java.lang.String userName) {
    this.userName = userName;
  }
}
