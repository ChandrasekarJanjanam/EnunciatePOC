package com.ibm.openinsurance.policies.impl;

import java.util.ArrayList;
import java.util.List;

import javax.jws.WebService;
import javax.ws.rs.Path;

import com.ibm.openinsurance.domain.Driver;
import com.ibm.openinsurance.policies.api.DriverService;

/**
 * The Class DriverServiceImpl.
 */
@WebService(endpointInterface = "com.ibm.openinsurance.policies.api.DriverService")
@Path("/driver")
public class DriverServiceImpl implements DriverService {

	
	public List<Driver> getAllDrivers(String policyId) {
		List<Driver> allDrivers = new ArrayList<Driver>();
		return allDrivers;
	}

	public Driver getDriverDetails(String policyId, String driverId) {
		// TODO Auto-generated method stub
		return new Driver();
	}

	public String storeDriverDetails(String policyId, Driver driver) {
		// TODO Auto-generated method stub
		return "inserted";
	}

	public String updateDriverDetails(String policyId, String driverId) {
		// TODO Auto-generated method stub
		return "updated";
	}

	public String deleteDriverDetails(String policyId, String driverId) {
		// TODO Auto-generated method stub
		return "deleted";
	}

}
