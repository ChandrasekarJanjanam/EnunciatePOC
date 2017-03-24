/*
 * Copyright 2006 Web Cohesion Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0 Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES
 * OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */

package com.ibm.openinsurance.policies.api;

import java.util.List;

import javax.jws.WebService;
import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;
import javax.ws.rs.Produces;
import javax.ws.rs.core.MediaType;

import com.ibm.openinsurance.domain.IdCardDetails;


// TODO: Auto-generated Javadoc
/**
 * The Interface IdCardService.
 */
@WebService
public interface IdCardService
{

    
    
    /**
     * Gets the id card details.
     *
     * @param policyId the policy id
     * @return the id card details
     */
    @Path("/{policyID}/idcards")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public IdCardDetails getIdCardDetails(@PathParam("policyID") String policyId);

}
