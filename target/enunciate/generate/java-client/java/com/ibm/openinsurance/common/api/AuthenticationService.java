/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.common.api;

/**
 *  The Interface AuthenticationService.
 */
 @javax.jws.WebService (
   name = "AuthenticationService",
   targetNamespace = "http://api.common.openinsurance.ibm.com/"
 )
 @javax.xml.bind.annotation.XmlSeeAlso ( {
  com.ibm.openinsurance.common.api.jaxws.ForgotPassword.class,
  com.ibm.openinsurance.common.api.jaxws.ForgotPasswordResponse.class,
  com.ibm.openinsurance.common.api.jaxws.GetAllFaqDetails.class,
  com.ibm.openinsurance.common.api.jaxws.GetAllFaqDetailsResponse.class,
  com.ibm.openinsurance.common.api.jaxws.GetAllMessages.class,
  com.ibm.openinsurance.common.api.jaxws.GetAllMessagesResponse.class,
  com.ibm.openinsurance.common.api.jaxws.GetFaqDetails.class,
  com.ibm.openinsurance.common.api.jaxws.GetFaqDetailsResponse.class,
  com.ibm.openinsurance.common.api.jaxws.GetMessageDetails.class,
  com.ibm.openinsurance.common.api.jaxws.GetMessageDetailsResponse.class,
  com.ibm.openinsurance.common.api.jaxws.Login.class,
  com.ibm.openinsurance.common.api.jaxws.LoginResponse.class,
  com.ibm.openinsurance.common.api.jaxws.Logout.class,
  com.ibm.openinsurance.common.api.jaxws.LogoutResponse.class,
  com.ibm.openinsurance.common.api.jaxws.SendEmailMessage.class,
  com.ibm.openinsurance.common.api.jaxws.SendEmailMessageResponse.class,
  com.ibm.openinsurance.common.api.jaxws.SendTextMessage.class,
  com.ibm.openinsurance.common.api.jaxws.SendTextMessageResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.DeleteDriverDetails.class,
  com.ibm.openinsurance.policies.api.jaxws.DeleteDriverDetailsResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.DeleteVehicleDetails.class,
  com.ibm.openinsurance.policies.api.jaxws.DeleteVehicleDetailsResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.DoCheckPayment.class,
  com.ibm.openinsurance.policies.api.jaxws.DoCheckPaymentResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.DoCreditPayment.class,
  com.ibm.openinsurance.policies.api.jaxws.DoCreditPaymentResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.DoDebitPayment.class,
  com.ibm.openinsurance.policies.api.jaxws.DoDebitPaymentResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.DoRegistration.class,
  com.ibm.openinsurance.policies.api.jaxws.DoRegistrationResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.GetAllDrivers.class,
  com.ibm.openinsurance.policies.api.jaxws.GetAllDriversResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.GetAllPolicies.class,
  com.ibm.openinsurance.policies.api.jaxws.GetAllPoliciesResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.GetAllVehicles.class,
  com.ibm.openinsurance.policies.api.jaxws.GetAllVehiclesResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.GetAssistanceDetails.class,
  com.ibm.openinsurance.policies.api.jaxws.GetAssistanceDetailsResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.GetBodyShops.class,
  com.ibm.openinsurance.policies.api.jaxws.GetBodyShopsResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.GetClaimDetails.class,
  com.ibm.openinsurance.policies.api.jaxws.GetClaimDetailsResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.GetCoverageDetails.class,
  com.ibm.openinsurance.policies.api.jaxws.GetCoverageDetailsResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.GetDriverDetails.class,
  com.ibm.openinsurance.policies.api.jaxws.GetDriverDetailsResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.GetIdCardDetails.class,
  com.ibm.openinsurance.policies.api.jaxws.GetIdCardDetailsResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.GetPaymentInformation.class,
  com.ibm.openinsurance.policies.api.jaxws.GetPaymentInformationResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.GetTowingCompanies.class,
  com.ibm.openinsurance.policies.api.jaxws.GetTowingCompaniesResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.GetVehicleDetails.class,
  com.ibm.openinsurance.policies.api.jaxws.GetVehicleDetailsResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.StoreDriverDetails.class,
  com.ibm.openinsurance.policies.api.jaxws.StoreDriverDetailsResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.StoreVehicleDetails.class,
  com.ibm.openinsurance.policies.api.jaxws.StoreVehicleDetailsResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.UpdateDriverDetails.class,
  com.ibm.openinsurance.policies.api.jaxws.UpdateDriverDetailsResponse.class,
  com.ibm.openinsurance.policies.api.jaxws.UpdateVehicleDetails.class,
  com.ibm.openinsurance.policies.api.jaxws.UpdateVehicleDetailsResponse.class
 } )
