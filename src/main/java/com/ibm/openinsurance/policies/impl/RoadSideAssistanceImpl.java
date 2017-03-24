package com.ibm.openinsurance.policies.impl;

import javax.jws.WebService;
import javax.ws.rs.Path;

import com.ibm.openinsurance.domain.Claim;
import com.ibm.openinsurance.policies.api.RoadSideAssistanceService;

/**
 * The Class RoadSideAssistanceImpl.
 */
@WebService(endpointInterface = "com.ibm.openinsurance.policies.api.RoadSideAssistanceService")
@Path("/roadside")
public class RoadSideAssistanceImpl implements RoadSideAssistanceService {

	
	public Claim getAssistanceDetails(String policyId,
			 String userId) {
		// TODO Auto-generated method stub
		return null;
	}

}
