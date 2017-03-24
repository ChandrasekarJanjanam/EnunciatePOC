/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.domain.json;

import org.codehaus.jackson.annotate.*;

/**
 *  The Class Payment.
 */
public class Payment implements java.io.Serializable {

  @JsonIgnore
  private java.lang.String _paymentId;
  @JsonIgnore
  private java.lang.String _policyId;
  @JsonIgnore
  private double _paymentAmount;
  @JsonIgnore
  private java.lang.String _paymentType;
  @JsonIgnore
  private java.util.Date _paymentDate;
  @JsonIgnore
  private java.lang.String _routingNumber;
  @JsonIgnore
  private java.lang.String _checkingAccountNumber;
  @JsonIgnore
  private java.lang.String _checkPhotograph;
  @JsonIgnore
  private java.lang.String _creditCardNumber;
  @JsonIgnore
  private java.lang.String _creditCardName;
  @JsonIgnore
  private java.lang.String _CVSCode;
  @JsonIgnore
  private java.util.Date _creditCardExpiryDate;
  @JsonIgnore
  private java.lang.String _debitCardNumber;
  @JsonIgnore
  private java.lang.String _debitCardName;
  @JsonIgnore
  private java.lang.String _debitCardPin;
  @JsonIgnore
  private java.util.Date _debitCardExpiryDate;

  /**
   * the paymentId
   */
  @JsonProperty("paymentId")
  public java.lang.String getPaymentId() {
    return this._paymentId;
  }

  /**
   * the paymentId
   */
  @JsonProperty("paymentId")
  public void setPaymentId(java.lang.String _paymentId) {
    this._paymentId = _paymentId;
  }

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
   * the paymentAmount
   */
  @JsonProperty("paymentAmount")
  public double getPaymentAmount() {
    return this._paymentAmount;
  }

  /**
   * the paymentAmount
   */
  @JsonProperty("paymentAmount")
  public void setPaymentAmount(double _paymentAmount) {
    this._paymentAmount = _paymentAmount;
  }

  /**
   * the paymentType
   */
  @JsonProperty("paymentType")
  public java.lang.String getPaymentType() {
    return this._paymentType;
  }

  /**
   * the paymentType
   */
  @JsonProperty("paymentType")
  public void setPaymentType(java.lang.String _paymentType) {
    this._paymentType = _paymentType;
  }

  /**
   * the paymentDate
   */
  @JsonProperty("paymentDate")
  public java.util.Date getPaymentDate() {
    return this._paymentDate;
  }

  /**
   * the paymentDate
   */
  @JsonProperty("paymentDate")
  public void setPaymentDate(java.util.Date _paymentDate) {
    this._paymentDate = _paymentDate;
  }

  /**
   * the routingNumber
   */
  @JsonProperty("routingNumber")
  public java.lang.String getRoutingNumber() {
    return this._routingNumber;
  }

  /**
   * the routingNumber
   */
  @JsonProperty("routingNumber")
  public void setRoutingNumber(java.lang.String _routingNumber) {
    this._routingNumber = _routingNumber;
  }

  /**
   * the checkingAccountNumber
   */
  @JsonProperty("checkingAccountNumber")
  public java.lang.String getCheckingAccountNumber() {
    return this._checkingAccountNumber;
  }

  /**
   * the checkingAccountNumber
   */
  @JsonProperty("checkingAccountNumber")
  public void setCheckingAccountNumber(java.lang.String _checkingAccountNumber) {
    this._checkingAccountNumber = _checkingAccountNumber;
  }

  /**
   * the checkPhotograph
   */
  @JsonProperty("checkPhotograph")
  public java.lang.String getCheckPhotograph() {
    return this._checkPhotograph;
  }

  /**
   * the checkPhotograph
   */
  @JsonProperty("checkPhotograph")
  public void setCheckPhotograph(java.lang.String _checkPhotograph) {
    this._checkPhotograph = _checkPhotograph;
  }

  /**
   * the creditCardNumber
   */
  @JsonProperty("creditCardNumber")
  public java.lang.String getCreditCardNumber() {
    return this._creditCardNumber;
  }

  /**
   * the creditCardNumber
   */
  @JsonProperty("creditCardNumber")
  public void setCreditCardNumber(java.lang.String _creditCardNumber) {
    this._creditCardNumber = _creditCardNumber;
  }

  /**
   * the creditCardName
   */
  @JsonProperty("creditCardName")
  public java.lang.String getCreditCardName() {
    return this._creditCardName;
  }

  /**
   * the creditCardName
   */
  @JsonProperty("creditCardName")
  public void setCreditCardName(java.lang.String _creditCardName) {
    this._creditCardName = _creditCardName;
  }

  /**
   * the cVSCode
   */
  @JsonProperty("CVSCode")
  public java.lang.String getCVSCode() {
    return this._CVSCode;
  }

  /**
   * the cVSCode
   */
  @JsonProperty("CVSCode")
  public void setCVSCode(java.lang.String _CVSCode) {
    this._CVSCode = _CVSCode;
  }

  /**
   * the creditCardExpiryDate
   */
  @JsonProperty("creditCardExpiryDate")
  public java.util.Date getCreditCardExpiryDate() {
    return this._creditCardExpiryDate;
  }

  /**
   * the creditCardExpiryDate
   */
  @JsonProperty("creditCardExpiryDate")
  public void setCreditCardExpiryDate(java.util.Date _creditCardExpiryDate) {
    this._creditCardExpiryDate = _creditCardExpiryDate;
  }

  /**
   * the debitCardNumber
   */
  @JsonProperty("debitCardNumber")
  public java.lang.String getDebitCardNumber() {
    return this._debitCardNumber;
  }

  /**
   * the debitCardNumber
   */
  @JsonProperty("debitCardNumber")
  public void setDebitCardNumber(java.lang.String _debitCardNumber) {
    this._debitCardNumber = _debitCardNumber;
  }

  /**
   * the debitCardName
   */
  @JsonProperty("debitCardName")
  public java.lang.String getDebitCardName() {
    return this._debitCardName;
  }

  /**
   * the debitCardName
   */
  @JsonProperty("debitCardName")
  public void setDebitCardName(java.lang.String _debitCardName) {
    this._debitCardName = _debitCardName;
  }

  /**
   * the debitCardPin
   */
  @JsonProperty("debitCardPin")
  public java.lang.String getDebitCardPin() {
    return this._debitCardPin;
  }

  /**
   * the debitCardPin
   */
  @JsonProperty("debitCardPin")
  public void setDebitCardPin(java.lang.String _debitCardPin) {
    this._debitCardPin = _debitCardPin;
  }

  /**
   * the debitCardExpiryDate
   */
  @JsonProperty("debitCardExpiryDate")
  public java.util.Date getDebitCardExpiryDate() {
    return this._debitCardExpiryDate;
  }

  /**
   * the debitCardExpiryDate
   */
  @JsonProperty("debitCardExpiryDate")
  public void setDebitCardExpiryDate(java.util.Date _debitCardExpiryDate) {
    this._debitCardExpiryDate = _debitCardExpiryDate;
  }
}
