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
import javax.ws.rs.QueryParam;
import javax.ws.rs.core.MediaType;

import com.ibm.openinsurance.domain.Coverage;
import com.ibm.openinsurance.domain.Policy;

// TODO: Auto-generated Javadoc
/**
 * The Interface CoverageService.
 */
@WebService
public interface CoverageService
{      
   
    
    /**
     * Gets the all policies.
     *
     * @param userId the user id
     * @return the all policies
     */
    @Path("/insurance/policies")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public List<Policy> getAllPolicies(@QueryParam("UserID") String userId);
    
    /**
     * Gets the coverage details.
     *
     * @param policyId the policy id
     * @param userId the user id
     * @return the coverage details
     */
    @Path("/insurance/policies/{policyID}/coverages")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public Coverage getCoverageDetails(@PathParam("policyID") String policyId, @QueryParam("UserID") String userId);

   
}
