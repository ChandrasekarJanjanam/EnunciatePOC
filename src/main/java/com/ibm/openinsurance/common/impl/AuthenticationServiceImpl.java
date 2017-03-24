package com.ibm.openinsurance.common.impl;

import java.util.ArrayList;
import java.util.List;

import javax.jws.WebService;
import javax.ws.rs.Consumes;
import javax.ws.rs.GET;
import javax.ws.rs.POST;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.QueryParam;


import com.ibm.openinsurance.common.api.AuthenticationService;
import com.ibm.openinsurance.domain.BodyShop;
import com.ibm.openinsurance.domain.TowingCompany;
import com.ibm.openinsurance.policies.api.ClaimService;

/**
 * The Class AuthenticationServiceImpl.
 */
@WebService(endpointInterface = "com.ibm.openinsurance.common.api.AuthenticationService")
@Path("/authentication")
public class AuthenticationServiceImpl implements AuthenticationService {

	
	public String login(String userName,
			String password) {
		// TODO Auto-generated method stub
		return null;
	}

	
	public String logout( String userName) {
		// TODO Auto-generated method stub
		return null;
	}

	
	public String forgotPassword(String userName) {
		// TODO Auto-generated method stub
		return null;
	}


}