public interface AuthenticationService {

  /**
   *  Login.
   * 
   *  @param userName the user name
   *  @param password the password
   *  @return the string
   */
  @javax.jws.WebMethod (
    operationName = "login",
    action = ""
  )
  @javax.jws.WebResult (
    name = "return",
    targetNamespace = "",
    header = false,
    partName = "return"
  )
  @javax.xml.ws.RequestWrapper (
    localName = "login",
    targetNamespace = "http://api.common.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.common.api.jaxws.Login"
  )
  @javax.xml.ws.ResponseWrapper (
    localName = "loginResponse",
    targetNamespace = "http://api.common.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.common.api.jaxws.LoginResponse"
  )
  @javax.jws.soap.SOAPBinding (
    style = javax.jws.soap.SOAPBinding.Style.DOCUMENT,
    use = javax.jws.soap.SOAPBinding.Use.LITERAL,
    parameterStyle = javax.jws.soap.SOAPBinding.ParameterStyle.WRAPPED
  )
  java.lang.String login(@javax.jws.WebParam( name = "userName", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "userName" ) java.lang.String userName, @javax.jws.WebParam( name = "password", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "password" ) java.lang.String password) ;

  /**
   *  Logout.
   * 
   *  @param userName the user name
   *  @return the string
   */
  @javax.jws.WebMethod (
    operationName = "logout",
    action = ""
  )
  @javax.jws.WebResult (
    name = "return",
    targetNamespace = "",
    header = false,
    partName = "return"
  )
  @javax.xml.ws.RequestWrapper (
    localName = "logout",
    targetNamespace = "http://api.common.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.common.api.jaxws.Logout"
  )
  @javax.xml.ws.ResponseWrapper (
    localName = "logoutResponse",
    targetNamespace = "http://api.common.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.common.api.jaxws.LogoutResponse"
  )
  @javax.jws.soap.SOAPBinding (
    style = javax.jws.soap.SOAPBinding.Style.DOCUMENT,
    use = javax.jws.soap.SOAPBinding.Use.LITERAL,
    parameterStyle = javax.jws.soap.SOAPBinding.ParameterStyle.WRAPPED
  )
  java.lang.String logout(@javax.jws.WebParam( name = "userName", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "userName" ) java.lang.String userName) ;

  /**
   *  Forgot password.
   * 
   *  @param userName the user name
   *  @return the string
   */
  @javax.jws.WebMethod (
    operationName = "forgotPassword",
    action = ""
  )
  @javax.jws.WebResult (
    name = "return",
    targetNamespace = "",
    header = false,
    partName = "return"
  )
  @javax.xml.ws.RequestWrapper (
    localName = "forgotPassword",
    targetNamespace = "http://api.common.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.common.api.jaxws.ForgotPassword"
  )
  @javax.xml.ws.ResponseWrapper (
    localName = "forgotPasswordResponse",
    targetNamespace = "http://api.common.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.common.api.jaxws.ForgotPasswordResponse"
  )
  @javax.jws.soap.SOAPBinding (
    style = javax.jws.soap.SOAPBinding.Style.DOCUMENT,
    use = javax.jws.soap.SOAPBinding.Use.LITERAL,
    parameterStyle = javax.jws.soap.SOAPBinding.ParameterStyle.WRAPPED
  )
  java.lang.String forgotPassword(@javax.jws.WebParam( name = "userName", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "userName" ) java.lang.String userName) ;

}
