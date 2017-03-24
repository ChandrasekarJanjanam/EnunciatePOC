package com.ibm.openinsurance.domain;

import java.io.Serializable;
import java.util.Date;

import javax.xml.bind.annotation.XmlRootElement;


/**
 * The Class Payment.
 */
@XmlRootElement
public class Payment implements Serializable{

	/** The Constant serialVersionUID. */
	private static final long serialVersionUID = 4947333228397486028L;
	
	/** The payment id. */
	private String paymentId;
	
	/** The policy id. */
	private String policyId;
	
	/** The payment amount. */
	private double paymentAmount;
	
	/** The payment type. */
	private String paymentType;
	
	/** The payment date. */
	private Date paymentDate;
	
	/** The routing number. */
	private String routingNumber;
	
	/** The checking account number. */
	private String checkingAccountNumber;
	
	/** The check photograph. */
	private String checkPhotograph;
	
	/** The credit card number. */
	private String creditCardNumber;
	
	/** The credit card name. */
	private String creditCardName;
	
	/** The CVS code. */
	private String CVSCode;
	
	/** The credit card expiry date. */
	private Date creditCardExpiryDate;
	
	/** The debit card number. */
	private String debitCardNumber;
	
	/** The debit card name. */
	private String debitCardName;
	
	/** The debit card pin. */
	private String debitCardPin;
	
	/** The debit card expiry date. */
	private Date debitCardExpiryDate;
	
	/**
	 * Gets the payment id.
	 *
	 * @return the paymentId
	 */
	public String getPaymentId() {
		return paymentId;
	}
	
	/**
	 * Sets the payment id.
	 *
	 * @param paymentId the paymentId to set
	 */
	public void setPaymentId(String paymentId) {
		this.paymentId = paymentId;
	}
	
	/**
	 * Gets the policy id.
	 *
	 * @return the policyId
	 */
	public String getPolicyId() {
		return policyId;
	}
	
	/**
	 * Sets the policy id.
	 *
	 * @param policyId the policyId to set
	 */
	public void setPolicyId(String policyId) {
		this.policyId = policyId;
	}
	
	/**
	 * Gets the payment amount.
	 *
	 * @return the paymentAmount
	 */
	public double getPaymentAmount() {
		return paymentAmount;
	}
	
	/**
	 * Sets the payment amount.
	 *
	 * @param paymentAmount the paymentAmount to set
	 */
	public void setPaymentAmount(double paymentAmount) {
		this.paymentAmount = paymentAmount;
	}
	
	/**
	 * Gets the payment type.
	 *
	 * @return the paymentType
	 */
	public String getPaymentType() {
		return paymentType;
	}
	
	/**
	 * Sets the payment type.
	 *
	 * @param paymentType the paymentType to set
	 */
	public void setPaymentType(String paymentType) {
		this.paymentType = paymentType;
	}
	
	/**
	 * Gets the payment date.
	 *
	 * @return the paymentDate
	 */
	public Date getPaymentDate() {
		return paymentDate;
	}
	
	/**
	 * Sets the payment date.
	 *
	 * @param paymentDate the paymentDate to set
	 */
	public void setPaymentDate(Date paymentDate) {
		this.paymentDate = paymentDate;
	}
	
	/**
	 * Gets the routing number.
	 *
	 * @return the routingNumber
	 */
	public String getRoutingNumber() {
		return routingNumber;
	}
	
	/**
	 * Sets the routing number.
	 *
	 * @param routingNumber the routingNumber to set
	 */
	public void setRoutingNumber(String routingNumber) {
		this.routingNumber = routingNumber;
	}
	
	/**
	 * Gets the checking account number.
	 *
	 * @return the checkingAccountNumber
	 */
	public String getCheckingAccountNumber() {
		return checkingAccountNumber;
	}
	
	/**
	 * Sets the checking account number.
	 *
	 * @param checkingAccountNumber the checkingAccountNumber to set
	 */
	public void setCheckingAccountNumber(String checkingAccountNumber) {
		this.checkingAccountNumber = checkingAccountNumber;
	}
	
