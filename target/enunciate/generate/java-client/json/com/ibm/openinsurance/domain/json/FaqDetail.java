/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.domain.json;

import org.codehaus.jackson.annotate.*;

/**
 *  The Class FaqDetail.
 */
public class FaqDetail implements java.io.Serializable {

  @JsonIgnore
  private java.lang.String _faqId;
  @JsonIgnore
  private java.lang.String _faqDetails;

  /**
   * the faqId
   */
  @JsonProperty("faqId")
  public java.lang.String getFaqId() {
    return this._faqId;
  }

  /**
   * the faqId
   */
  @JsonProperty("faqId")
  public void setFaqId(java.lang.String _faqId) {
    this._faqId = _faqId;
  }

  /**
   * the faqDetails
   */
  @JsonProperty("faqDetails")
  public java.lang.String getFaqDetails() {
    return this._faqDetails;
  }

  /**
   * the faqDetails
   */
  @JsonProperty("faqDetails")
  public void setFaqDetails(java.lang.String _faqDetails) {
    this._faqDetails = _faqDetails;
  }
}