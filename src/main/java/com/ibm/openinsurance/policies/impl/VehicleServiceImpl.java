/*
 * 
 */
package com.ibm.openinsurance.policies.impl;

import java.util.ArrayList;
import java.util.List;

import javax.jws.WebService;
import javax.ws.rs.Path;

import com.ibm.openinsurance.domain.Vehicle;
import com.ibm.openinsurance.policies.api.VehicleService;


/**
 * The Class VehicleServiceImpl.
 */
@WebService(endpointInterface = "com.ibm.openinsurance.policies.api.VehicleService")
@Path("/vehicle")
public class VehicleServiceImpl implements VehicleService {

	
	public List<Vehicle> getAllVehicles(String policyId) {
		List<Vehicle> allVehicles = new ArrayList<Vehicle>();
		return allVehicles;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see
	 * com.ibm.openinsurance.api.VehicleService#getVehicleDetails(java.lang.
	 * String, java.lang.String)
	 */
	public Vehicle getVehicleDetails(String policyId, String vehicleId) {

		return new Vehicle();
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see
	 * com.ibm.openinsurance.api.VehicleService#storeVehicleDetails(java.lang
	 * .String, com.ibm.openinsurance.domain.Vehicle)
	 */
	public String storeVehicleDetails(String policyId, Vehicle vehicle) {

		return "inserted";
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see
	 * com.ibm.openinsurance.api.VehicleService#updateVehicleDetails(java.lang
	 * .String, java.lang.String)
	 */
	public String updateVehicleDetails(String policyId, String vehicleId) {

		return "updated";
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see
	 * com.ibm.openinsurance.api.VehicleService#deleteVehicleDetails(java.lang
	 * .String, java.lang.String)
	 */
	public String deleteVehicleDetails(String policyId, String vehicleId) {

		return "deleted";
	}

}
