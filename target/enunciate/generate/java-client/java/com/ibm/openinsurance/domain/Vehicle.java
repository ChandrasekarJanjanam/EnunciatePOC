/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.domain;

/**
 *  The Class Vehicle.
 */
@javax.xml.bind.annotation.XmlType (
  name = "vehicle",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "vehicle",
  namespace = ""
)
public class Vehicle implements java.io.Serializable {

  private java.lang.String _vehicleId;
  private java.lang.String _make;
  private java.lang.String _model;
  private int _year;
  private java.lang.String _vin;
  private java.lang.String _licensePlate;
  private java.lang.String _vehiclePhoto;

  /**
   * the vehicleId
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "vehicleId",
    namespace = ""
  )
  public java.lang.String getVehicleId() {
    return this._vehicleId;
  }

  /**
   * the vehicleId
   */
  public void setVehicleId(java.lang.String _vehicleId) {
    this._vehicleId = _vehicleId;
  }

  /**
   * the make
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "make",
    namespace = ""
  )
  public java.lang.String getMake() {
    return this._make;
  }

  /**
   * the make
   */
  public void setMake(java.lang.String _make) {
    this._make = _make;
  }

  /**
   * the model
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "model",
    namespace = ""
  )
  public java.lang.String getModel() {
    return this._model;
  }

  /**
   * the model
   */
  public void setModel(java.lang.String _model) {
    this._model = _model;
  }

  /**
   * the year
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "year",
    namespace = ""
  )
  public int getYear() {
    return this._year;
  }

  /**
   * the year
   */
  public void setYear(int _year) {
    this._year = _year;
  }

  /**
   * the vin
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "vin",
    namespace = ""
  )
  public java.lang.String getVin() {
    return this._vin;
  }

  /**
   * the vin
   */
  public void setVin(java.lang.String _vin) {
    this._vin = _vin;
  }

  /**
   * the licensePlate
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "licensePlate",
    namespace = ""
  )
  public java.lang.String getLicensePlate() {
    return this._licensePlate;
  }

  /**
   * the licensePlate
   */
  public void setLicensePlate(java.lang.String _licensePlate) {
    this._licensePlate = _licensePlate;
  }

  /**
   * the vehiclePhoto
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "vehiclePhoto",
    namespace = ""
  )
  public java.lang.String getVehiclePhoto() {
    return this._vehiclePhoto;
  }

  /**
   * the vehiclePhoto
   */
  public void setVehiclePhoto(java.lang.String _vehiclePhoto) {
    this._vehiclePhoto = _vehiclePhoto;
  }

}
