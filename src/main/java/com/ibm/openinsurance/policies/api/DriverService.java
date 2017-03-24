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

import com.ibm.openinsurance.domain.Driver;


// TODO: Auto-generated Javadoc
/**
 * The Interface DriverService.
 */
@WebService
public interface DriverService
{

    
    /**
     * Gets the all drivers.
     *
     * @param policyId the policy id
     * @return the all drivers
     */
    @Path("/{policyID}/drivers")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public List<Driver> getAllDrivers(@PathParam("policyID") String policyId);

    /**
     * Gets the driver details.
     *
     * @param policyId the policy id
     * @param driverId the driver id
     * @return the driver details
     */
    @Path("/{policyID}/driver/{driverID}")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public Driver getDriverDetails(@PathParam("policyID") String policyId, @PathParam("driverID") String driverId);

   
   
   
    /**
     * Store driver details.
     *
     * @param policyId the policy id
     * @param driver the driver
     * @return the string
     */
    @Path("/{policyID}/driver")
    @POST
    @Consumes(MediaType.APPLICATION_JSON)
    @Produces(MediaType.APPLICATION_JSON)
    public String storeDriverDetails(@PathParam("policyID") String policyId, @QueryParam ("driver") Driver driver);
    
    
   
    /**
     * Update driver details.
     *
     * @param policyId the policy id
     * @param driverId the driver id
     * @return the string
     */
    @Path("/{policyID}/driver/{driverID}")
    @PUT   
    @Produces(MediaType.APPLICATION_JSON)
    public String updateDriverDetails(@PathParam("policyID") String policyId, @PathParam("driverID") String driverId);
   
    
    /**
     * Delete driver details.
     *
     * @param policyId the policy id
     * @param driverId the driver id
     * @return the string
     */
    @Path("/{policyID}/driver/{driverID}")
    @DELETE   
    @Produces(MediaType.APPLICATION_JSON)
    public String deleteDriverDetails(@PathParam("policyID") String policyId, @PathParam("driverID") String driverId);
    
    
}
