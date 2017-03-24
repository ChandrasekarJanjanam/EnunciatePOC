package com.ibm.openinsurance.domain;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlRootElement;

// TODO: Auto-generated Javadoc
/**
 * The Class TowingCompany.
 */
@XmlRootElement
public class TowingCompany implements Serializable {

	/** The Constant serialVersionUID. */
	private static final long serialVersionUID = -5056651682562416205L;
	/** The Name. */
	private String Name;
	
	/** The address1. */
	private String address1;
	
	/** The address2. */
	private String address2;
	
	/** The city. */
	private String city;
	
	/** The province. */
	private String province;
	
	/** The pin code. */
	private String pinCode;
	
	/** The phone. */
	private int phone;
	
	/** The email id. */
	private String emailId;

	/**
	 * Gets the name.
	 *
	 * @return the name
	 */
	public String getName() {
		return Name;
	}

	/**
	 * Sets the name.
	 *
	 * @param name the name to set
	 */
	public void setName(String name) {
		Name = name;
	}

	/**
	 * Gets the address1.
	 *
	 * @return the address1
	 */
	public String getAddress1() {
		return address1;
	}

	/**
	 * Sets the address1.
	 *
	 * @param address1 the address1 to set
	 */
	public void setAddress1(String address1) {
		this.address1 = address1;
	}

	/**
	 * Gets the address2.
	 *
	 * @return the address2
	 */
	public String getAddress2() {
		return address2;
	}

	/**
	 * Sets the address2.
	 *
	 * @param address2 the address2 to set
	 */
	public void setAddress2(String address2) {
		this.address2 = address2;
	}

	/**
	 * Gets the city.
	 *
	 * @return the city
	 */
	public String getCity() {
		return city;
	}

	/**
	 * Sets the city.
	 *
	 * @param city the city to set
	 */
	public void setCity(String city) {
		this.city = city;
	}

	/**
	 * Gets the province.
	 *
	 * @return the province
	 */
	public String getProvince() {
		return province;
	}

	/**
	 * Sets the province.
	 *
	 * @param province the province to set
	 */
	public void setProvince(String province) {
		this.province = province;
	}

	/**
	 * Gets the pin code.
	 *
	 * @return the pinCode
	 */
	public String getPinCode() {
		return pinCode;
	}

	/**
	 * Sets the pin code.
	 *
	 * @param pinCode the pinCode to set
	 */
	public void setPinCode(String pinCode) {
		this.pinCode = pinCode;
	}

	/**
	 * Gets the phone.
	 *
	 * @return the phone
	 */
	public int getPhone() {
		return phone;
	}

	/**
	 * Sets the phone.
	 *
	 * @param phone the phone to set
	 */
	public void setPhone(int phone) {
		this.phone = phone;
	}

	/**
	 * Gets the email id.
	 *
	 * @return the emailId
	 */
	public String getEmailId() {
		return emailId;
	}

	/**
	 * Sets the email id.
	 *
	 * @param emailId the emailId to set
	 */
	public void setEmailId(String emailId) {
		this.emailId = emailId;
	}
	
	
}
