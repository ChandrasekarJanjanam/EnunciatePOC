/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.common.api.jaxws;

/**
 * Request bean for the forgotPassword operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "forgotPassword",
  namespace = "http://api.common.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "forgotPassword",
  namespace = "http://api.common.openinsurance.ibm.com/",
  propOrder = { "userName" }
)
public class ForgotPassword {

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
