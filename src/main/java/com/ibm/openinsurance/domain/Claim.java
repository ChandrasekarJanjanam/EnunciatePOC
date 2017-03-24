package com.ibm.openinsurance.domain;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlRootElement;


/**
 * The Class Claim.
 */
@XmlRootElement
public class Claim implements Serializable {

	
	/** The Constant serialVersionUID. */
	private static final long serialVersionUID = -666610704023987395L;
	
	/** The claim id. */
	private String claimId;
	
	/** The claim description. */
	private String claimDescription;
	
	/**
	 * Gets the claim id.
	 *
	 * @return the claimId
	 */
	public String getClaimId() {
		return claimId;
	}
	
	/**
	 * Sets the claim id.
	 *
	 * @param claimId the claimId to set
	 */
	public void setClaimId(String claimId) {
		this.claimId = claimId;
	}
	
	/**
	 * Gets the claim description.
	 *
	 * @return the claimDescription
	 */
	public String getClaimDescription() {
		return claimDescription;
	}
	
	/**
	 * Sets the claim description.
	 *
	 * @param claimDescription the claimDescription to set
	 */
	public void setClaimDescription(String claimDescription) {
		this.claimDescription = claimDescription;
	}
	
	
	
	

}
