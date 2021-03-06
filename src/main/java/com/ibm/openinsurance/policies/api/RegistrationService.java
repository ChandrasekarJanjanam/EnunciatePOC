/*
 * Copyright 2006 Web Cohesion Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0 Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES
 * OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */

package com.ibm.openinsurance.policies.api;

import javax.jws.WebService;
import javax.ws.rs.Consumes;
import javax.ws.rs.POST;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;
import javax.ws.rs.Produces;
import javax.ws.rs.QueryParam;
import javax.ws.rs.core.MediaType;

import com.ibm.openinsurance.domain.Claim;

// TODO: Auto-generated Javadoc
/**
 * The Interface RegistrationService.
 */
@WebService
public interface RegistrationService {

	
	/**
	 * Do registration.
	 *
	 * @param policyId the policy id
	 * @param name the name
	 * @param email the email
	 * @param phone the phone
	 * @return the claim
	 */
	@Path("/insurance/registration")
	@POST
	@Consumes(MediaType.APPLICATION_JSON)
	@Produces(MediaType.APPLICATION_JSON)
	public String doRegistration(@PathParam("policyID") String policyId,
			@QueryParam("Name") String name, @QueryParam("Email") String email,
			@QueryParam("Phone") String phone);

}
