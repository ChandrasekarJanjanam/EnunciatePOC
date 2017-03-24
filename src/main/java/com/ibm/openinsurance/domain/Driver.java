package com.ibm.openinsurance.domain;

import java.io.Serializable;
import java.util.Date;

import javax.xml.bind.annotation.XmlRootElement;


/**
 * The Class Driver.
 */
@XmlRootElement
public class Driver implements Serializable{

	/** The Constant serialVersionUID. */
	private static final long serialVersionUID = 1L;

	/** The driver id. */
	private String driverId;
	
	/** The driver name. */
	private String driverName;
	
	/** The gender. */
	private String gender;
	
	/** The driver photo. */
	private String driverPhoto;
	
	/** The date of birth. */
	private Date dateOfBirth;
	
	/** The driver license number. */
	private String driverLicenseNumber;
	
	/** The driver class. */
	private String driverClass;
	
	/** The address. */
	private String address;
	
	/** The eye color. */
	private String eyeColor;
	
	/** The height. */
	private String height;
	
	/** The date of issue. */
	private Date dateOfIssue;
	
	/** The expiry date. */
	private Date expiryDate;
	
	/** The license photo. */
	private String licensePhoto;
	
	/**
	 * Gets the driver id.
	 *
	 * @return the driverId
	 */
	public String getDriverId() {
		return driverId;
	}
	
	/**
	 * Sets the driver id.
	 *
	 * @param driverId the driverId to set
	 */
	public void setDriverId(String driverId) {
		this.driverId = driverId;
	}
	
	/**
	 * Gets the driver name.
	 *
	 * @return the driverName
	 */
	public String getDriverName() {
		return driverName;
	}
	
	/**
	 * Sets the driver name.
	 *
	 * @param driverName the driverName to set
	 */
	public void setDriverName(String driverName) {
		this.driverName = driverName;
	}
	
	/**
	 * Gets the gender.
	 *
	 * @return the gender
	 */
	public String getGender() {
		return gender;
	}
	
	/**
	 * Sets the gender.
	 *
	 * @param gender the gender to set
	 */
	public void setGender(String gender) {
		this.gender = gender;
	}
	
	/**
	 * Gets the driver photo.
	 *
	 * @return the driverPhoto
	 */
	public String getDriverPhoto() {
		return driverPhoto;
	}
	
	/**
	 * Sets the driver photo.
	 *
	 * @param driverPhoto the driverPhoto to set
	 */
	public void setDriverPhoto(String driverPhoto) {
		this.driverPhoto = driverPhoto;
	}
	
	/**
	 * Gets the date of birth.
	 *
	 * @return the dateOfBirth
	 */
	public Date getDateOfBirth() {
		return dateOfBirth;
	}
	
	/**
	 * Sets the date of birth.
	 *
	 * @param dateOfBirth the dateOfBirth to set
	 */
	public void setDateOfBirth(Date dateOfBirth) {
		this.dateOfBirth = dateOfBirth;
	}
	
	/**
	 * Gets the driver license number.
	 *
	 * @return the driverLicenseNumber
	 */
	public String getDriverLicenseNumber() {
		return driverLicenseNumber;
	}
	
	/**
	 * Sets the driver license number.
	 *
	 * @param driverLicenseNumber the driverLicenseNumber to set
	 */
	public void setDriverLicenseNumber(String driverLicenseNumber) {
		this.driverLicenseNumber = driverLicenseNumber;
	}
	
	/**
	 * Gets the driver class.
	 *
	 * @return the driverClass
	 */
	public String getDriverClass() {
		return driverClass;
	}
	
	/**
	 * Sets the driver class.
	 *
	 * @param driverClass the driverClass to set
	 */
	public void setDriverClass(String driverClass) {
		this.driverClass = driverClass;
	}
	
	/**
	 * Gets the address.
	 *
	 * @return the address
	 */
	public String getAddress() {
		return address;
	}
	
	/**
	 * Sets the address.
	 *
	 * @param address the address to set
	 */
	public void setAddress(String address) {
		this.address = address;
	}
	
	/**
	 * Gets the eye color.
	 *
	 * @return the eyeColor
	 */
	public String getEyeColor() {
		return eyeColor;
	}
	
	/**
	 * Sets the eye color.
	 *
	 * @param eyeColor the eyeColor to set
	 */
	public void setEyeColor(String eyeColor) {
		this.eyeColor = eyeColor;
	}
	
	/**
	 * Gets the height.
	 *
	 * @return the height
	 */
	public String getHeight() {
		return height;
	}
	
	/**
	 * Sets the height.
	 *
	 * @param height the height to set
	 */
	public void setHeight(String height) {
		this.height = height;
	}
	
	/**
	 * Gets the date of issue.
	 *
	 * @return the dateOfIssue
	 */
	public Date getDateOfIssue() {
		return dateOfIssue;
	}
	
	/**
	 * Sets the date of issue.
	 *
	 * @param dateOfIssue the dateOfIssue to set
	 */
	public void setDateOfIssue(Date dateOfIssue) {
		this.dateOfIssue = dateOfIssue;
	}
	
	/**
	 * Gets the expiry date.
	 *
	 * @return the expiryDate
	 */
	public Date getExpiryDate() {
		return expiryDate;
	}
	
	/**
	 * Sets the expiry date.
	 *
	 * @param expiryDate the expiryDate to set
	 */
	public void setExpiryDate(Date expiryDate) {
		this.expiryDate = expiryDate;
	}
	
	/**
	 * Gets the license photo.
	 *
	 * @return the licensePhoto
	 */
	public String getLicensePhoto() {
		return licensePhoto;
	}
	
	/**
	 * Sets the license photo.
	 *
	 * @param licensePhoto the licensePhoto to set
	 */
	public void setLicensePhoto(String licensePhoto) {
		this.licensePhoto = licensePhoto;
	}
	
	

}
