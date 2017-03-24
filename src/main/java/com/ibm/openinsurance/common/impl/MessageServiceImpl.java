package com.ibm.openinsurance.common.impl;

import java.util.List;

import javax.jws.WebService;
import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.QueryParam;

import com.ibm.openinsurance.common.api.MessageService;
import com.ibm.openinsurance.domain.MessageDetails;


/**
 * The Class MessageServiceImpl.
 */
@WebService(endpointInterface = "com.ibm.openinsurance.common.api.MessageService")
@Path("/message")
public class MessageServiceImpl implements MessageService {

	
	public List<MessageDetails> getAllMessages(
			String userId) {
		// TODO Auto-generated method stub
		return null;
	}

	
	public MessageDetails getMessageDetails(
			 String userId,
			 String messageId) {
		// TODO Auto-generated method stub
		return null;
	}

}
