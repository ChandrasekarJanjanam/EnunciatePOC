/*
 * Copyright 2006 Web Cohesion Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0 Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES
 * OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */

package com.ibm.openinsurance.policies.api;

import java.util.List;

import javax.jws.WebService;
import javax.ws.rs.Consumes;
import javax.ws.rs.DELETE;
import javax.ws.rs.GET;
import javax.ws.rs.POST;
import javax.ws.rs.PUT;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;
import javax.ws.rs.Produces;
import javax.ws.rs.QueryParam;
import javax.ws.rs.core.MediaType;


import com.ibm.openinsurance.domain.BodyShop;
import com.ibm.openinsurance.domain.Claim;
import com.ibm.openinsurance.domain.TowingCompany;
import com.ibm.openinsurance.domain.Vehicle;


// TODO: Auto-generated Javadoc
/**
 * The Interface ClaimService.
 */
@WebService
public interface ClaimService
{   
   
    /**
     * Gets the towing companies.
     *
     * @param policyId the policy id
     * @param userId the user id
     * @param location the location
     * @return the towing companies
     */
    @Path("/{policyID}/towingcompanies")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public List<TowingCompany> getTowingCompanies(@PathParam("policyID") String policyId, @QueryParam("UserID") String userId, @QueryParam("Location") String location);

    
    /**
     * Gets the body shops.
     *
     * @param policyId the policy id
     * @param userId the user id
     * @param location the location
     * @return the body shops
     */
    @Path("/{policyID}/bodyshops")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public List<BodyShop> getBodyShops(@PathParam("policyID") String policyId, @QueryParam("UserID") String userId, @QueryParam("Location") String location);

     
    /**
     * Gets the claim details.
     *
     * @param policyId the policy id
     * @param userId the user id
     * @return the claim details
     */
    @Path("/{policyID}/claim")
    @POST
    @Consumes(MediaType.APPLICATION_JSON)
    @Produces(MediaType.APPLICATION_JSON)
    public Claim getClaimDetails(@PathParam("policyID") String policyId, @QueryParam("UserID") String userId);
    
    
}
