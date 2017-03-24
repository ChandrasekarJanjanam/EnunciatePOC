/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.common.api;

import com.ibm.openinsurance.common.api.ContactService;

/**
 * Instrumented implementation of the {@link ContactService}. This is used to apply some additional Enunciate-applied metadata around
 * {@link ContactService} that's not available at runtime.
 */
@javax.jws.WebService (
  name = "ContactService",
  targetNamespace = "http://api.common.openinsurance.ibm.com/"
)
public class ContactServiceInstrumented {

  private final ContactService delegate;

  /**
   * Construct an instrumented ContactService that just delegates to an instance of ContactService.
   */
  public ContactServiceInstrumented() {
    try {
      this.delegate = new com.ibm.openinsurance.common.impl.ContactServiceImpl();
    }
    catch (RuntimeException e) {
      throw e;
    }
    catch (Throwable t) {
      throw new RuntimeException(t);
    }
  }

  /**
   * Construct an instrumented ContactService that just delegates to an instance of ContactService.
   */
  public ContactServiceInstrumented(ContactService delegate) {
    this.delegate = delegate;
  }


  @javax.jws.WebMethod (
    operationName = "getAllFaqDetails",
    action = ""
  )
  @javax.jws.WebResult (
    name = "return",
    targetNamespace = "",
    header = false,
    partName = "return"
  )
  @javax.xml.ws.RequestWrapper (
    localName = "getAllFaqDetails",
    targetNamespace = "http://api.common.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.common.api.jaxws.GetAllFaqDetails"
  )
  @javax.xml.ws.ResponseWrapper (
    localName = "getAllFaqDetailsResponse",
    targetNamespace = "http://api.common.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.common.api.jaxws.GetAllFaqDetailsResponse"
  )
  @javax.jws.soap.SOAPBinding (
    style = javax.jws.soap.SOAPBinding.Style.DOCUMENT,
    use = javax.jws.soap.SOAPBinding.Use.LITERAL,
    parameterStyle = javax.jws.soap.SOAPBinding.ParameterStyle.WRAPPED
  )
  public java.util.List<com.ibm.openinsurance.domain.FaqDetail> getAllFaqDetails(@javax.jws.WebParam( name = "userId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "userId" ) java.lang.String userId, @javax.jws.WebParam( name = "policyId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "policyId" ) java.lang.String policyId)  {
    return delegate.getAllFaqDetails(userId, policyId);
  }

  @javax.jws.WebMethod (
    operationName = "getFaqDetails",
    action = ""
  )
  @javax.jws.WebResult (
    name = "return",
    targetNamespace = "",
    header = false,
    partName = "return"
  )
  @javax.xml.ws.RequestWrapper (
    localName = "getFaqDetails",
    targetNamespace = "http://api.common.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.common.api.jaxws.GetFaqDetails"
  )
  @javax.xml.ws.ResponseWrapper (
    localName = "getFaqDetailsResponse",
    targetNamespace = "http://api.common.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.common.api.jaxws.GetFaqDetailsResponse"
  )
  @javax.jws.soap.SOAPBinding (
    style = javax.jws.soap.SOAPBinding.Style.DOCUMENT,
    use = javax.jws.soap.SOAPBinding.Use.LITERAL,
    parameterStyle = javax.jws.soap.SOAPBinding.ParameterStyle.WRAPPED
  )
  public com.ibm.openinsurance.domain.FaqDetail getFaqDetails(@javax.jws.WebParam( name = "userId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "userId" ) java.lang.String userId, @javax.jws.WebParam( name = "policyId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "policyId" ) java.lang.String policyId, @javax.jws.WebParam( name = "faqId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "faqId" ) java.lang.String faqId)  {
    return delegate.getFaqDetails(userId, policyId, faqId);
  }

  @javax.jws.WebMethod (
    operationName = "sendTextMessage",
    action = ""
  )
  @javax.jws.WebResult (
    name = "return",
    targetNamespace = "",
    header = false,
    partName = "return"
  )
  @javax.xml.ws.RequestWrapper (
    localName = "sendTextMessage",
    targetNamespace = "http://api.common.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.common.api.jaxws.SendTextMessage"
  )
  @javax.xml.ws.ResponseWrapper (
    localName = "sendTextMessageResponse",
    targetNamespace = "http://api.common.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.common.api.jaxws.SendTextMessageResponse"
  )
  @javax.jws.soap.SOAPBinding (
    style = javax.jws.soap.SOAPBinding.Style.DOCUMENT,
    use = javax.jws.soap.SOAPBinding.Use.LITERAL,
    parameterStyle = javax.jws.soap.SOAPBinding.ParameterStyle.WRAPPED
  )
  public java.lang.String sendTextMessage(@javax.jws.WebParam( name = "userId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "userId" ) java.lang.String userId, @javax.jws.WebParam( name = "policyId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "policyId" ) java.lang.String policyId, @javax.jws.WebParam( name = "textMessage", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "textMessage" ) java.lang.String textMessage)  {
    return delegate.sendTextMessage(userId, policyId, textMessage);
  }

  @javax.jws.WebMethod (
    operationName = "sendEmailMessage",
    action = ""
  )
  @javax.jws.WebResult (
    name = "return",
    targetNamespace = "",
    header = false,
    partName = "return"
  )
  @javax.xml.ws.RequestWrapper (
    localName = "sendEmailMessage",
    targetNamespace = "http://api.common.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.common.api.jaxws.SendEmailMessage"
  )
  @javax.xml.ws.ResponseWrapper (
    localName = "sendEmailMessageResponse",
    targetNamespace = "http://api.common.openinsurance.ibm.com/",
    className = "com.ibm.openinsurance.common.api.jaxws.SendEmailMessageResponse"
  )
  @javax.jws.soap.SOAPBinding (
    style = javax.jws.soap.SOAPBinding.Style.DOCUMENT,
    use = javax.jws.soap.SOAPBinding.Use.LITERAL,
    parameterStyle = javax.jws.soap.SOAPBinding.ParameterStyle.WRAPPED
  )
  public java.lang.String sendEmailMessage(@javax.jws.WebParam( name = "userId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "userId" ) java.lang.String userId, @javax.jws.WebParam( name = "policyId", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "policyId" ) java.lang.String policyId, @javax.jws.WebParam( name = "emailMessage", targetNamespace="", mode = javax.jws.WebParam.Mode.IN , header = false, partName = "emailMessage" ) java.lang.String emailMessage)  {
    return delegate.sendEmailMessage(userId, policyId, emailMessage);
  }
}