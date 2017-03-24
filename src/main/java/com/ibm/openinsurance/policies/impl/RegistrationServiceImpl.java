package com.ibm.openinsurance.policies.impl;

import javax.jws.WebService;
import javax.ws.rs.Path;

import com.ibm.openinsurance.policies.api.RegistrationService;

/**
 * The Class RegistrationServiceImpl.
 */
@WebService(endpointInterface = "com.ibm.openinsurance.policies.api.RegistrationService")
@Path("/registration")
public class RegistrationServiceImpl implements RegistrationService {

	
	public String doRegistration(String policyId,
			 String name, String email,
			 String phone) {
		// TODO Auto-generated method stub
		return "success";
	}

}
