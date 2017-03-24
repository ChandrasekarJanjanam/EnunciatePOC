/*
 * Copyright 2006 Web Cohesion Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0 Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES
 * OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */

package com.ibm.openinsurance.common.api;

import java.util.List;

import javax.jws.WebService;
import javax.ws.rs.Consumes;
import javax.ws.rs.GET;
import javax.ws.rs.POST;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.QueryParam;
import javax.ws.rs.core.MediaType;

import com.ibm.openinsurance.domain.FaqDetail;


/**
 * The Interface ContactService.
 */
@WebService
public interface ContactService
{   
   
    /**
     * Gets the all faq details.
     *
     * @param userId the user id
     * @param policyId the policy id
     * @return the all faq details
     */
    @Path("/insurance/faqs")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public List<FaqDetail> getAllFaqDetails(@QueryParam("UserID") String userId, @QueryParam("PolicyID") String policyId);

   
    /**
     * Gets the faq details.
     *
     * @param userId the user id
     * @param policyId the policy id
     * @param faqId the faq id
     * @return the faq details
     */
    @Path("/insurance/faq/{faqID}")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public FaqDetail getFaqDetails(@QueryParam("UserID") String userId, @QueryParam("PolicyID") String policyId, @QueryParam("FaqID") String faqId);
    
    
    /**
     * Send text message.
     *
     * @param userId the user id
     * @param policyId the policy id
     * @param textMessage the text message
     * @return the string
     */
    @Path("/insurance/contact/textmessage")
    @POST
    @Consumes(MediaType.APPLICATION_JSON)
    @Produces(MediaType.APPLICATION_JSON)
    public String sendTextMessage(@QueryParam("UserID") String userId, @QueryParam("PolicyID") String policyId, @QueryParam("TextMessage") String textMessage);
    
    /**
     * Send email message.
     *
     * @param userId the user id
     * @param policyId the policy id
     * @param emailMessage the email message
     * @return the string
     */
    @Path("/insurance/contact/emailmessage")
    @POST
    @Consumes(MediaType.APPLICATION_JSON)
    @Produces(MediaType.APPLICATION_JSON)
    public String sendEmailMessage(@QueryParam("UserID") String userId, @QueryParam("PolicyID") String policyId, @QueryParam("EmailMessage") String emailMessage);
    
    
}
