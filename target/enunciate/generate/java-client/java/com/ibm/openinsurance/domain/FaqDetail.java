/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.domain;

/**
 *  The Class FaqDetail.
 */
@javax.xml.bind.annotation.XmlType (
  name = "faqDetail",
  namespace = ""
)
public class FaqDetail implements java.io.Serializable {

  private java.lang.String _faqId;
  private java.lang.String _faqDetails;

  /**
   * the faqId
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "faqId",
    namespace = ""
  )
  public java.lang.String getFaqId() {
    return this._faqId;
  }

  /**
   * the faqId
   */
  public void setFaqId(java.lang.String _faqId) {
    this._faqId = _faqId;
  }

  /**
   * the faqDetails
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "faqDetails",
    namespace = ""
  )
  public java.lang.String getFaqDetails() {
    return this._faqDetails;
  }

  /**
   * the faqDetails
   */
  public void setFaqDetails(java.lang.String _faqDetails) {
    this._faqDetails = _faqDetails;
  }

}
