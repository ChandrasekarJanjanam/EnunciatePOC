/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.domain.json;

import org.codehaus.jackson.annotate.*;

/**
 *  The Class Policy.
 */
public class Policy implements java.io.Serializable {

  @JsonIgnore
  private java.lang.String _policyId;
  @JsonIgnore
  private java.lang.String _policyType;
  @JsonIgnore
  private java.lang.String _policyNumber;
  @JsonIgnore
  private java.util.Date _policyEffectiveDate;
  @JsonIgnore
  private java.util.Date _policyExpirationDate;
  @JsonIgnore
  private double _policyPremium;

  /**
   * the policyId
   */
  @JsonProperty("policyId")
  public java.lang.String getPolicyId() {
    return this._policyId;
  }

  /**
   * the policyId
   */
  @JsonProperty("policyId")
  public void setPolicyId(java.lang.String _policyId) {
    this._policyId = _policyId;
  }

  /**
   * the policyType
   */
  @JsonProperty("policyType")
  public java.lang.String getPolicyType() {
    return this._policyType;
  }

  /**
   * the policyType
   */
  @JsonProperty("policyType")
  public void setPolicyType(java.lang.String _policyType) {
    this._policyType = _policyType;
  }

  /**
   * the policyNumber
   */
  @JsonProperty("policyNumber")
  public java.lang.String getPolicyNumber() {
    return this._policyNumber;
  }

  /**
   * the policyNumber
   */
  @JsonProperty("policyNumber")
  public void setPolicyNumber(java.lang.String _policyNumber) {
    this._policyNumber = _policyNumber;
  }

  /**
   * the policyEffectiveDate
   */
  @JsonProperty("policyEffectiveDate")
  public java.util.Date getPolicyEffectiveDate() {
    return this._policyEffectiveDate;
  }

  /**
   * the policyEffectiveDate
   */
  @JsonProperty("policyEffectiveDate")
  public void setPolicyEffectiveDate(java.util.Date _policyEffectiveDate) {
    this._policyEffectiveDate = _policyEffectiveDate;
  }

  /**
   * the policyExpirationDate
   */
  @JsonProperty("policyExpirationDate")
  public java.util.Date getPolicyExpirationDate() {
    return this._policyExpirationDate;
  }

  /**
   * the policyExpirationDate
   */
  @JsonProperty("policyExpirationDate")
  public void setPolicyExpirationDate(java.util.Date _policyExpirationDate) {
    this._policyExpirationDate = _policyExpirationDate;
  }

  /**
   * the policyPremium
   */
  @JsonProperty("policyPremium")
  public double getPolicyPremium() {
    return this._policyPremium;
  }

  /**
   * the policyPremium
   */
  @JsonProperty("policyPremium")
  public void setPolicyPremium(double _policyPremium) {
    this._policyPremium = _policyPremium;
  }
}
