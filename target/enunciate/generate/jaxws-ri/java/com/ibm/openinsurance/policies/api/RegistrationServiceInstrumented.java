/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.policies.api;

import com.ibm.openinsurance.policies.api.RegistrationService;

/**
 * Instrumented implementation of the {@link RegistrationService}. This is used to apply some additional Enunciate-applied metadata around
 * {@link RegistrationService} that's not available at runtime.
 */
@javax.jws.WebService (
  name = "RegistrationService",
  targetNamespace = "http://api.policies.openinsurance.ibm.com/"
)
public class RegistrationServiceInstrumented {

  private final RegistrationService delegate;

  /**
   * Construct an instrumented RegistrationService that just delegates to an instance of RegistrationService.
   */
  public RegistrationServiceInstrumented() {
    try {
      this.delegate = new com.ibm.openinsurance.policies.impl.RegistrationServiceImpl();
    }
    catch (RuntimeException e) {
      throw e;
    }
    catch (Throwable t) {
      throw new RuntimeException(t);
    }
  }

  /**
   * Construct an instrumented RegistrationService that just delegates to an instance of RegistrationService.
   */
  public RegistrationServiceInstrumented(RegistrationService delegate) {
    this.delegate = delegate;
  }


  @javax.jws.WebMethod (
    operationName = "doRegistration",
    action = ""
  )
  @javax.jws.WebResult (
    name = "return",
    targetNamespace = "",
    header = false,
    partName = "return"
  )
  @javax.xml.ws.RequestWrapper (
    localName = "doRegistration",
    targetNamespace = "http://api.policies.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.policies.api.jaxws.DoRegistration"
  )
  @javax.xml.ws.ResponseWrapper (
    localName = "doRegistrationResponse",
    targetNamespace = "http://api.policies.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.policies.api.jaxws.DoRegistrationResponse"
  )
  @javax.jws.soap.SOAPBinding (
    style = javax.jws.soap.SOAPBinding.Style.DOCUMENT,
    use = javax.jws.soap.SOAPBinding.Use.LITERAL,
    parameterStyle = javax.jws.soap.SOAPBinding.ParameterStyle.WRAPPED
  )
  public java.lang.String doRegistration(@javax.jws.WebParam( name = "policyId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "policyId" ) java.lang.String policyId, @javax.jws.WebParam( name = "name", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "name" ) java.lang.String name, @javax.jws.WebParam( name = "email", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "email" ) java.lang.String email, @javax.jws.WebParam( name = "phone", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "phone" ) java.lang.String phone)  {
    return delegate.doRegistration(policyId, name, email, phone);
  }
}
