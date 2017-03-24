package com.ibm.openinsurance.domain;

import java.io.Serializable;
import java.util.Date;

import javax.xml.bind.annotation.XmlRootElement;


/**
 * The Class Policy.
 */
@XmlRootElement
public class Policy implements Serializable {
	
	/** The Constant serialVersionUID. */
	private static final long serialVersionUID = 5661547686557488642L;

	/** The policy id. */
	private String policyId;
	
	/** The policy type. */
	private String policyType;
	
	/** The policy number. */
	private String policyNumber;
	
	/** The policy effective date. */
	private Date policyEffectiveDate;
	
	/** The policy expiration date. */
	private Date policyExpirationDate;
	
	/** The policy premium. */
	private double policyPremium;
	
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
	 * Gets the policy type.
	 *
	 * @return the policyType
	 */
	public String getPolicyType() {
		return policyType;
	}
	
	/**
	 * Sets the policy type.
	 *
	 * @param policyType the policyType to set
	 */
	public void setPolicyType(String policyType) {
		this.policyType = policyType;
	}
	
	/**
	 * Gets the policy number.
	 *
	 * @return the policyNumber
	 */
	public String getPolicyNumber() {
		return policyNumber;
	}
	
	/**
	 * Sets the policy number.
	 *
	 * @param policyNumber the policyNumber to set
	 */
	public void setPolicyNumber(String policyNumber) {
		this.policyNumber = policyNumber;
	}
	
	/**
	 * Gets the policy effective date.
	 *
	 * @return the policyEffectiveDate
	 */
	public Date getPolicyEffectiveDate() {
		return policyEffectiveDate;
	}
	
	/**
	 * Sets the policy effective date.
	 *
	 * @param policyEffectiveDate the policyEffectiveDate to set
	 */
	public void setPolicyEffectiveDate(Date policyEffectiveDate) {
		this.policyEffectiveDate = policyEffectiveDate;
	}
	
	/**
	 * Gets the policy expiration date.
	 *
	 * @return the policyExpirationDate
	 */
	public Date getPolicyExpirationDate() {
		return policyExpirationDate;
	}
	
	/**
	 * Sets the policy expiration date.
	 *
	 * @param policyExpirationDate the policyExpirationDate to set
	 */
	public void setPolicyExpirationDate(Date policyExpirationDate) {
		this.policyExpirationDate = policyExpirationDate;
	}
	
	/**
	 * Gets the policy premium.
	 *
	 * @return the policyPremium
	 */
	public double getPolicyPremium() {
		return policyPremium;
	}
	
	/**
	 * Sets the policy premium.
	 *
	 * @param policyPremium the policyPremium to set
	 */
	public void setPolicyPremium(double policyPremium) {
		this.policyPremium = policyPremium;
	}
	

}
