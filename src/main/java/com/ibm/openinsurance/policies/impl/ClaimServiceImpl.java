package com.ibm.openinsurance.policies.impl;

import java.util.ArrayList;
import java.util.List;

import javax.jws.WebService;
import javax.ws.rs.Path;


import com.ibm.openinsurance.domain.BodyShop;
import com.ibm.openinsurance.domain.Claim;
import com.ibm.openinsurance.domain.TowingCompany;
import com.ibm.openinsurance.policies.api.ClaimService;

/**
 * The Class ClaimServiceImpl.
 */
@WebService(endpointInterface = "com.ibm.openinsurance.policies.api.ClaimService")
@Path("/claim")
public class ClaimServiceImpl implements ClaimService {

	public List<TowingCompany> getTowingCompanies(String policyId,
			String userId, String location) {
		List<TowingCompany> allTowingCompanies = new ArrayList<TowingCompany>();
		return allTowingCompanies;

	}

	public List<BodyShop> getBodyShops(String policyId, String userId,
			String location) {
		List<BodyShop> alBodyShops = new ArrayList<BodyShop>();
		return alBodyShops;
	}

	public Claim getClaimDetails(String policyId, String userId) {

		return null;
	}

}
