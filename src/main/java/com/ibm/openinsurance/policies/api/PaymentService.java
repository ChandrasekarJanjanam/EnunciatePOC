/*
 * Copyright 2006 Web Cohesion Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0 Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES
 * OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */

package com.ibm.openinsurance.policies.api;

import javax.jws.WebService;
import javax.ws.rs.Consumes;
import javax.ws.rs.GET;
import javax.ws.rs.POST;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;
import javax.ws.rs.Produces;
import javax.ws.rs.QueryParam;
import javax.ws.rs.core.MediaType;

import com.ibm.openinsurance.domain.Billing;
import com.ibm.openinsurance.domain.PaymentResponse;



// TODO: Auto-generated Javadoc
/**
 * The Interface PaymentService.
 */
@WebService
public interface PaymentService
{   
   
    /**
     * Gets the payment information.
     *
     * @param policyId the policy id
     * @return the payment information
     */
    @Path("/{policyID}/payment")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public Billing getPaymentInformation(@PathParam("policyID") String policyId);
    
    /**
     * Do check payment.
     *
     * @param policyId the policy id
     * @param userId the user id
     * @param routingNumber the routing number
     * @param checkingAccount the checking account
     * @param amount the amount
     * @return the payment response
     */
    @Path("/{policyID}/payment/checkpayment")
    @POST
    @Consumes(MediaType.APPLICATION_JSON)
    @Produces(MediaType.APPLICATION_JSON)
    public PaymentResponse doCheckPayment(@PathParam("policyID") String policyId, @QueryParam("UserID") String userId, @QueryParam("RoutingNumber") String routingNumber, 
    		@QueryParam("CheckingAccount") String checkingAccount, @QueryParam("Amount") String amount);
    
    /**
     * Do credit payment.
     *
     * @param policyId the policy id
     * @param userId the user id
     * @param Name the name
     * @param creditCardNumber the credit card number
     * @param cvsCode the cvs code
     * @param expiryDate the expiry date
     * @param amount the amount
     * @return the payment response
     */
    @Path("/{policyID}/payment/creditpayment")
    @POST
    @Consumes(MediaType.APPLICATION_JSON)
    @Produces(MediaType.APPLICATION_JSON)
    public PaymentResponse doCreditPayment(@PathParam("policyID") String policyId, @QueryParam("UserID") String userId, 
    		@QueryParam("userName") String userName, @QueryParam("CreditCardNumber") String creditCardNumber, 
    		@QueryParam("CVSCode") String cvsCode, @QueryParam("ExpiryDate") String expiryDate, 
    		@QueryParam("Amount") String amount);
    
    /**
     * Do debit payment.
     *
     * @param policyId the policy id
     * @param userId the user id
     * @param Name the name
     * @param debitCardNumber the debit card number
     * @param pin the pin
     * @param expiryDate the expiry date
     * @param amount the amount
     * @return the payment response
     */
    @Path("/{policyID}/payment/debitpayment")
    @POST
    @Consumes(MediaType.APPLICATION_JSON)
    @Produces(MediaType.APPLICATION_JSON)
    public PaymentResponse doDebitPayment(@PathParam("policyID") String policyId, @QueryParam("UserID") String userId, 
    		@QueryParam("userName") String userName, @QueryParam("DebitCardNumber") String debitCardNumber, 
    		@QueryParam("Pin") String pin, @QueryParam("ExpiryDate") String expiryDate, 
    		@QueryParam("Amount") String amount);

   
}
