/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.common.api.jaxws;

/**
 * Request bean for the getMessageDetails operation.
 */
@javax.xml.bind.annotation.XmlRootElement (
  name = "getMessageDetails",
  namespace = "http://api.common.openinsurance.ibm.com/"
)
@javax.xml.bind.annotation.XmlType (
  name = "getMessageDetails",
  namespace = "http://api.common.openinsurance.ibm.com/",
  propOrder = { "userId", "messageId" }
)
public class GetMessageDetails {

  private java.lang.String userId;
  private java.lang.String messageId;

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
   * the message id
   */
  public java.lang.String getMessageId() {
    return this.messageId;
  }

  /**
   * the message id
   */
  public void setMessageId(java.lang.String messageId) {
    this.messageId = messageId;
  }
}
