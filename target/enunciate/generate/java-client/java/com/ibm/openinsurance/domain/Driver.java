/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.domain;

/**
 *  The Class Driver.
 */
@javax.xml.bind.annotation.XmlType (
  name = "driver",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "driver",
  namespace = ""
)
public class Driver implements java.io.Serializable {

  private java.lang.String _driverId;
  private java.lang.String _driverName;
  private java.lang.String _gender;
  private java.lang.String _driverPhoto;
  private java.util.Date _dateOfBirth;
  private java.lang.String _driverLicenseNumber;
  private java.lang.String _driverClass;
  private java.lang.String _address;
  private java.lang.String _eyeColor;
  private java.lang.String _height;
  private java.util.Date _dateOfIssue;
  private java.util.Date _expiryDate;
  private java.lang.String _licensePhoto;

  /**
   * the driverId
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "driverId",
    namespace = ""
  )
  public java.lang.String getDriverId() {
    return this._driverId;
  }

  /**
   * the driverId
   */
  public void setDriverId(java.lang.String _driverId) {
    this._driverId = _driverId;
  }

  /**
   * the driverName
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "driverName",
    namespace = ""
  )
  public java.lang.String getDriverName() {
    return this._driverName;
  }

  /**
   * the driverName
   */
  public void setDriverName(java.lang.String _driverName) {
    this._driverName = _driverName;
  }

  /**
   * the gender
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "gender",
    namespace = ""
  )
  public java.lang.String getGender() {
    return this._gender;
  }

  /**
   * the gender
   */
  public void setGender(java.lang.String _gender) {
    this._gender = _gender;
  }

  /**
   * the driverPhoto
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "driverPhoto",
    namespace = ""
  )
  public java.lang.String getDriverPhoto() {
    return this._driverPhoto;
  }

  /**
   * the driverPhoto
   */
  public void setDriverPhoto(java.lang.String _driverPhoto) {
    this._driverPhoto = _driverPhoto;
  }

  /**
   * the dateOfBirth
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "dateOfBirth",
    namespace = ""
  )
  public java.util.Date getDateOfBirth() {
    return this._dateOfBirth;
  }

  /**
   * the dateOfBirth
   */
  public void setDateOfBirth(java.util.Date _dateOfBirth) {
    this._dateOfBirth = _dateOfBirth;
  }

  /**
   * the driverLicenseNumber
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "driverLicenseNumber",
    namespace = ""
  )
  public java.lang.String getDriverLicenseNumber() {
    return this._driverLicenseNumber;
  }

  /**
   * the driverLicenseNumber
   */
  public void setDriverLicenseNumber(java.lang.String _driverLicenseNumber) {
    this._driverLicenseNumber = _driverLicenseNumber;
  }

  /**
   * the driverClass
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "driverClass",
    namespace = ""
  )
  public java.lang.String getDriverClass() {
    return this._driverClass;
  }

  /**
   * the driverClass
   */
  public void setDriverClass(java.lang.String _driverClass) {
    this._driverClass = _driverClass;
  }

  /**
   * the address
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "address",
    namespace = ""
  )
  public java.lang.String getAddress() {
    return this._address;
  }

  /**
   * the address
   */
  public void setAddress(java.lang.String _address) {
    this._address = _address;
  }

  /**
   * the eyeColor
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "eyeColor",
    namespace = ""
  )
  public java.lang.String getEyeColor() {
    return this._eyeColor;
  }

  /**
   * the eyeColor
   */
  public void setEyeColor(java.lang.String _eyeColor) {
    this._eyeColor = _eyeColor;
  }

  /**
   * the height
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "height",
    namespace = ""
  )
  public java.lang.String getHeight() {
    return this._height;
  }

  /**
   * the height
   */
  public void setHeight(java.lang.String _height) {
    this._height = _height;
  }

  /**
   * the dateOfIssue
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "dateOfIssue",
    namespace = ""
  )
  public java.util.Date getDateOfIssue() {
    return this._dateOfIssue;
  }

  /**
   * the dateOfIssue
   */
  public void setDateOfIssue(java.util.Date _dateOfIssue) {
    this._dateOfIssue = _dateOfIssue;
  }

  /**
   * the expiryDate
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "expiryDate",
    namespace = ""
  )
  public java.util.Date getExpiryDate() {
    return this._expiryDate;
  }

  /**
   * the expiryDate
   */
  public void setExpiryDate(java.util.Date _expiryDate) {
    this._expiryDate = _expiryDate;
  }

  /**
   * the licensePhoto
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "licensePhoto",
    namespace = ""
  )
  public java.lang.String getLicensePhoto() {
    return this._licensePhoto;
  }

  /**
   * the licensePhoto
   */
  public void setLicensePhoto(java.lang.String _licensePhoto) {
    this._licensePhoto = _licensePhoto;
  }

}
