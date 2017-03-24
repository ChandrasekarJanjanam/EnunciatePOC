package com.ibm.openinsurance.domain;

import java.io.Serializable;
import java.util.Date;

import javax.xml.bind.annotation.XmlRootElement;


/**
 * The Class Billing.
 */
@XmlRootElement
public class Billing implements Serializable {

	/** The Constant serialVersionUID. */
	private static final long serialVersionUID = -2884896121528459286L;
	
	/** The policy id. */
	private String policyId;
	
	/** The policy balance. */
	private double policyBalance;
	
	/** The last payment date. */
	private Date lastPaymentDate;
	
	/** The amount balance. */
	private double amountBalance;
	
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
	 * Gets the policy balance.
	 *
	 * @return the policyBalance
	 */
	public double getPolicyBalance() {
		return policyBalance;
	}
	
	/**
	 * Sets the policy balance.
	 *
	 * @param policyBalance the policyBalance to set
	 */
	public void setPolicyBalance(double policyBalance) {
		this.policyBalance = policyBalance;
	}
	
	/**
	 * Gets the last payment date.
	 *
	 * @return the lastPaymentDate
	 */
	public Date getLastPaymentDate() {
		return lastPaymentDate;
	}
	
	/**
	 * Sets the last payment date.
	 *
	 * @param lastPaymentDate the lastPaymentDate to set
	 */
	public void setLastPaymentDate(Date lastPaymentDate) {
		this.lastPaymentDate = lastPaymentDate;
	}
	
	/**
	 * Gets the amount balance.
	 *
	 * @return the amountBalance
	 */
	public double getAmountBalance() {
		return amountBalance;
	}
	
	/**
	 * Sets the amount balance.
	 *
	 * @param amountBalance the amountBalance to set
	 */
	public void setAmountBalance(double amountBalance) {
		this.amountBalance = amountBalance;
	}

	
}
