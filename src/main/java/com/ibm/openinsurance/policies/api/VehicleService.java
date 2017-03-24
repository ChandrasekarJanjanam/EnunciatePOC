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

import com.ibm.openinsurance.domain.Vehicle;


// TODO: Auto-generated Javadoc
/**
 * The Interface VehicleService.
 */
@WebService
public interface VehicleService
{

    
    /**
     * Gets the all vehicles.
     *
     * @param policyId the policy id
     * @return the all vehicles
     */
    @Path("/{policyID}vehicles")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public List<Vehicle> getAllVehicles(@PathParam("policyID") String policyId);

    /**
     * Gets the vehicle details.
     *
     * @param policyId the policy id
     * @param vehicleId the vehicle id
     * @return the vehicle details
     */
    @Path("/{policyID}/vehicle/{vehicleID}")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public Vehicle getVehicleDetails(@PathParam("policyID") String policyId, @PathParam("vehicleID") String vehicleId);

    /**
     * Store vehicle details.
     *
     * @param policyId the policy id
     * @param vehicle the vehicle
     * @return the string
     */
    @Path("/{policyID}/vehicle")
    @POST
    @Consumes(MediaType.APPLICATION_JSON)
    @Produces(MediaType.APPLICATION_JSON)
    public String storeVehicleDetails(@PathParam("policyID") String policyId, @QueryParam ("vehicle") Vehicle vehicle);
    
    
   
    /**
     * Update vehicle details.
     *
     * @param policyId the policy id
     * @param vehicleId the vehicle id
     * @return the string
     */
    @Path("/{policyID}/vehicle/{vehicleID}")
    @PUT
    @Produces(MediaType.APPLICATION_JSON)
    public String updateVehicleDetails(@PathParam("policyID") String policyId, @PathParam("vehicleID") String vehicleId);
    
   
    /**
     * Delete vehicle details.
     *
     * @param policyId the policy id
     * @param vehicleId the vehicle id
     * @return the string
     */
    @Path("/{policyID}/vehicle/{vehicleID}")
    @DELETE
    @Produces(MediaType.APPLICATION_JSON)
    public String deleteVehicleDetails(@PathParam("policyID") String policyId, @PathParam("vehicleID") String vehicleId);
    
    
}
