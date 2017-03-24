package com.ibm.openinsurance.domain;

import java.io.Serializable;

/**
 * The Class PaymentResponse.
 */
public class PaymentResponse implements Serializable {

	/** The Constant serialVersionUID. */
	private static final long serialVersionUID = -4688008117957615631L;
	
	/** The reponse status. */
	private String reponseStatus;
	
	/** The response description. */
	private String responseDescription;
	
	/**
	 * Gets the reponse status.
	 *
	 * @return the reponseStatus
	 */
	public String getReponseStatus() {
		return reponseStatus;
	}
	
	/**
	 * Sets the reponse status.
	 *
	 * @param reponseStatus the reponseStatus to set
	 */
	public void setReponseStatus(String reponseStatus) {
		this.reponseStatus = reponseStatus;
	}
	
	/**
	 * Gets the response description.
	 *
	 * @return the responseDescription
	 */
	public String getResponseDescription() {
		return responseDescription;
	}
	
	/**
	 * Sets the response description.
	 *
	 * @param responseDescription the responseDescription to set
	 */
	public void setResponseDescription(String responseDescription) {
		this.responseDescription = responseDescription;
	}
	

}
