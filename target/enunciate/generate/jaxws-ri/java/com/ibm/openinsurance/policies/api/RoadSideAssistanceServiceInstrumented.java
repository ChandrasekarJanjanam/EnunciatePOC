/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.policies.api;

import com.ibm.openinsurance.policies.api.RoadSideAssistanceService;

/**
 * Instrumented implementation of the {@link RoadSideAssistanceService}. This is used to apply some additional Enunciate-applied metadata around
 * {@link RoadSideAssistanceService} that's not available at runtime.
 */
@javax.jws.WebService (
  name = "RoadSideAssistanceService",
  targetNamespace = "http://api.policies.openinsurance.ibm.com/"
)
public class RoadSideAssistanceServiceInstrumented {

  private final RoadSideAssistanceService delegate;

  /**
   * Construct an instrumented RoadSideAssistanceService that just delegates to an instance of RoadSideAssistanceService.
   */
  public RoadSideAssistanceServiceInstrumented() {
    try {
      this.delegate = new com.ibm.openinsurance.policies.impl.RoadSideAssistanceImpl();
    }
    catch (RuntimeException e) {
      throw e;
    }
    catch (Throwable t) {
      throw new RuntimeException(t);
    }
  }

  /**
   * Construct an instrumented RoadSideAssistanceService that just delegates to an instance of RoadSideAssistanceService.
   */
  public RoadSideAssistanceServiceInstrumented(RoadSideAssistanceService delegate) {
    this.delegate = delegate;
  }


  @javax.jws.WebMethod (
    operationName = "getAssistanceDetails",
    action = ""
  )
  @javax.jws.WebResult (
    name = "return",
    targetNamespace = "",
    header = false,
    partName = "return"
  )
  @javax.xml.ws.RequestWrapper (
    localName = "getAssistanceDetails",
    targetNamespace = "http://api.policies.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.policies.api.jaxws.GetAssistanceDetails"
  )
  @javax.xml.ws.ResponseWrapper (
    localName = "getAssistanceDetailsResponse",
    targetNamespace = "http://api.policies.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.policies.api.jaxws.GetAssistanceDetailsResponse"
  )
  @javax.jws.soap.SOAPBinding (
    style = javax.jws.soap.SOAPBinding.Style.DOCUMENT,
    use = javax.jws.soap.SOAPBinding.Use.LITERAL,
    parameterStyle = javax.jws.soap.SOAPBinding.ParameterStyle.WRAPPED
  )
  public com.ibm.openinsurance.domain.Claim getAssistanceDetails(@javax.jws.WebParam( name = "policyId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "policyId" ) java.lang.String policyId, @javax.jws.WebParam( name = "userId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "userId" ) java.lang.String userId)  {
    return delegate.getAssistanceDetails(policyId, userId);
  }
}