	/**
	 * Gets the check photograph.
	 *
	 * @return the checkPhotograph
	 */
	public String getCheckPhotograph() {
		return checkPhotograph;
	}
	
	/**
	 * Sets the check photograph.
	 *
	 * @param checkPhotograph the checkPhotograph to set
	 */
	public void setCheckPhotograph(String checkPhotograph) {
		this.checkPhotograph = checkPhotograph;
	}
	
	/**
	 * Gets the credit card number.
	 *
	 * @return the creditCardNumber
	 */
	public String getCreditCardNumber() {
		return creditCardNumber;
	}
	
	/**
	 * Sets the credit card number.
	 *
	 * @param creditCardNumber the creditCardNumber to set
	 */
	public void setCreditCardNumber(String creditCardNumber) {
		this.creditCardNumber = creditCardNumber;
	}
	
	/**
	 * Gets the credit card name.
	 *
	 * @return the creditCardName
	 */
	public String getCreditCardName() {
		return creditCardName;
	}
	
	/**
	 * Sets the credit card name.
	 *
	 * @param creditCardName the creditCardName to set
	 */
	public void setCreditCardName(String creditCardName) {
		this.creditCardName = creditCardName;
	}
	
	/**
	 * Gets the cVS code.
	 *
	 * @return the cVSCode
	 */
	public String getCVSCode() {
		return CVSCode;
	}
	
	/**
	 * Sets the cVS code.
	 *
	 * @param cVSCode the cVSCode to set
	 */
	public void setCVSCode(String cVSCode) {
		CVSCode = cVSCode;
	}
	
	/**
	 * Gets the credit card expiry date.
	 *
	 * @return the creditCardExpiryDate
	 */
	public Date getCreditCardExpiryDate() {
		return creditCardExpiryDate;
	}
	
	/**
	 * Sets the credit card expiry date.
	 *
	 * @param creditCardExpiryDate the creditCardExpiryDate to set
	 */
	public void setCreditCardExpiryDate(Date creditCardExpiryDate) {
		this.creditCardExpiryDate = creditCardExpiryDate;
	}
	
	/**
	 * Gets the debit card number.
	 *
	 * @return the debitCardNumber
	 */
	public String getDebitCardNumber() {
		return debitCardNumber;
	}
	
	/**
	 * Sets the debit card number.
	 *
	 * @param debitCardNumber the debitCardNumber to set
	 */
	public void setDebitCardNumber(String debitCardNumber) {
		this.debitCardNumber = debitCardNumber;
	}
	
	/**
	 * Gets the debit card name.
	 *
	 * @return the debitCardName
	 */
	public String getDebitCardName() {
		return debitCardName;
	}
	
	/**
	 * Sets the debit card name.
	 *
	 * @param debitCardName the debitCardName to set
	 */
	public void setDebitCardName(String debitCardName) {
		this.debitCardName = debitCardName;
	}
	
	/**
	 * Gets the debit card pin.
	 *
	 * @return the debitCardPin
	 */
	public String getDebitCardPin() {
		return debitCardPin;
	}
	
	/**
	 * Sets the debit card pin.
	 *
	 * @param debitCardPin the debitCardPin to set
	 */
	public void setDebitCardPin(String debitCardPin) {
		this.debitCardPin = debitCardPin;
	}
	
	/**
	 * Gets the debit card expiry date.
	 *
	 * @return the debitCardExpiryDate
	 */
	public Date getDebitCardExpiryDate() {
		return debitCardExpiryDate;
	}
	
	/**
	 * Sets the debit card expiry date.
	 *
	 * @param debitCardExpiryDate the debitCardExpiryDate to set
	 */
	public void setDebitCardExpiryDate(Date debitCardExpiryDate) {
		this.debitCardExpiryDate = debitCardExpiryDate;
	}
	
	
}
