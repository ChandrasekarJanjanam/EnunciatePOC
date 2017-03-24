/*
 * Copyright 2006 Web Cohesion Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0 Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES
 * OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
 */

package com.ibm.openinsurance.common.api;

import javax.jws.WebService;
import javax.ws.rs.Consumes;
import javax.ws.rs.GET;
import javax.ws.rs.POST;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.QueryParam;
import javax.ws.rs.core.MediaType;


/**
 * The Interface AuthenticationService.
 */
@WebService
public interface AuthenticationService
{   
   
    /**
     * Login.
     *
     * @param userName the user name
     * @param password the password
     * @return the string
     */
    @Path("/common/security/login")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public String login(@QueryParam("Username") String userName, @QueryParam("Password") String password);

    
    /**
     * Logout.
     *
     * @param userName the user name
     * @return the string
     */
    @Path("/common/security/logout")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public String logout(@QueryParam("Username") String userName);

     
    /**
     * Forgot password.
     *
     * @param userName the user name
     * @return the string
     */
    @Path("/common/security/forgotpassword")
    @POST
    @Consumes(MediaType.APPLICATION_JSON)
    @Produces(MediaType.APPLICATION_JSON)
    public String forgotPassword(@QueryParam("Username") String userName);
    
    
}
