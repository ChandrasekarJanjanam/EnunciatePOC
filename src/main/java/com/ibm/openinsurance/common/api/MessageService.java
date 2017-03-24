/*
 * Copyright 2006 Web Cohesion Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0 Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES
 * OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */

package com.ibm.openinsurance.common.api;

import java.util.List;

import javax.jws.WebService;
import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.QueryParam;
import javax.ws.rs.core.MediaType;

import com.ibm.openinsurance.domain.MessageDetails;



/**
 * The Interface MessageService.
 */
@WebService
public interface MessageService
{   
   
    /**
     * Gets the all messages.
     *
     * @param userId the user id
     * @return the all messages
     */
    @Path("/insurance/messages")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public List<MessageDetails> getAllMessages(@QueryParam("UserID") String userId);

  
    /**
     * Gets the message details.
     *
     * @param userId the user id
     * @param messageId the message id
     * @return the message details
     */
    @Path("/insurance/message/{messageID}")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public MessageDetails getMessageDetails(@QueryParam("UserID") String userId, @QueryParam("messageID") String messageId);
    
    
}
