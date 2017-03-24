package com.ibm.openinsurance.policies.impl;

import javax.jws.WebService;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;

import com.ibm.openinsurance.domain.IdCardDetails;
import com.ibm.openinsurance.policies.api.IdCardService;

/**
 * The Class IdCardServiceImpl.
 */
@WebService(endpointInterface = "com.ibm.openinsurance.policies.api.IdCardService")
@Path("/idcards")
public class IdCardServiceImpl implements IdCardService {

	
	/* (non-Javadoc)
	 * @see com.ibm.openinsurance.api.IdCardService#getIdCardDetails(java.lang.String)
	 */
	public IdCardDetails getIdCardDetails(@PathParam("policyID") String policyId) {
		
		return new IdCardDetails();
	}

}
