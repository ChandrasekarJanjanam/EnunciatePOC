/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.policies.api;

import com.ibm.openinsurance.policies.api.DriverService;

/**
 * Instrumented implementation of the {@link DriverService}. This is used to apply some additional Enunciate-applied metadata around
 * {@link DriverService} that's not available at runtime.
 */
@javax.jws.WebService (
  name = "DriverService",
  targetNamespace = "http://api.policies.openinsurance.ibm.com/"
)
public class DriverServiceInstrumented {

  private final DriverService delegate;

  /**
   * Construct an instrumented DriverService that just delegates to an instance of DriverService.
   */
  public DriverServiceInstrumented() {
    try {
      this.delegate = new com.ibm.openinsurance.policies.impl.DriverServiceImpl();
    }
    catch (RuntimeException e) {
      throw e;
    }
    catch (Throwable t) {
      throw new RuntimeException(t);
    }
  }

  /**
   * Construct an instrumented DriverService that just delegates to an instance of DriverService.
   */
  public DriverServiceInstrumented(DriverService delegate) {
    this.delegate = delegate;
  }


  @javax.jws.WebMethod (
    operationName = "getAllDrivers",
    action = ""
  )
  @javax.jws.WebResult (
    name = "return",
    targetNamespace = "",
    header = false,
    partName = "return"
  )
  @javax.xml.ws.RequestWrapper (
    localName = "getAllDrivers",
    targetNamespace = "http://api.policies.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.policies.api.jaxws.GetAllDrivers"
  )
  @javax.xml.ws.ResponseWrapper (
    localName = "getAllDriversResponse",
    targetNamespace = "http://api.policies.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.policies.api.jaxws.GetAllDriversResponse"
  )
  @javax.jws.soap.SOAPBinding (
    style = javax.jws.soap.SOAPBinding.Style.DOCUMENT,
    use = javax.jws.soap.SOAPBinding.Use.LITERAL,
    parameterStyle = javax.jws.soap.SOAPBinding.ParameterStyle.WRAPPED
  )
  public java.util.List<com.ibm.openinsurance.domain.Driver> getAllDrivers(@javax.jws.WebParam( name = "policyId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "policyId" ) java.lang.String policyId)  {
    return delegate.getAllDrivers(policyId);
  }

  @javax.jws.WebMethod (
    operationName = "getDriverDetails",
    action = ""
  )
  @javax.jws.WebResult (
    name = "return",
    targetNamespace = "",
    header = false,
    partName = "return"
  )
  @javax.xml.ws.RequestWrapper (
    localName = "getDriverDetails",
    targetNamespace = "http://api.policies.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.policies.api.jaxws.GetDriverDetails"
  )
  @javax.xml.ws.ResponseWrapper (
    localName = "getDriverDetailsResponse",
    targetNamespace = "http://api.policies.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.policies.api.jaxws.GetDriverDetailsResponse"
  )
  @javax.jws.soap.SOAPBinding (
    style = javax.jws.soap.SOAPBinding.Style.DOCUMENT,
    use = javax.jws.soap.SOAPBinding.Use.LITERAL,
    parameterStyle = javax.jws.soap.SOAPBinding.ParameterStyle.WRAPPED
  )
  public com.ibm.openinsurance.domain.Driver getDriverDetails(@javax.jws.WebParam( name = "policyId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "policyId" ) java.lang.String policyId, @javax.jws.WebParam( name = "driverId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "driverId" ) java.lang.String driverId)  {
    return delegate.getDriverDetails(policyId, driverId);
  }

  @javax.jws.WebMethod (
    operationName = "storeDriverDetails",
    action = ""
  )
  @javax.jws.WebResult (
    name = "return",
    targetNamespace = "",
    header = false,
    partName = "return"
  )
  @javax.xml.ws.RequestWrapper (
    localName = "storeDriverDetails",
    targetNamespace = "http://api.policies.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.policies.api.jaxws.StoreDriverDetails"
  )
  @javax.xml.ws.ResponseWrapper (
    localName = "storeDriverDetailsResponse",
    targetNamespace = "http://api.policies.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.policies.api.jaxws.StoreDriverDetailsResponse"
  )
  @javax.jws.soap.SOAPBinding (
    style = javax.jws.soap.SOAPBinding.Style.DOCUMENT,
    use = javax.jws.soap.SOAPBinding.Use.LITERAL,
    parameterStyle = javax.jws.soap.SOAPBinding.ParameterStyle.WRAPPED
  )
  public java.lang.String storeDriverDetails(@javax.jws.WebParam( name = "policyId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "policyId" ) java.lang.String policyId, @javax.jws.WebParam( name = "driver", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "driver" ) com.ibm.openinsurance.domain.Driver driver)  {
    return delegate.storeDriverDetails(policyId, driver);
  }

  @javax.jws.WebMethod (
    operationName = "updateDriverDetails",
    action = ""
  )
  @javax.jws.WebResult (
    name = "return",
    targetNamespace = "",
    header = false,
    partName = "return"
  )
  @javax.xml.ws.RequestWrapper (
    localName = "updateDriverDetails",
    targetNamespace = "http://api.policies.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.policies.api.jaxws.UpdateDriverDetails"
  )
  @javax.xml.ws.ResponseWrapper (
    localName = "updateDriverDetailsResponse",
    targetNamespace = "http://api.policies.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.policies.api.jaxws.UpdateDriverDetailsResponse"
  )
  @javax.jws.soap.SOAPBinding (
    style = javax.jws.soap.SOAPBinding.Style.DOCUMENT,
    use = javax.jws.soap.SOAPBinding.Use.LITERAL,
    parameterStyle = javax.jws.soap.SOAPBinding.ParameterStyle.WRAPPED
  )
  public java.lang.String updateDriverDetails(@javax.jws.WebParam( name = "policyId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "policyId" ) java.lang.String policyId, @javax.jws.WebParam( name = "driverId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "driverId" ) java.lang.String driverId)  {
    return delegate.updateDriverDetails(policyId, driverId);
  }

  @javax.jws.WebMethod (
    operationName = "deleteDriverDetails",
    action = ""
  )
  @javax.jws.WebResult (
    name = "return",
    targetNamespace = "",
    header = false,
    partName = "return"
  )
  @javax.xml.ws.RequestWrapper (
    localName = "deleteDriverDetails",
    targetNamespace = "http://api.policies.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.policies.api.jaxws.DeleteDriverDetails"
  )
  @javax.xml.ws.ResponseWrapper (
    localName = "deleteDriverDetailsResponse",
    targetNamespace = "http://api.policies.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.policies.api.jaxws.DeleteDriverDetailsResponse"
  )
  @javax.jws.soap.SOAPBinding (
    style = javax.jws.soap.SOAPBinding.Style.DOCUMENT,
    use = javax.jws.soap.SOAPBinding.Use.LITERAL,
    parameterStyle = javax.jws.soap.SOAPBinding.ParameterStyle.WRAPPED
  )
  public java.lang.String deleteDriverDetails(@javax.jws.WebParam( name = "policyId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "policyId" ) java.lang.String policyId, @javax.jws.WebParam( name = "driverId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "driverId" ) java.lang.String driverId)  {
    return delegate.deleteDriverDetails(policyId, driverId);
  }
}