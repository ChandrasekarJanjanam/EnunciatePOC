package com.ibm.openinsurance.domain;

import java.io.Serializable;

/**
 * The Class FaqDetail.
 */
public class FaqDetail implements Serializable {

	
	/** The Constant serialVersionUID. */
	private static final long serialVersionUID = 1L;
	
	/** The faq id. */
	private String faqId;
	
	/** The faq details. */
	private String faqDetails;
	
	/**
	 * Gets the faq id.
	 *
	 * @return the faqId
	 */
	public String getFaqId() {
		return faqId;
	}
	
	/**
	 * Sets the faq id.
	 *
	 * @param faqId the faqId to set
	 */
	public void setFaqId(String faqId) {
		this.faqId = faqId;
	}
	
	/**
	 * Gets the faq details.
	 *
	 * @return the faqDetails
	 */
	public String getFaqDetails() {
		return faqDetails;
	}
	
	/**
	 * Sets the faq details.
	 *
	 * @param faqDetails the faqDetails to set
	 */
	public void setFaqDetails(String faqDetails) {
		this.faqDetails = faqDetails;
	}

	
}
