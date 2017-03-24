/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package com.ibm.openinsurance.common.api.impl;

import com.ibm.openinsurance.common.api.ContactService;

/**
 * Implementation of the {@link ContactService}.
 */
public class ContactServiceImpl implements ContactService {

  private final ContactService proxy;

  /**
   * Construct a ContactService that points to the default endpoint ("http://localhost:8080/openinsurance/soap/ContactServiceService").
   *
   * @param features The features to include (e.g. MTOM).
   */
  public ContactServiceImpl(javax.xml.ws.WebServiceFeature... features) {
    this("http://localhost:8080/openinsurance/soap/ContactServiceService", features);
  }

  /**
   * Construct a ContactService that points to the endpoint at the specified host and port.
   *
   * @param host The host.
   * @param port The port.
   * @param features The features (e.g. MTOM).
   */
  public ContactServiceImpl(String host, int port, javax.xml.ws.WebServiceFeature... features) {
    this.proxy = javax.xml.ws.spi.Provider.provider().createServiceDelegate(getClass().getResource("/api.wsdl"), new javax.xml.namespace.QName("http://api.common.openinsurance.ibm.com/", "ContactServiceService"), javax.xml.ws.Service.class).getPort(ContactService.class, features);
    try {
      java.net.URL baseUrl = new java.net.URL("http://localhost:8080/openinsurance/soap/ContactServiceService");
      _getBindingProvider().getRequestContext().put(javax.xml.ws.BindingProvider.ENDPOINT_ADDRESS_PROPERTY, new java.net.URL(baseUrl.getProtocol(), host, port, baseUrl.getFile()).toString());
    }
    catch (java.net.MalformedURLException e) {
      throw new IllegalStateException(e);
    }
  }

  /**
   * Construct a ContactService that points to the specified endpoint.
   *
   * @param endpoint The endpoint to point to.
   * @param features The features (e.g. MTOM).
   */
  public ContactServiceImpl(String endpoint, javax.xml.ws.WebServiceFeature... features) {
    this.proxy = javax.xml.ws.spi.Provider.provider().createServiceDelegate(getClass().getResource("/api.wsdl"), new javax.xml.namespace.QName("http://api.common.openinsurance.ibm.com/", "ContactServiceService"), javax.xml.ws.Service.class).getPort(ContactService.class, features);
    _getBindingProvider().getRequestContext().put(javax.xml.ws.BindingProvider.ENDPOINT_ADDRESS_PROPERTY, endpoint);
  }

  /**
   * Get the binding provider supporting this service.
   */
  public javax.xml.ws.BindingProvider _getBindingProvider() {
    return (javax.xml.ws.BindingProvider) this.proxy;
  }


  // Inherited.
  public java.util.List<com.ibm.openinsurance.domain.FaqDetail> getAllFaqDetails(java.lang.String userId, java.lang.String policyId)  {
    return proxy.getAllFaqDetails(userId, policyId); 
  }

  // Inherited.
  public com.ibm.openinsurance.domain.FaqDetail getFaqDetails(java.lang.String userId, java.lang.String policyId, java.lang.String faqId)  {
    return proxy.getFaqDetails(userId, policyId, faqId); 
  }

  // Inherited.
  public java.lang.String sendTextMessage(java.lang.String userId, java.lang.String policyId, java.lang.String textMessage)  {
    return proxy.sendTextMessage(userId, policyId, textMessage); 
  }

  // Inherited.
  public java.lang.String sendEmailMessage(java.lang.String userId, java.lang.String policyId, java.lang.String emailMessage)  {
    return proxy.sendEmailMessage(userId, policyId, emailMessage); 
  }
}