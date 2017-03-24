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

import com.ibm.openinsurance.common.api.ContactService;
import com.ibm.openinsurance.domain.FaqDetail;

/**
 * The Class ContactServiceImpl.
 */
@WebService(endpointInterface = "com.ibm.openinsurance.common.api.ContactService")
@Path("/contact")
public class ContactServiceImpl implements ContactService {

	
	public List<FaqDetail> getAllFaqDetails(
			String userId,
			String policyId) {
		List<FaqDetail> allFaqDetails = new ArrayList<FaqDetail>();
		return allFaqDetails;
	}

	
	public FaqDetail getFaqDetails(String userId,
			 String policyId,
			 String faqId) {
		// TODO Auto-generated method stub
		return new FaqDetail();
	}

	
	public String sendTextMessage(String userId,
			 String policyId,
			 String textMessage) {
		// TODO Auto-generated method stub
		return "";
	}

	
	public String sendEmailMessage(String userId,
			 String policyId,
			 String emailMessage) {
		// TODO Auto-generated method stub
		return "";
	}

}
