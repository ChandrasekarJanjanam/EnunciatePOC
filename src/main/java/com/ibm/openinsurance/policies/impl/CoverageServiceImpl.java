package com.ibm.openinsurance.policies.impl;

import java.util.ArrayList;
import java.util.List;

import javax.jws.WebService;
import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.QueryParam;

import com.ibm.openinsurance.domain.Coverage;
import com.ibm.openinsurance.domain.Policy;
import com.ibm.openinsurance.domain.TowingCompany;
import com.ibm.openinsurance.policies.api.CoverageService;

/**
 * The Class CoverageServiceImpl.
 */
@WebService(endpointInterface = "com.ibm.openinsurance.policies.api.CoverageService")
@Path("/coverage")
public class CoverageServiceImpl implements CoverageService {

	
	public Coverage getCoverageDetails(String policyId,
			String userId) {
		
		return new Coverage();
	}

	
	public List<Policy> getAllPolicies(String userId) {
		List<Policy> allPolicies = new ArrayList<Policy>();
		return allPolicies;
	}

}
