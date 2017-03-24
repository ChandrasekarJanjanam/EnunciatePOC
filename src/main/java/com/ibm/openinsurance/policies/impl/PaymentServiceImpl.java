package com.ibm.openinsurance.policies.impl;

import javax.jws.WebService;
import javax.ws.rs.Path;

import com.ibm.openinsurance.domain.Billing;
import com.ibm.openinsurance.domain.PaymentResponse;
import com.ibm.openinsurance.policies.api.PaymentService;


/**
 * The Class IdCardServiceImpl.
 */
@WebService(endpointInterface = "com.ibm.openinsurance.policies.api.PaymentService")
@Path("/payment")
public class PaymentServiceImpl implements PaymentService {

	
	public Billing getPaymentInformation(String policyId) {
		// TODO Auto-generated method stub
		return new Billing();
	}



	public PaymentResponse doCheckPayment(String policyId, String userId,
			String routingNumber, String checkingAccount, String amount) {
		// TODO Auto-generated method stub
		return new PaymentResponse();
	}



	public PaymentResponse doCreditPayment(String policyId, String userId,
			String userName, String creditCardNumber, String cvsCode,
			String expiryDate, String amount) {
		// TODO Auto-generated method stub
		return new PaymentResponse();
	}



	public PaymentResponse doDebitPayment(String policyId, String userId,
			String userName, String debitCardNumber, String pin, String expiryDate,
			String amount) {
		// TODO Auto-generated method stub
		return new PaymentResponse();
	}

}
