package com.ibm.openinsurance.domain;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlRootElement;


/**
 * The Class Vehicle.
 */
@XmlRootElement
public class Vehicle implements Serializable {


	/** The Constant serialVersionUID. */
	private static final long serialVersionUID = 1L;

	/** The vehicle id. */
	private String vehicleId;
	
	/** The make. */
	private String make;
	
	/** The model. */
	private String model;
	
	/** The year. */
	private int year;
	
	/** The vin. */
	private String vin;
	
	/** The license plate. */
	private String licensePlate;
	
	/** The vehicle photo. */
	private String vehiclePhoto;
	
	/**
	 * Gets the vehicle id.
	 *
	 * @return the vehicleId
	 */
	public String getVehicleId() {
		return vehicleId;
	}
	
	/**
	 * Sets the vehicle id.
	 *
	 * @param vehicleId the vehicleId to set
	 */
	public void setVehicleId(String vehicleId) {
		this.vehicleId = vehicleId;
	}
	
	/**
	 * Gets the make.
	 *
	 * @return the make
	 */
	public String getMake() {
		return make;
	}
	
	/**
	 * Sets the make.
	 *
	 * @param make the make to set
	 */
	public void setMake(String make) {
		this.make = make;
	}
	
	/**
	 * Gets the model.
	 *
	 * @return the model
	 */
	public String getModel() {
		return model;
	}
	
	/**
	 * Sets the model.
	 *
	 * @param model the model to set
	 */
	public void setModel(String model) {
		this.model = model;
	}
	
	/**
	 * Gets the year.
	 *
	 * @return the year
	 */
	public int getYear() {
		return year;
	}
	
	/**
	 * Sets the year.
	 *
	 * @param year the year to set
	 */
	public void setYear(int year) {
		this.year = year;
	}
	
	/**
	 * Gets the vin.
	 *
	 * @return the vin
	 */
	public String getVin() {
		return vin;
	}
	
	/**
	 * Sets the vin.
	 *
	 * @param vin the vin to set
	 */
	public void setVin(String vin) {
		this.vin = vin;
	}
	
	/**
	 * Gets the license plate.
	 *
	 * @return the licensePlate
	 */
	public String getLicensePlate() {
		return licensePlate;
	}
	
	/**
	 * Sets the license plate.
	 *
	 * @param licensePlate the licensePlate to set
	 */
	public void setLicensePlate(String licensePlate) {
		this.licensePlate = licensePlate;
	}
	
	/**
	 * Gets the vehicle photo.
	 *
	 * @return the vehiclePhoto
	 */
	public String getVehiclePhoto() {
		return vehiclePhoto;
	}
	
	/**
	 * Sets the vehicle photo.
	 *
	 * @param vehiclePhoto the vehiclePhoto to set
	 */
	public void setVehiclePhoto(String vehiclePhoto) {
		this.vehiclePhoto = vehiclePhoto;
	}
	
	

}
