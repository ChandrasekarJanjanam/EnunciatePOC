package com.ibm.openinsurance.domain;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlRootElement;

// TODO: Auto-generated Javadoc
/**
 * The Class Coverage.
 */
@XmlRootElement
public class Coverage implements Serializable{

	/** The Constant serialVersionUID. */
	private static final long serialVersionUID = 1L;

	/** The coverage id. */
	private String coverageId;
	
	/** The coverage type id. */
	private String coverageTypeId;
	
	/** The coverage amount. */
	private String coverageAmount;
	
	/** The coverage limit. */
	private String coverageLimit;
	
	/** The deductible. */
	private String deductible;
	
	/**
	 * Gets the coverage id.
	 *
	 * @return the coverageId
	 */
	public String getCoverageId() {
		return coverageId;
	}
	
	/**
	 * Sets the coverage id.
	 *
	 * @param coverageId the coverageId to set
	 */
	public void setCoverageId(String coverageId) {
		this.coverageId = coverageId;
	}
	
	/**
	 * Gets the coverage type id.
	 *
	 * @return the coverageTypeId
	 */
	public String getCoverageTypeId() {
		return coverageTypeId;
	}
	
	/**
	 * Sets the coverage type id.
	 *
	 * @param coverageTypeId the coverageTypeId to set
	 */
	public void setCoverageTypeId(String coverageTypeId) {
		this.coverageTypeId = coverageTypeId;
	}
	
	/**
	 * Gets the coverage amount.
	 *
	 * @return the coverageAmount
	 */
	public String getCoverageAmount() {
		return coverageAmount;
	}
	
	/**
	 * Sets the coverage amount.
	 *
	 * @param coverageAmount the coverageAmount to set
	 */
	public void setCoverageAmount(String coverageAmount) {
		this.coverageAmount = coverageAmount;
	}
	
	/**
	 * Gets the coverage limit.
	 *
	 * @return the coverageLimit
	 */
	public String getCoverageLimit() {
		return coverageLimit;
	}
	
	/**
	 * Sets the coverage limit.
	 *
	 * @param coverageLimit the coverageLimit to set
	 */
	public void setCoverageLimit(String coverageLimit) {
		this.coverageLimit = coverageLimit;
	}
	
	/**
	 * Gets the deductible.
	 *
	 * @return the deductible
	 */
	public String getDeductible() {
		return deductible;
	}
	
	/**
	 * Sets the deductible.
	 *
	 * @param deductible the deductible to set
	 */
	public void setDeductible(String deductible) {
		this.deductible = deductible;
	}
	 	
	
}
