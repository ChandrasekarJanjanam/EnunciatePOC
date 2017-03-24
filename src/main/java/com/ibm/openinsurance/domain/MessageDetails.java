package com.ibm.openinsurance.domain;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlRootElement;

/**
 * The Class MessageDetails.
 */
@XmlRootElement
public class MessageDetails implements Serializable {

	
	/** The Constant serialVersionUID. */
	private static final long serialVersionUID = 1L;
	
	/** The message id. */
	private String messageId;
	
	/** The message detail. */
	private String messageDetail;
	/**
	 * @return the messageId
	 */
	public String getMessageId() {
		return messageId;
	}
	/**
	 * @param messageId the messageId to set
	 */
	public void setMessageId(String messageId) {
		this.messageId = messageId;
	}
	/**
	 * @return the messageDetail
	 */
	public String getMessageDetail() {
		return messageDetail;
	}
	/**
	 * @param messageDetail the messageDetail to set
	 */
	public void setMessageDetail(String messageDetail) {
		this.messageDetail = messageDetail;
	}
	
}
