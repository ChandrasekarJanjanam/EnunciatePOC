#include <enunciate-common.c>
#ifndef DEF_openinsurance_ns0_billing_H
#define DEF_openinsurance_ns0_billing_H

/**
 *  The Class Billing.

 */
struct openinsurance_ns0_billing {


  /**
   * the policyId
   */
  xmlChar *policyId;

  /**
   * the policyBalance
   */
  double policyBalance;

  /**
   * the lastPaymentDate
   */
  struct tm *lastPaymentDate;

  /**
   * the amountBalance
   */
  double amountBalance;
};

/**
 * Reads a Billing element from XML. The element to be read is "billing", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Billing, or NULL in case of error.
 */
struct openinsurance_ns0_billing *xml_read_openinsurance_ns0_billing(xmlTextReaderPtr reader);

/**
 * Writes a Billing to XML under element name "billing".
 *
 * @param writer The XML writer.
 * @param _billing The Billing to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_openinsurance_ns0_billing(xmlTextWriterPtr writer, struct openinsurance_ns0_billing *_billing);

/**
 * Frees a Billing.
 *
 * @param _billing The Billing to free.
 */
void free_openinsurance_ns0_billing(struct openinsurance_ns0_billing *_billing);

/**
 * Reads a Billing element from XML. The element to be read is "billing", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Billing, or NULL in case of error.
 */
struct openinsurance_ns0_billing *xmlTextReaderReadNs0BillingElement(xmlTextReaderPtr reader);

/**
 * Writes a Billing to XML under element name "billing".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _billing The Billing to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0BillingElement(xmlTextWriterPtr writer, struct openinsurance_ns0_billing *_billing);

/**
 * Writes a Billing to XML under element name "billing".
 *
 * @param writer The XML writer.
 * @param _billing The Billing to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0BillingElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_billing *_billing, int writeNamespaces);

/**
 * Frees the children of a Billing.
 *
 * @param _billing The Billing whose children are to be free.
 */
static void freeNs0BillingElement(struct openinsurance_ns0_billing *_billing);

/**
 * Reads a Billing from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Billing, or NULL in case of error.
 */
static struct openinsurance_ns0_billing *xmlTextReaderReadNs0BillingType(xmlTextReaderPtr reader);

/**
 * Writes a Billing to XML.
 *
 * @param writer The XML writer.
 * @param _billing The Billing to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0BillingType(xmlTextWriterPtr writer, struct openinsurance_ns0_billing *_billing);

/**
 * Frees the elements of a Billing.
 *
 * @param _billing The Billing to free.
 */
static void freeNs0BillingType(struct openinsurance_ns0_billing *_billing);

#endif /* DEF_openinsurance_ns0_billing_H */
#ifndef DEF_openinsurance_ns0_bodyShop_H
#define DEF_openinsurance_ns0_bodyShop_H

/**
 *  The Class BodyShop.

 */
struct openinsurance_ns0_bodyShop {


  /**
   * the name
   */
  xmlChar *name;

  /**
   * the address1
   */
  xmlChar *address1;

  /**
   * the address2
   */
  xmlChar *address2;

  /**
   * the city
   */
  xmlChar *city;

  /**
   * the province
   */
  xmlChar *province;

  /**
   * the pinCode
   */
  xmlChar *pinCode;

  /**
   * the phone
   */
  int phone;

  /**
   * the emailId
   */
  xmlChar *emailId;
};

/**
 * Reads a BodyShop element from XML. The element to be read is "bodyShop", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The BodyShop, or NULL in case of error.
 */
struct openinsurance_ns0_bodyShop *xml_read_openinsurance_ns0_bodyShop(xmlTextReaderPtr reader);

/**
 * Writes a BodyShop to XML under element name "bodyShop".
 *
 * @param writer The XML writer.
 * @param _bodyShop The BodyShop to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_openinsurance_ns0_bodyShop(xmlTextWriterPtr writer, struct openinsurance_ns0_bodyShop *_bodyShop);

/**
 * Frees a BodyShop.
 *
 * @param _bodyShop The BodyShop to free.
 */
void free_openinsurance_ns0_bodyShop(struct openinsurance_ns0_bodyShop *_bodyShop);

/**
 * Reads a BodyShop element from XML. The element to be read is "bodyShop", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The BodyShop, or NULL in case of error.
 */
struct openinsurance_ns0_bodyShop *xmlTextReaderReadNs0BodyShopElement(xmlTextReaderPtr reader);

/**
 * Writes a BodyShop to XML under element name "bodyShop".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _bodyShop The BodyShop to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0BodyShopElement(xmlTextWriterPtr writer, struct openinsurance_ns0_bodyShop *_bodyShop);

/**
 * Writes a BodyShop to XML under element name "bodyShop".
 *
 * @param writer The XML writer.
 * @param _bodyShop The BodyShop to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0BodyShopElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_bodyShop *_bodyShop, int writeNamespaces);

/**
 * Frees the children of a BodyShop.
 *
 * @param _bodyShop The BodyShop whose children are to be free.
 */
static void freeNs0BodyShopElement(struct openinsurance_ns0_bodyShop *_bodyShop);

/**
 * Reads a BodyShop from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The BodyShop, or NULL in case of error.
 */
static struct openinsurance_ns0_bodyShop *xmlTextReaderReadNs0BodyShopType(xmlTextReaderPtr reader);

/**
 * Writes a BodyShop to XML.
 *
 * @param writer The XML writer.
 * @param _bodyShop The BodyShop to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0BodyShopType(xmlTextWriterPtr writer, struct openinsurance_ns0_bodyShop *_bodyShop);

/**
 * Frees the elements of a BodyShop.
 *
 * @param _bodyShop The BodyShop to free.
 */
static void freeNs0BodyShopType(struct openinsurance_ns0_bodyShop *_bodyShop);

#endif /* DEF_openinsurance_ns0_bodyShop_H */
#ifndef DEF_openinsurance_ns0_claim_H
#define DEF_openinsurance_ns0_claim_H

/**
 *  The Class Claim.

 */
struct openinsurance_ns0_claim {


  /**
   * the claimId
   */
  xmlChar *claimId;

  /**
   * the claimDescription
   */
  xmlChar *claimDescription;
};

/**
 * Reads a Claim element from XML. The element to be read is "claim", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Claim, or NULL in case of error.
 */
struct openinsurance_ns0_claim *xml_read_openinsurance_ns0_claim(xmlTextReaderPtr reader);

/**
 * Writes a Claim to XML under element name "claim".
 *
 * @param writer The XML writer.
 * @param _claim The Claim to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_openinsurance_ns0_claim(xmlTextWriterPtr writer, struct openinsurance_ns0_claim *_claim);

/**
 * Frees a Claim.
 *
 * @param _claim The Claim to free.
 */
void free_openinsurance_ns0_claim(struct openinsurance_ns0_claim *_claim);

/**
 * Reads a Claim element from XML. The element to be read is "claim", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Claim, or NULL in case of error.
 */
struct openinsurance_ns0_claim *xmlTextReaderReadNs0ClaimElement(xmlTextReaderPtr reader);

/**
 * Writes a Claim to XML under element name "claim".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _claim The Claim to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ClaimElement(xmlTextWriterPtr writer, struct openinsurance_ns0_claim *_claim);

/**
 * Writes a Claim to XML under element name "claim".
 *
 * @param writer The XML writer.
 * @param _claim The Claim to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ClaimElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_claim *_claim, int writeNamespaces);

/**
 * Frees the children of a Claim.
 *
 * @param _claim The Claim whose children are to be free.
 */
static void freeNs0ClaimElement(struct openinsurance_ns0_claim *_claim);

/**
 * Reads a Claim from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Claim, or NULL in case of error.
 */
static struct openinsurance_ns0_claim *xmlTextReaderReadNs0ClaimType(xmlTextReaderPtr reader);

/**
 * Writes a Claim to XML.
 *
 * @param writer The XML writer.
 * @param _claim The Claim to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ClaimType(xmlTextWriterPtr writer, struct openinsurance_ns0_claim *_claim);

/**
 * Frees the elements of a Claim.
 *
 * @param _claim The Claim to free.
 */
static void freeNs0ClaimType(struct openinsurance_ns0_claim *_claim);

#endif /* DEF_openinsurance_ns0_claim_H */
#ifndef DEF_openinsurance_ns0_coverage_H
#define DEF_openinsurance_ns0_coverage_H

/**
 *  The Class Coverage.

 */
struct openinsurance_ns0_coverage {


  /**
   * the coverageId
   */
  xmlChar *coverageId;

  /**
   * the coverageTypeId
   */
  xmlChar *coverageTypeId;

  /**
   * the coverageAmount
   */
  xmlChar *coverageAmount;

  /**
   * the coverageLimit
   */
  xmlChar *coverageLimit;

  /**
   * the deductible
   */
  xmlChar *deductible;
};

/**
 * Reads a Coverage element from XML. The element to be read is "coverage", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Coverage, or NULL in case of error.
 */
struct openinsurance_ns0_coverage *xml_read_openinsurance_ns0_coverage(xmlTextReaderPtr reader);

/**
 * Writes a Coverage to XML under element name "coverage".
 *
 * @param writer The XML writer.
 * @param _coverage The Coverage to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_openinsurance_ns0_coverage(xmlTextWriterPtr writer, struct openinsurance_ns0_coverage *_coverage);

/**
 * Frees a Coverage.
 *
 * @param _coverage The Coverage to free.
 */
void free_openinsurance_ns0_coverage(struct openinsurance_ns0_coverage *_coverage);

/**
 * Reads a Coverage element from XML. The element to be read is "coverage", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Coverage, or NULL in case of error.
 */
struct openinsurance_ns0_coverage *xmlTextReaderReadNs0CoverageElement(xmlTextReaderPtr reader);

/**
 * Writes a Coverage to XML under element name "coverage".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _coverage The Coverage to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0CoverageElement(xmlTextWriterPtr writer, struct openinsurance_ns0_coverage *_coverage);

/**
 * Writes a Coverage to XML under element name "coverage".
 *
 * @param writer The XML writer.
 * @param _coverage The Coverage to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0CoverageElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_coverage *_coverage, int writeNamespaces);

/**
 * Frees the children of a Coverage.
 *
 * @param _coverage The Coverage whose children are to be free.
 */
static void freeNs0CoverageElement(struct openinsurance_ns0_coverage *_coverage);

/**
 * Reads a Coverage from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Coverage, or NULL in case of error.
 */
static struct openinsurance_ns0_coverage *xmlTextReaderReadNs0CoverageType(xmlTextReaderPtr reader);

/**
 * Writes a Coverage to XML.
 *
 * @param writer The XML writer.
 * @param _coverage The Coverage to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0CoverageType(xmlTextWriterPtr writer, struct openinsurance_ns0_coverage *_coverage);

/**
 * Frees the elements of a Coverage.
 *
 * @param _coverage The Coverage to free.
 */
static void freeNs0CoverageType(struct openinsurance_ns0_coverage *_coverage);

#endif /* DEF_openinsurance_ns0_coverage_H */
#ifndef DEF_openinsurance_ns0_driver_H
#define DEF_openinsurance_ns0_driver_H

/**
 *  The Class Driver.

 */
struct openinsurance_ns0_driver {


  /**
   * the driverId
   */
  xmlChar *driverId;

  /**
   * the driverName
   */
  xmlChar *driverName;

  /**
   * the gender
   */
  xmlChar *gender;

  /**
   * the driverPhoto
   */
  xmlChar *driverPhoto;

  /**
   * the dateOfBirth
   */
  struct tm *dateOfBirth;

  /**
   * the driverLicenseNumber
   */
  xmlChar *driverLicenseNumber;

  /**
   * the driverClass
   */
  xmlChar *driverClass;

  /**
   * the address
   */
  xmlChar *address;

  /**
   * the eyeColor
   */
  xmlChar *eyeColor;

  /**
   * the height
   */
  xmlChar *height;

  /**
   * the dateOfIssue
   */
  struct tm *dateOfIssue;

  /**
   * the expiryDate
   */
  struct tm *expiryDate;

  /**
   * the licensePhoto
   */
  xmlChar *licensePhoto;
};

/**
 * Reads a Driver element from XML. The element to be read is "driver", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Driver, or NULL in case of error.
 */
struct openinsurance_ns0_driver *xml_read_openinsurance_ns0_driver(xmlTextReaderPtr reader);

/**
 * Writes a Driver to XML under element name "driver".
 *
 * @param writer The XML writer.
 * @param _driver The Driver to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_openinsurance_ns0_driver(xmlTextWriterPtr writer, struct openinsurance_ns0_driver *_driver);

/**
 * Frees a Driver.
 *
 * @param _driver The Driver to free.
 */
void free_openinsurance_ns0_driver(struct openinsurance_ns0_driver *_driver);

/**
 * Reads a Driver element from XML. The element to be read is "driver", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Driver, or NULL in case of error.
 */
struct openinsurance_ns0_driver *xmlTextReaderReadNs0DriverElement(xmlTextReaderPtr reader);

/**
 * Writes a Driver to XML under element name "driver".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _driver The Driver to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0DriverElement(xmlTextWriterPtr writer, struct openinsurance_ns0_driver *_driver);

/**
 * Writes a Driver to XML under element name "driver".
 *
 * @param writer The XML writer.
 * @param _driver The Driver to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0DriverElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_driver *_driver, int writeNamespaces);

/**
 * Frees the children of a Driver.
 *
 * @param _driver The Driver whose children are to be free.
 */
static void freeNs0DriverElement(struct openinsurance_ns0_driver *_driver);

/**
 * Reads a Driver from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Driver, or NULL in case of error.
 */
static struct openinsurance_ns0_driver *xmlTextReaderReadNs0DriverType(xmlTextReaderPtr reader);

/**
 * Writes a Driver to XML.
 *
 * @param writer The XML writer.
 * @param _driver The Driver to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0DriverType(xmlTextWriterPtr writer, struct openinsurance_ns0_driver *_driver);

/**
 * Frees the elements of a Driver.
 *
 * @param _driver The Driver to free.
 */
static void freeNs0DriverType(struct openinsurance_ns0_driver *_driver);

#endif /* DEF_openinsurance_ns0_driver_H */
#ifndef DEF_openinsurance_ns0_faqDetail_H
#define DEF_openinsurance_ns0_faqDetail_H

/**
 *  The Class FaqDetail.

 */
struct openinsurance_ns0_faqDetail {


  /**
   * the faqId
   */
  xmlChar *faqId;

  /**
   * the faqDetails
   */
  xmlChar *faqDetails;
};

/**
 * Reads a FaqDetail from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The FaqDetail, or NULL in case of error.
 */
static struct openinsurance_ns0_faqDetail *xmlTextReaderReadNs0FaqDetailType(xmlTextReaderPtr reader);

/**
 * Writes a FaqDetail to XML.
 *
 * @param writer The XML writer.
 * @param _faqDetail The FaqDetail to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FaqDetailType(xmlTextWriterPtr writer, struct openinsurance_ns0_faqDetail *_faqDetail);

/**
 * Frees the elements of a FaqDetail.
 *
 * @param _faqDetail The FaqDetail to free.
 */
static void freeNs0FaqDetailType(struct openinsurance_ns0_faqDetail *_faqDetail);

#endif /* DEF_openinsurance_ns0_faqDetail_H */
#ifndef DEF_openinsurance_ns0_idCardDetails_H
#define DEF_openinsurance_ns0_idCardDetails_H

/**
 *  The Class IdCardDetails.

 */
struct openinsurance_ns0_idCardDetails {


  /**
   * the vehicle
   */
  struct openinsurance_ns0_vehicle *vehicle;

  /**
   * the policy
   */
  struct openinsurance_ns0_policy *policy;

  /**
   * the insuredPersons
   */
  xmlChar *insuredPersons;

  /**
   * Size of the insuredPersons array.
   */
  int _sizeof_insuredPersons;
};

/**
 * Reads a IdCardDetails element from XML. The element to be read is "idCardDetails", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The IdCardDetails, or NULL in case of error.
 */
struct openinsurance_ns0_idCardDetails *xml_read_openinsurance_ns0_idCardDetails(xmlTextReaderPtr reader);

/**
 * Writes a IdCardDetails to XML under element name "idCardDetails".
 *
 * @param writer The XML writer.
 * @param _idCardDetails The IdCardDetails to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_openinsurance_ns0_idCardDetails(xmlTextWriterPtr writer, struct openinsurance_ns0_idCardDetails *_idCardDetails);

/**
 * Frees a IdCardDetails.
 *
 * @param _idCardDetails The IdCardDetails to free.
 */
void free_openinsurance_ns0_idCardDetails(struct openinsurance_ns0_idCardDetails *_idCardDetails);

/**
 * Reads a IdCardDetails element from XML. The element to be read is "idCardDetails", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The IdCardDetails, or NULL in case of error.
 */
struct openinsurance_ns0_idCardDetails *xmlTextReaderReadNs0IdCardDetailsElement(xmlTextReaderPtr reader);

/**
 * Writes a IdCardDetails to XML under element name "idCardDetails".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _idCardDetails The IdCardDetails to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0IdCardDetailsElement(xmlTextWriterPtr writer, struct openinsurance_ns0_idCardDetails *_idCardDetails);

/**
 * Writes a IdCardDetails to XML under element name "idCardDetails".
 *
 * @param writer The XML writer.
 * @param _idCardDetails The IdCardDetails to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0IdCardDetailsElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_idCardDetails *_idCardDetails, int writeNamespaces);

/**
 * Frees the children of a IdCardDetails.
 *
 * @param _idCardDetails The IdCardDetails whose children are to be free.
 */
static void freeNs0IdCardDetailsElement(struct openinsurance_ns0_idCardDetails *_idCardDetails);

/**
 * Reads a IdCardDetails from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The IdCardDetails, or NULL in case of error.
 */
static struct openinsurance_ns0_idCardDetails *xmlTextReaderReadNs0IdCardDetailsType(xmlTextReaderPtr reader);

/**
 * Writes a IdCardDetails to XML.
 *
 * @param writer The XML writer.
 * @param _idCardDetails The IdCardDetails to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0IdCardDetailsType(xmlTextWriterPtr writer, struct openinsurance_ns0_idCardDetails *_idCardDetails);

/**
 * Frees the elements of a IdCardDetails.
 *
 * @param _idCardDetails The IdCardDetails to free.
 */
static void freeNs0IdCardDetailsType(struct openinsurance_ns0_idCardDetails *_idCardDetails);

#endif /* DEF_openinsurance_ns0_idCardDetails_H */
#ifndef DEF_openinsurance_ns0_messageDetails_H
#define DEF_openinsurance_ns0_messageDetails_H

/**
 *  The Class MessageDetails.

 */
struct openinsurance_ns0_messageDetails {


  /**
   * the messageId
   */
  xmlChar *messageId;

  /**
   * the messageDetail
   */
  xmlChar *messageDetail;
};

/**
 * Reads a MessageDetails element from XML. The element to be read is "messageDetails", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The MessageDetails, or NULL in case of error.
 */
struct openinsurance_ns0_messageDetails *xml_read_openinsurance_ns0_messageDetails(xmlTextReaderPtr reader);

/**
 * Writes a MessageDetails to XML under element name "messageDetails".
 *
 * @param writer The XML writer.
 * @param _messageDetails The MessageDetails to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_openinsurance_ns0_messageDetails(xmlTextWriterPtr writer, struct openinsurance_ns0_messageDetails *_messageDetails);

/**
 * Frees a MessageDetails.
 *
 * @param _messageDetails The MessageDetails to free.
 */
void free_openinsurance_ns0_messageDetails(struct openinsurance_ns0_messageDetails *_messageDetails);

/**
 * Reads a MessageDetails element from XML. The element to be read is "messageDetails", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The MessageDetails, or NULL in case of error.
 */
struct openinsurance_ns0_messageDetails *xmlTextReaderReadNs0MessageDetailsElement(xmlTextReaderPtr reader);

/**
 * Writes a MessageDetails to XML under element name "messageDetails".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _messageDetails The MessageDetails to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MessageDetailsElement(xmlTextWriterPtr writer, struct openinsurance_ns0_messageDetails *_messageDetails);

/**
 * Writes a MessageDetails to XML under element name "messageDetails".
 *
 * @param writer The XML writer.
 * @param _messageDetails The MessageDetails to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MessageDetailsElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_messageDetails *_messageDetails, int writeNamespaces);

/**
 * Frees the children of a MessageDetails.
 *
 * @param _messageDetails The MessageDetails whose children are to be free.
 */
static void freeNs0MessageDetailsElement(struct openinsurance_ns0_messageDetails *_messageDetails);

/**
 * Reads a MessageDetails from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The MessageDetails, or NULL in case of error.
 */
static struct openinsurance_ns0_messageDetails *xmlTextReaderReadNs0MessageDetailsType(xmlTextReaderPtr reader);

/**
 * Writes a MessageDetails to XML.
 *
 * @param writer The XML writer.
 * @param _messageDetails The MessageDetails to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MessageDetailsType(xmlTextWriterPtr writer, struct openinsurance_ns0_messageDetails *_messageDetails);

/**
 * Frees the elements of a MessageDetails.
 *
 * @param _messageDetails The MessageDetails to free.
 */
static void freeNs0MessageDetailsType(struct openinsurance_ns0_messageDetails *_messageDetails);

#endif /* DEF_openinsurance_ns0_messageDetails_H */
#ifndef DEF_openinsurance_ns0_payment_H
#define DEF_openinsurance_ns0_payment_H

/**
 *  The Class Payment.

 */
struct openinsurance_ns0_payment {


  /**
   * the paymentId
   */
  xmlChar *paymentId;

  /**
   * the policyId
   */
  xmlChar *policyId;

  /**
   * the paymentAmount
   */
  double paymentAmount;

  /**
   * the paymentType
   */
  xmlChar *paymentType;

  /**
   * the paymentDate
   */
  struct tm *paymentDate;

  /**
   * the routingNumber
   */
  xmlChar *routingNumber;

  /**
   * the checkingAccountNumber
   */
  xmlChar *checkingAccountNumber;

  /**
   * the checkPhotograph
   */
  xmlChar *checkPhotograph;

  /**
   * the creditCardNumber
   */
  xmlChar *creditCardNumber;

  /**
   * the creditCardName
   */
  xmlChar *creditCardName;

  /**
   * the cVSCode
   */
  xmlChar *CVSCode;

  /**
   * the creditCardExpiryDate
   */
  struct tm *creditCardExpiryDate;

  /**
   * the debitCardNumber
   */
  xmlChar *debitCardNumber;

  /**
   * the debitCardName
   */
  xmlChar *debitCardName;

  /**
   * the debitCardPin
   */
  xmlChar *debitCardPin;

  /**
   * the debitCardExpiryDate
   */
  struct tm *debitCardExpiryDate;
};

/**
 * Reads a Payment element from XML. The element to be read is "payment", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Payment, or NULL in case of error.
 */
struct openinsurance_ns0_payment *xml_read_openinsurance_ns0_payment(xmlTextReaderPtr reader);

/**
 * Writes a Payment to XML under element name "payment".
 *
 * @param writer The XML writer.
 * @param _payment The Payment to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_openinsurance_ns0_payment(xmlTextWriterPtr writer, struct openinsurance_ns0_payment *_payment);

/**
 * Frees a Payment.
 *
 * @param _payment The Payment to free.
 */
void free_openinsurance_ns0_payment(struct openinsurance_ns0_payment *_payment);

/**
 * Reads a Payment element from XML. The element to be read is "payment", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Payment, or NULL in case of error.
 */
struct openinsurance_ns0_payment *xmlTextReaderReadNs0PaymentElement(xmlTextReaderPtr reader);

/**
 * Writes a Payment to XML under element name "payment".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _payment The Payment to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PaymentElement(xmlTextWriterPtr writer, struct openinsurance_ns0_payment *_payment);

/**
 * Writes a Payment to XML under element name "payment".
 *
 * @param writer The XML writer.
 * @param _payment The Payment to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PaymentElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_payment *_payment, int writeNamespaces);

/**
 * Frees the children of a Payment.
 *
 * @param _payment The Payment whose children are to be free.
 */
static void freeNs0PaymentElement(struct openinsurance_ns0_payment *_payment);

/**
 * Reads a Payment from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Payment, or NULL in case of error.
 */
static struct openinsurance_ns0_payment *xmlTextReaderReadNs0PaymentType(xmlTextReaderPtr reader);

/**
 * Writes a Payment to XML.
 *
 * @param writer The XML writer.
 * @param _payment The Payment to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PaymentType(xmlTextWriterPtr writer, struct openinsurance_ns0_payment *_payment);

/**
 * Frees the elements of a Payment.
 *
 * @param _payment The Payment to free.
 */
static void freeNs0PaymentType(struct openinsurance_ns0_payment *_payment);

#endif /* DEF_openinsurance_ns0_payment_H */
#ifndef DEF_openinsurance_ns0_paymentResponse_H
#define DEF_openinsurance_ns0_paymentResponse_H

/**
 *  The Class PaymentResponse.

 */
struct openinsurance_ns0_paymentResponse {


  /**
   * the reponseStatus
   */
  xmlChar *reponseStatus;

  /**
   * the responseDescription
   */
  xmlChar *responseDescription;
};

/**
 * Reads a PaymentResponse from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The PaymentResponse, or NULL in case of error.
 */
static struct openinsurance_ns0_paymentResponse *xmlTextReaderReadNs0PaymentResponseType(xmlTextReaderPtr reader);

/**
 * Writes a PaymentResponse to XML.
 *
 * @param writer The XML writer.
 * @param _paymentResponse The PaymentResponse to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PaymentResponseType(xmlTextWriterPtr writer, struct openinsurance_ns0_paymentResponse *_paymentResponse);

/**
 * Frees the elements of a PaymentResponse.
 *
 * @param _paymentResponse The PaymentResponse to free.
 */
static void freeNs0PaymentResponseType(struct openinsurance_ns0_paymentResponse *_paymentResponse);

#endif /* DEF_openinsurance_ns0_paymentResponse_H */
#ifndef DEF_openinsurance_ns0_policy_H
#define DEF_openinsurance_ns0_policy_H

/**
 *  The Class Policy.

 */
struct openinsurance_ns0_policy {


  /**
   * the policyId
   */
  xmlChar *policyId;

  /**
   * the policyType
   */
  xmlChar *policyType;

  /**
   * the policyNumber
   */
  xmlChar *policyNumber;

  /**
   * the policyEffectiveDate
   */
  struct tm *policyEffectiveDate;

  /**
   * the policyExpirationDate
   */
  struct tm *policyExpirationDate;

  /**
   * the policyPremium
   */
  double policyPremium;
};

/**
 * Reads a Policy element from XML. The element to be read is "policy", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Policy, or NULL in case of error.
 */
struct openinsurance_ns0_policy *xml_read_openinsurance_ns0_policy(xmlTextReaderPtr reader);

/**
 * Writes a Policy to XML under element name "policy".
 *
 * @param writer The XML writer.
 * @param _policy The Policy to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_openinsurance_ns0_policy(xmlTextWriterPtr writer, struct openinsurance_ns0_policy *_policy);

/**
 * Frees a Policy.
 *
 * @param _policy The Policy to free.
 */
void free_openinsurance_ns0_policy(struct openinsurance_ns0_policy *_policy);

/**
 * Reads a Policy element from XML. The element to be read is "policy", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Policy, or NULL in case of error.
 */
struct openinsurance_ns0_policy *xmlTextReaderReadNs0PolicyElement(xmlTextReaderPtr reader);

/**
 * Writes a Policy to XML under element name "policy".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _policy The Policy to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PolicyElement(xmlTextWriterPtr writer, struct openinsurance_ns0_policy *_policy);

/**
 * Writes a Policy to XML under element name "policy".
 *
 * @param writer The XML writer.
 * @param _policy The Policy to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PolicyElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_policy *_policy, int writeNamespaces);

/**
 * Frees the children of a Policy.
 *
 * @param _policy The Policy whose children are to be free.
 */
static void freeNs0PolicyElement(struct openinsurance_ns0_policy *_policy);

/**
 * Reads a Policy from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Policy, or NULL in case of error.
 */
static struct openinsurance_ns0_policy *xmlTextReaderReadNs0PolicyType(xmlTextReaderPtr reader);

/**
 * Writes a Policy to XML.
 *
 * @param writer The XML writer.
 * @param _policy The Policy to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PolicyType(xmlTextWriterPtr writer, struct openinsurance_ns0_policy *_policy);

/**
 * Frees the elements of a Policy.
 *
 * @param _policy The Policy to free.
 */
static void freeNs0PolicyType(struct openinsurance_ns0_policy *_policy);

#endif /* DEF_openinsurance_ns0_policy_H */
#ifndef DEF_openinsurance_ns0_towingCompany_H
#define DEF_openinsurance_ns0_towingCompany_H

/**
 *  The Class TowingCompany.

 */
struct openinsurance_ns0_towingCompany {


  /**
   * the name
   */
  xmlChar *name;

  /**
   * the address1
   */
  xmlChar *address1;

  /**
   * the address2
   */
  xmlChar *address2;

  /**
   * the city
   */
  xmlChar *city;

  /**
   * the province
   */
  xmlChar *province;

  /**
   * the pinCode
   */
  xmlChar *pinCode;

  /**
   * the phone
   */
  int phone;

  /**
   * the emailId
   */
  xmlChar *emailId;
};

/**
 * Reads a TowingCompany element from XML. The element to be read is "towingCompany", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TowingCompany, or NULL in case of error.
 */
struct openinsurance_ns0_towingCompany *xml_read_openinsurance_ns0_towingCompany(xmlTextReaderPtr reader);

/**
 * Writes a TowingCompany to XML under element name "towingCompany".
 *
 * @param writer The XML writer.
 * @param _towingCompany The TowingCompany to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_openinsurance_ns0_towingCompany(xmlTextWriterPtr writer, struct openinsurance_ns0_towingCompany *_towingCompany);

/**
 * Frees a TowingCompany.
 *
 * @param _towingCompany The TowingCompany to free.
 */
void free_openinsurance_ns0_towingCompany(struct openinsurance_ns0_towingCompany *_towingCompany);

/**
 * Reads a TowingCompany element from XML. The element to be read is "towingCompany", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TowingCompany, or NULL in case of error.
 */
struct openinsurance_ns0_towingCompany *xmlTextReaderReadNs0TowingCompanyElement(xmlTextReaderPtr reader);

/**
 * Writes a TowingCompany to XML under element name "towingCompany".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _towingCompany The TowingCompany to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TowingCompanyElement(xmlTextWriterPtr writer, struct openinsurance_ns0_towingCompany *_towingCompany);

/**
 * Writes a TowingCompany to XML under element name "towingCompany".
 *
 * @param writer The XML writer.
 * @param _towingCompany The TowingCompany to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TowingCompanyElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_towingCompany *_towingCompany, int writeNamespaces);

/**
 * Frees the children of a TowingCompany.
 *
 * @param _towingCompany The TowingCompany whose children are to be free.
 */
static void freeNs0TowingCompanyElement(struct openinsurance_ns0_towingCompany *_towingCompany);

/**
 * Reads a TowingCompany from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TowingCompany, or NULL in case of error.
 */
static struct openinsurance_ns0_towingCompany *xmlTextReaderReadNs0TowingCompanyType(xmlTextReaderPtr reader);

/**
 * Writes a TowingCompany to XML.
 *
 * @param writer The XML writer.
 * @param _towingCompany The TowingCompany to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TowingCompanyType(xmlTextWriterPtr writer, struct openinsurance_ns0_towingCompany *_towingCompany);

/**
 * Frees the elements of a TowingCompany.
 *
 * @param _towingCompany The TowingCompany to free.
 */
static void freeNs0TowingCompanyType(struct openinsurance_ns0_towingCompany *_towingCompany);

#endif /* DEF_openinsurance_ns0_towingCompany_H */
#ifndef DEF_openinsurance_ns0_vehicle_H
#define DEF_openinsurance_ns0_vehicle_H

/**
 *  The Class Vehicle.

 */
struct openinsurance_ns0_vehicle {


  /**
   * the vehicleId
   */
  xmlChar *vehicleId;

  /**
   * the make
   */
  xmlChar *make;

  /**
   * the model
   */
  xmlChar *model;

  /**
   * the year
   */
  int year;

  /**
   * the vin
   */
  xmlChar *vin;

  /**
   * the licensePlate
   */
  xmlChar *licensePlate;

  /**
   * the vehiclePhoto
   */
  xmlChar *vehiclePhoto;
};

/**
 * Reads a Vehicle element from XML. The element to be read is "vehicle", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Vehicle, or NULL in case of error.
 */
struct openinsurance_ns0_vehicle *xml_read_openinsurance_ns0_vehicle(xmlTextReaderPtr reader);

/**
 * Writes a Vehicle to XML under element name "vehicle".
 *
 * @param writer The XML writer.
 * @param _vehicle The Vehicle to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_openinsurance_ns0_vehicle(xmlTextWriterPtr writer, struct openinsurance_ns0_vehicle *_vehicle);

/**
 * Frees a Vehicle.
 *
 * @param _vehicle The Vehicle to free.
 */
void free_openinsurance_ns0_vehicle(struct openinsurance_ns0_vehicle *_vehicle);

/**
 * Reads a Vehicle element from XML. The element to be read is "vehicle", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Vehicle, or NULL in case of error.
 */
struct openinsurance_ns0_vehicle *xmlTextReaderReadNs0VehicleElement(xmlTextReaderPtr reader);

/**
 * Writes a Vehicle to XML under element name "vehicle".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _vehicle The Vehicle to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0VehicleElement(xmlTextWriterPtr writer, struct openinsurance_ns0_vehicle *_vehicle);

/**
 * Writes a Vehicle to XML under element name "vehicle".
 *
 * @param writer The XML writer.
 * @param _vehicle The Vehicle to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0VehicleElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_vehicle *_vehicle, int writeNamespaces);

/**
 * Frees the children of a Vehicle.
 *
 * @param _vehicle The Vehicle whose children are to be free.
 */
static void freeNs0VehicleElement(struct openinsurance_ns0_vehicle *_vehicle);

/**
 * Reads a Vehicle from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Vehicle, or NULL in case of error.
 */
static struct openinsurance_ns0_vehicle *xmlTextReaderReadNs0VehicleType(xmlTextReaderPtr reader);

/**
 * Writes a Vehicle to XML.
 *
 * @param writer The XML writer.
 * @param _vehicle The Vehicle to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0VehicleType(xmlTextWriterPtr writer, struct openinsurance_ns0_vehicle *_vehicle);

/**
 * Frees the elements of a Vehicle.
 *
 * @param _vehicle The Vehicle to free.
 */
static void freeNs0VehicleType(struct openinsurance_ns0_vehicle *_vehicle);

#endif /* DEF_openinsurance_ns0_vehicle_H */
#ifndef DEF_openinsurance_ns0_billing_M
#define DEF_openinsurance_ns0_billing_M

/**
 * Reads a Billing element from XML. The element to be read is "billing", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Billing, or NULL in case of error.
 */
struct openinsurance_ns0_billing *xml_read_openinsurance_ns0_billing(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0BillingElement(reader);
}

/**
 * Writes a Billing to XML under element name "billing".
 *
 * @param writer The XML writer.
 * @param _billing The Billing to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_openinsurance_ns0_billing(xmlTextWriterPtr writer, struct openinsurance_ns0_billing *_billing) {
  return xmlTextWriterWriteNs0BillingElementNS(writer, _billing, 1);
}

/**
 * Frees a Billing.
 *
 * @param _billing The Billing to free.
 */
void free_openinsurance_ns0_billing(struct openinsurance_ns0_billing *_billing) {
  freeNs0BillingType(_billing);
  free(_billing);
}

/**
 * Reads a Billing element from XML. The element to be read is "billing", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Billing, or NULL in case of error.
 */
struct openinsurance_ns0_billing *xmlTextReaderReadNs0BillingElement(xmlTextReaderPtr reader) {
  struct openinsurance_ns0_billing *_billing = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "billing", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}billing.\n");
#endif
    _billing = xmlTextReaderReadNs0BillingType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_billing == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}billing failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}billing failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _billing;
}

/**
 * Writes a Billing to XML under element name "billing".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _billing The Billing to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0BillingElement(xmlTextWriterPtr writer, struct openinsurance_ns0_billing *_billing) {
  return xmlTextWriterWriteNs0BillingElementNS(writer, _billing, 0);
}

/**
 * Writes a Billing to XML under element name "billing".
 *
 * @param writer The XML writer.
 * @param _billing The Billing to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0BillingElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_billing *_billing, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "billing", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}billing. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}billing for root element {}billing...\n");
#endif
  status = xmlTextWriterWriteNs0BillingType(writer, _billing);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}billing. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}billing. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Billing.
 *
 * @param _billing The Billing whose children are to be free.
 */
static void freeNs0BillingElement(struct openinsurance_ns0_billing *_billing) {
  freeNs0BillingType(_billing);
}

/**
 * Reads a Billing from XML. The reader is assumed to be at the start element.
 *
 * @return the Billing, or NULL in case of error.
 */
static struct openinsurance_ns0_billing *xmlTextReaderReadNs0BillingType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct openinsurance_ns0_billing *_billing = calloc(1, sizeof(struct openinsurance_ns0_billing));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0BillingType(_billing);
        free(_billing);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "policyId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}policyId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}policyId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0BillingType(_billing);
          free(_billing);
          return NULL;
        }

        _billing->policyId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "policyBalance", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}policyBalance of type {http://www.w3.org/2001/XMLSchema}double.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDoubleType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}policyBalance of type {http://www.w3.org/2001/XMLSchema}double.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0BillingType(_billing);
          free(_billing);
          return NULL;
        }

        _billing->policyBalance = *((double*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "lastPaymentDate", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}lastPaymentDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}lastPaymentDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0BillingType(_billing);
          free(_billing);
          return NULL;
        }

        _billing->lastPaymentDate = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "amountBalance", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}amountBalance of type {http://www.w3.org/2001/XMLSchema}double.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDoubleType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}amountBalance of type {http://www.w3.org/2001/XMLSchema}double.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0BillingType(_billing);
          free(_billing);
          return NULL;
        }

        _billing->amountBalance = *((double*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}billing.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}billing. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _billing;
}

/**
 * Writes a Billing to XML.
 *
 * @param writer The XML writer.
 * @param _billing The Billing to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0BillingType(xmlTextWriterPtr writer, struct openinsurance_ns0_billing *_billing) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_billing->policyId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}policyId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}policyId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_billing->policyId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}policyId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}policyId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyBalance", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}policyBalance. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}double for element {}policyBalance...\n");
#endif
    status = xmlTextWriterWriteXsDoubleType(writer, &(_billing->policyBalance));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}double for element {}policyBalance. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}policyBalance. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_billing->lastPaymentDate != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lastPaymentDate", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}lastPaymentDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}lastPaymentDate...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_billing->lastPaymentDate));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}lastPaymentDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}lastPaymentDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "amountBalance", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}amountBalance. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}double for element {}amountBalance...\n");
#endif
    status = xmlTextWriterWriteXsDoubleType(writer, &(_billing->amountBalance));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}double for element {}amountBalance. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}amountBalance. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Billing.
 *
 * @param _billing The Billing to free.
 */
static void freeNs0BillingType(struct openinsurance_ns0_billing *_billing) {
  int i;
  if (_billing->policyId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor policyId of type openinsurance_ns0_billing...\n");
#endif
    freeXsStringType(_billing->policyId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor policyId of type openinsurance_ns0_billing...\n");
#endif
    free(_billing->policyId);
  }
  if (_billing->lastPaymentDate != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor lastPaymentDate of type openinsurance_ns0_billing...\n");
#endif
    freeXsDateTimeType(_billing->lastPaymentDate);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor lastPaymentDate of type openinsurance_ns0_billing...\n");
#endif
    free(_billing->lastPaymentDate);
  }
}
#endif /* DEF_openinsurance_ns0_billing_M */
#ifndef DEF_openinsurance_ns0_bodyShop_M
#define DEF_openinsurance_ns0_bodyShop_M

/**
 * Reads a BodyShop element from XML. The element to be read is "bodyShop", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The BodyShop, or NULL in case of error.
 */
struct openinsurance_ns0_bodyShop *xml_read_openinsurance_ns0_bodyShop(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0BodyShopElement(reader);
}

/**
 * Writes a BodyShop to XML under element name "bodyShop".
 *
 * @param writer The XML writer.
 * @param _bodyShop The BodyShop to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_openinsurance_ns0_bodyShop(xmlTextWriterPtr writer, struct openinsurance_ns0_bodyShop *_bodyShop) {
  return xmlTextWriterWriteNs0BodyShopElementNS(writer, _bodyShop, 1);
}

/**
 * Frees a BodyShop.
 *
 * @param _bodyShop The BodyShop to free.
 */
void free_openinsurance_ns0_bodyShop(struct openinsurance_ns0_bodyShop *_bodyShop) {
  freeNs0BodyShopType(_bodyShop);
  free(_bodyShop);
}

/**
 * Reads a BodyShop element from XML. The element to be read is "bodyShop", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The BodyShop, or NULL in case of error.
 */
struct openinsurance_ns0_bodyShop *xmlTextReaderReadNs0BodyShopElement(xmlTextReaderPtr reader) {
  struct openinsurance_ns0_bodyShop *_bodyShop = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "bodyShop", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}bodyShop.\n");
#endif
    _bodyShop = xmlTextReaderReadNs0BodyShopType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_bodyShop == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}bodyShop failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}bodyShop failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _bodyShop;
}

/**
 * Writes a BodyShop to XML under element name "bodyShop".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _bodyShop The BodyShop to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0BodyShopElement(xmlTextWriterPtr writer, struct openinsurance_ns0_bodyShop *_bodyShop) {
  return xmlTextWriterWriteNs0BodyShopElementNS(writer, _bodyShop, 0);
}

/**
 * Writes a BodyShop to XML under element name "bodyShop".
 *
 * @param writer The XML writer.
 * @param _bodyShop The BodyShop to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0BodyShopElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_bodyShop *_bodyShop, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "bodyShop", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}bodyShop. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}bodyShop for root element {}bodyShop...\n");
#endif
  status = xmlTextWriterWriteNs0BodyShopType(writer, _bodyShop);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}bodyShop. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}bodyShop. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a BodyShop.
 *
 * @param _bodyShop The BodyShop whose children are to be free.
 */
static void freeNs0BodyShopElement(struct openinsurance_ns0_bodyShop *_bodyShop) {
  freeNs0BodyShopType(_bodyShop);
}

/**
 * Reads a BodyShop from XML. The reader is assumed to be at the start element.
 *
 * @return the BodyShop, or NULL in case of error.
 */
static struct openinsurance_ns0_bodyShop *xmlTextReaderReadNs0BodyShopType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct openinsurance_ns0_bodyShop *_bodyShop = calloc(1, sizeof(struct openinsurance_ns0_bodyShop));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0BodyShopType(_bodyShop);
        free(_bodyShop);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0BodyShopType(_bodyShop);
          free(_bodyShop);
          return NULL;
        }

        _bodyShop->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "address1", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}address1 of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}address1 of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0BodyShopType(_bodyShop);
          free(_bodyShop);
          return NULL;
        }

        _bodyShop->address1 = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "address2", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}address2 of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}address2 of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0BodyShopType(_bodyShop);
          free(_bodyShop);
          return NULL;
        }

        _bodyShop->address2 = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "city", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0BodyShopType(_bodyShop);
          free(_bodyShop);
          return NULL;
        }

        _bodyShop->city = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "province", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}province of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}province of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0BodyShopType(_bodyShop);
          free(_bodyShop);
          return NULL;
        }

        _bodyShop->province = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "pinCode", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}pinCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}pinCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0BodyShopType(_bodyShop);
          free(_bodyShop);
          return NULL;
        }

        _bodyShop->pinCode = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "phone", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}phone of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}phone of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0BodyShopType(_bodyShop);
          free(_bodyShop);
          return NULL;
        }

        _bodyShop->phone = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "emailId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}emailId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}emailId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0BodyShopType(_bodyShop);
          free(_bodyShop);
          return NULL;
        }

        _bodyShop->emailId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}bodyShop.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}bodyShop. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _bodyShop;
}

/**
 * Writes a BodyShop to XML.
 *
 * @param writer The XML writer.
 * @param _bodyShop The BodyShop to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0BodyShopType(xmlTextWriterPtr writer, struct openinsurance_ns0_bodyShop *_bodyShop) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_bodyShop->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_bodyShop->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_bodyShop->address1 != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address1", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}address1. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}address1...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_bodyShop->address1));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}address1. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}address1. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_bodyShop->address2 != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address2", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}address2. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}address2...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_bodyShop->address2));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}address2. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}address2. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_bodyShop->city != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "city", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}city. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}city...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_bodyShop->city));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}city. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}city. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_bodyShop->province != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "province", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}province. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}province...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_bodyShop->province));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}province. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}province. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_bodyShop->pinCode != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "pinCode", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}pinCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}pinCode...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_bodyShop->pinCode));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}pinCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}pinCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "phone", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}phone. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}phone...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_bodyShop->phone));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}phone. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}phone. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_bodyShop->emailId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "emailId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}emailId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}emailId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_bodyShop->emailId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}emailId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}emailId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a BodyShop.
 *
 * @param _bodyShop The BodyShop to free.
 */
static void freeNs0BodyShopType(struct openinsurance_ns0_bodyShop *_bodyShop) {
  int i;
  if (_bodyShop->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type openinsurance_ns0_bodyShop...\n");
#endif
    freeXsStringType(_bodyShop->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type openinsurance_ns0_bodyShop...\n");
#endif
    free(_bodyShop->name);
  }
  if (_bodyShop->address1 != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor address1 of type openinsurance_ns0_bodyShop...\n");
#endif
    freeXsStringType(_bodyShop->address1);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor address1 of type openinsurance_ns0_bodyShop...\n");
#endif
    free(_bodyShop->address1);
  }
  if (_bodyShop->address2 != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor address2 of type openinsurance_ns0_bodyShop...\n");
#endif
    freeXsStringType(_bodyShop->address2);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor address2 of type openinsurance_ns0_bodyShop...\n");
#endif
    free(_bodyShop->address2);
  }
  if (_bodyShop->city != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor city of type openinsurance_ns0_bodyShop...\n");
#endif
    freeXsStringType(_bodyShop->city);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor city of type openinsurance_ns0_bodyShop...\n");
#endif
    free(_bodyShop->city);
  }
  if (_bodyShop->province != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor province of type openinsurance_ns0_bodyShop...\n");
#endif
    freeXsStringType(_bodyShop->province);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor province of type openinsurance_ns0_bodyShop...\n");
#endif
    free(_bodyShop->province);
  }
  if (_bodyShop->pinCode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor pinCode of type openinsurance_ns0_bodyShop...\n");
#endif
    freeXsStringType(_bodyShop->pinCode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor pinCode of type openinsurance_ns0_bodyShop...\n");
#endif
    free(_bodyShop->pinCode);
  }
  if (_bodyShop->emailId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor emailId of type openinsurance_ns0_bodyShop...\n");
#endif
    freeXsStringType(_bodyShop->emailId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor emailId of type openinsurance_ns0_bodyShop...\n");
#endif
    free(_bodyShop->emailId);
  }
}
#endif /* DEF_openinsurance_ns0_bodyShop_M */
#ifndef DEF_openinsurance_ns0_claim_M
#define DEF_openinsurance_ns0_claim_M

/**
 * Reads a Claim element from XML. The element to be read is "claim", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Claim, or NULL in case of error.
 */
struct openinsurance_ns0_claim *xml_read_openinsurance_ns0_claim(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ClaimElement(reader);
}

/**
 * Writes a Claim to XML under element name "claim".
 *
 * @param writer The XML writer.
 * @param _claim The Claim to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_openinsurance_ns0_claim(xmlTextWriterPtr writer, struct openinsurance_ns0_claim *_claim) {
  return xmlTextWriterWriteNs0ClaimElementNS(writer, _claim, 1);
}

/**
 * Frees a Claim.
 *
 * @param _claim The Claim to free.
 */
void free_openinsurance_ns0_claim(struct openinsurance_ns0_claim *_claim) {
  freeNs0ClaimType(_claim);
  free(_claim);
}

/**
 * Reads a Claim element from XML. The element to be read is "claim", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Claim, or NULL in case of error.
 */
struct openinsurance_ns0_claim *xmlTextReaderReadNs0ClaimElement(xmlTextReaderPtr reader) {
  struct openinsurance_ns0_claim *_claim = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "claim", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}claim.\n");
#endif
    _claim = xmlTextReaderReadNs0ClaimType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_claim == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}claim failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}claim failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _claim;
}

/**
 * Writes a Claim to XML under element name "claim".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _claim The Claim to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ClaimElement(xmlTextWriterPtr writer, struct openinsurance_ns0_claim *_claim) {
  return xmlTextWriterWriteNs0ClaimElementNS(writer, _claim, 0);
}

/**
 * Writes a Claim to XML under element name "claim".
 *
 * @param writer The XML writer.
 * @param _claim The Claim to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ClaimElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_claim *_claim, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "claim", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}claim. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}claim for root element {}claim...\n");
#endif
  status = xmlTextWriterWriteNs0ClaimType(writer, _claim);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}claim. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}claim. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Claim.
 *
 * @param _claim The Claim whose children are to be free.
 */
static void freeNs0ClaimElement(struct openinsurance_ns0_claim *_claim) {
  freeNs0ClaimType(_claim);
}

/**
 * Reads a Claim from XML. The reader is assumed to be at the start element.
 *
 * @return the Claim, or NULL in case of error.
 */
static struct openinsurance_ns0_claim *xmlTextReaderReadNs0ClaimType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct openinsurance_ns0_claim *_claim = calloc(1, sizeof(struct openinsurance_ns0_claim));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ClaimType(_claim);
        free(_claim);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "claimId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}claimId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}claimId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ClaimType(_claim);
          free(_claim);
          return NULL;
        }

        _claim->claimId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "claimDescription", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}claimDescription of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}claimDescription of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ClaimType(_claim);
          free(_claim);
          return NULL;
        }

        _claim->claimDescription = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}claim.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}claim. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _claim;
}

/**
 * Writes a Claim to XML.
 *
 * @param writer The XML writer.
 * @param _claim The Claim to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ClaimType(xmlTextWriterPtr writer, struct openinsurance_ns0_claim *_claim) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_claim->claimId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "claimId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}claimId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}claimId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_claim->claimId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}claimId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}claimId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_claim->claimDescription != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "claimDescription", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}claimDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}claimDescription...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_claim->claimDescription));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}claimDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}claimDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Claim.
 *
 * @param _claim The Claim to free.
 */
static void freeNs0ClaimType(struct openinsurance_ns0_claim *_claim) {
  int i;
  if (_claim->claimId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor claimId of type openinsurance_ns0_claim...\n");
#endif
    freeXsStringType(_claim->claimId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor claimId of type openinsurance_ns0_claim...\n");
#endif
    free(_claim->claimId);
  }
  if (_claim->claimDescription != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor claimDescription of type openinsurance_ns0_claim...\n");
#endif
    freeXsStringType(_claim->claimDescription);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor claimDescription of type openinsurance_ns0_claim...\n");
#endif
    free(_claim->claimDescription);
  }
}
#endif /* DEF_openinsurance_ns0_claim_M */
#ifndef DEF_openinsurance_ns0_coverage_M
#define DEF_openinsurance_ns0_coverage_M

/**
 * Reads a Coverage element from XML. The element to be read is "coverage", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Coverage, or NULL in case of error.
 */
struct openinsurance_ns0_coverage *xml_read_openinsurance_ns0_coverage(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0CoverageElement(reader);
}

/**
 * Writes a Coverage to XML under element name "coverage".
 *
 * @param writer The XML writer.
 * @param _coverage The Coverage to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_openinsurance_ns0_coverage(xmlTextWriterPtr writer, struct openinsurance_ns0_coverage *_coverage) {
  return xmlTextWriterWriteNs0CoverageElementNS(writer, _coverage, 1);
}

/**
 * Frees a Coverage.
 *
 * @param _coverage The Coverage to free.
 */
void free_openinsurance_ns0_coverage(struct openinsurance_ns0_coverage *_coverage) {
  freeNs0CoverageType(_coverage);
  free(_coverage);
}

/**
 * Reads a Coverage element from XML. The element to be read is "coverage", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Coverage, or NULL in case of error.
 */
struct openinsurance_ns0_coverage *xmlTextReaderReadNs0CoverageElement(xmlTextReaderPtr reader) {
  struct openinsurance_ns0_coverage *_coverage = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "coverage", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}coverage.\n");
#endif
    _coverage = xmlTextReaderReadNs0CoverageType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_coverage == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}coverage failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}coverage failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _coverage;
}

/**
 * Writes a Coverage to XML under element name "coverage".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _coverage The Coverage to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0CoverageElement(xmlTextWriterPtr writer, struct openinsurance_ns0_coverage *_coverage) {
  return xmlTextWriterWriteNs0CoverageElementNS(writer, _coverage, 0);
}

/**
 * Writes a Coverage to XML under element name "coverage".
 *
 * @param writer The XML writer.
 * @param _coverage The Coverage to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0CoverageElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_coverage *_coverage, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "coverage", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}coverage. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}coverage for root element {}coverage...\n");
#endif
  status = xmlTextWriterWriteNs0CoverageType(writer, _coverage);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}coverage. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}coverage. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Coverage.
 *
 * @param _coverage The Coverage whose children are to be free.
 */
static void freeNs0CoverageElement(struct openinsurance_ns0_coverage *_coverage) {
  freeNs0CoverageType(_coverage);
}

/**
 * Reads a Coverage from XML. The reader is assumed to be at the start element.
 *
 * @return the Coverage, or NULL in case of error.
 */
static struct openinsurance_ns0_coverage *xmlTextReaderReadNs0CoverageType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct openinsurance_ns0_coverage *_coverage = calloc(1, sizeof(struct openinsurance_ns0_coverage));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0CoverageType(_coverage);
        free(_coverage);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "coverageId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}coverageId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}coverageId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CoverageType(_coverage);
          free(_coverage);
          return NULL;
        }

        _coverage->coverageId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "coverageTypeId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}coverageTypeId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}coverageTypeId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CoverageType(_coverage);
          free(_coverage);
          return NULL;
        }

        _coverage->coverageTypeId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "coverageAmount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}coverageAmount of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}coverageAmount of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CoverageType(_coverage);
          free(_coverage);
          return NULL;
        }

        _coverage->coverageAmount = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "coverageLimit", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}coverageLimit of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}coverageLimit of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CoverageType(_coverage);
          free(_coverage);
          return NULL;
        }

        _coverage->coverageLimit = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "deductible", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}deductible of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}deductible of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CoverageType(_coverage);
          free(_coverage);
          return NULL;
        }

        _coverage->deductible = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}coverage.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}coverage. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _coverage;
}

/**
 * Writes a Coverage to XML.
 *
 * @param writer The XML writer.
 * @param _coverage The Coverage to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0CoverageType(xmlTextWriterPtr writer, struct openinsurance_ns0_coverage *_coverage) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_coverage->coverageId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "coverageId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}coverageId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}coverageId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_coverage->coverageId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}coverageId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}coverageId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_coverage->coverageTypeId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "coverageTypeId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}coverageTypeId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}coverageTypeId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_coverage->coverageTypeId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}coverageTypeId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}coverageTypeId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_coverage->coverageAmount != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "coverageAmount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}coverageAmount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}coverageAmount...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_coverage->coverageAmount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}coverageAmount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}coverageAmount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_coverage->coverageLimit != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "coverageLimit", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}coverageLimit. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}coverageLimit...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_coverage->coverageLimit));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}coverageLimit. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}coverageLimit. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_coverage->deductible != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "deductible", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}deductible. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}deductible...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_coverage->deductible));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}deductible. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}deductible. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Coverage.
 *
 * @param _coverage The Coverage to free.
 */
static void freeNs0CoverageType(struct openinsurance_ns0_coverage *_coverage) {
  int i;
  if (_coverage->coverageId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor coverageId of type openinsurance_ns0_coverage...\n");
#endif
    freeXsStringType(_coverage->coverageId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor coverageId of type openinsurance_ns0_coverage...\n");
#endif
    free(_coverage->coverageId);
  }
  if (_coverage->coverageTypeId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor coverageTypeId of type openinsurance_ns0_coverage...\n");
#endif
    freeXsStringType(_coverage->coverageTypeId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor coverageTypeId of type openinsurance_ns0_coverage...\n");
#endif
    free(_coverage->coverageTypeId);
  }
  if (_coverage->coverageAmount != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor coverageAmount of type openinsurance_ns0_coverage...\n");
#endif
    freeXsStringType(_coverage->coverageAmount);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor coverageAmount of type openinsurance_ns0_coverage...\n");
#endif
    free(_coverage->coverageAmount);
  }
  if (_coverage->coverageLimit != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor coverageLimit of type openinsurance_ns0_coverage...\n");
#endif
    freeXsStringType(_coverage->coverageLimit);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor coverageLimit of type openinsurance_ns0_coverage...\n");
#endif
    free(_coverage->coverageLimit);
  }
  if (_coverage->deductible != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor deductible of type openinsurance_ns0_coverage...\n");
#endif
    freeXsStringType(_coverage->deductible);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor deductible of type openinsurance_ns0_coverage...\n");
#endif
    free(_coverage->deductible);
  }
}
#endif /* DEF_openinsurance_ns0_coverage_M */
#ifndef DEF_openinsurance_ns0_driver_M
#define DEF_openinsurance_ns0_driver_M

/**
 * Reads a Driver element from XML. The element to be read is "driver", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Driver, or NULL in case of error.
 */
struct openinsurance_ns0_driver *xml_read_openinsurance_ns0_driver(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0DriverElement(reader);
}

/**
 * Writes a Driver to XML under element name "driver".
 *
 * @param writer The XML writer.
 * @param _driver The Driver to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_openinsurance_ns0_driver(xmlTextWriterPtr writer, struct openinsurance_ns0_driver *_driver) {
  return xmlTextWriterWriteNs0DriverElementNS(writer, _driver, 1);
}

/**
 * Frees a Driver.
 *
 * @param _driver The Driver to free.
 */
void free_openinsurance_ns0_driver(struct openinsurance_ns0_driver *_driver) {
  freeNs0DriverType(_driver);
  free(_driver);
}

/**
 * Reads a Driver element from XML. The element to be read is "driver", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Driver, or NULL in case of error.
 */
struct openinsurance_ns0_driver *xmlTextReaderReadNs0DriverElement(xmlTextReaderPtr reader) {
  struct openinsurance_ns0_driver *_driver = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "driver", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}driver.\n");
#endif
    _driver = xmlTextReaderReadNs0DriverType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_driver == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}driver failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}driver failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _driver;
}

/**
 * Writes a Driver to XML under element name "driver".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _driver The Driver to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0DriverElement(xmlTextWriterPtr writer, struct openinsurance_ns0_driver *_driver) {
  return xmlTextWriterWriteNs0DriverElementNS(writer, _driver, 0);
}

/**
 * Writes a Driver to XML under element name "driver".
 *
 * @param writer The XML writer.
 * @param _driver The Driver to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0DriverElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_driver *_driver, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "driver", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}driver. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}driver for root element {}driver...\n");
#endif
  status = xmlTextWriterWriteNs0DriverType(writer, _driver);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}driver. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}driver. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Driver.
 *
 * @param _driver The Driver whose children are to be free.
 */
static void freeNs0DriverElement(struct openinsurance_ns0_driver *_driver) {
  freeNs0DriverType(_driver);
}

/**
 * Reads a Driver from XML. The reader is assumed to be at the start element.
 *
 * @return the Driver, or NULL in case of error.
 */
static struct openinsurance_ns0_driver *xmlTextReaderReadNs0DriverType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct openinsurance_ns0_driver *_driver = calloc(1, sizeof(struct openinsurance_ns0_driver));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0DriverType(_driver);
        free(_driver);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "driverId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}driverId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}driverId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DriverType(_driver);
          free(_driver);
          return NULL;
        }

        _driver->driverId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "driverName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}driverName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}driverName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DriverType(_driver);
          free(_driver);
          return NULL;
        }

        _driver->driverName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "gender", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}gender of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}gender of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DriverType(_driver);
          free(_driver);
          return NULL;
        }

        _driver->gender = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "driverPhoto", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}driverPhoto of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}driverPhoto of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DriverType(_driver);
          free(_driver);
          return NULL;
        }

        _driver->driverPhoto = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "dateOfBirth", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}dateOfBirth of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}dateOfBirth of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DriverType(_driver);
          free(_driver);
          return NULL;
        }

        _driver->dateOfBirth = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "driverLicenseNumber", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}driverLicenseNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}driverLicenseNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DriverType(_driver);
          free(_driver);
          return NULL;
        }

        _driver->driverLicenseNumber = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "driverClass", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}driverClass of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}driverClass of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DriverType(_driver);
          free(_driver);
          return NULL;
        }

        _driver->driverClass = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "address", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DriverType(_driver);
          free(_driver);
          return NULL;
        }

        _driver->address = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "eyeColor", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}eyeColor of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}eyeColor of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DriverType(_driver);
          free(_driver);
          return NULL;
        }

        _driver->eyeColor = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "height", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}height of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}height of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DriverType(_driver);
          free(_driver);
          return NULL;
        }

        _driver->height = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "dateOfIssue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}dateOfIssue of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}dateOfIssue of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DriverType(_driver);
          free(_driver);
          return NULL;
        }

        _driver->dateOfIssue = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "expiryDate", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}expiryDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}expiryDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DriverType(_driver);
          free(_driver);
          return NULL;
        }

        _driver->expiryDate = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "licensePhoto", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}licensePhoto of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}licensePhoto of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DriverType(_driver);
          free(_driver);
          return NULL;
        }

        _driver->licensePhoto = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}driver.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}driver. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _driver;
}

/**
 * Writes a Driver to XML.
 *
 * @param writer The XML writer.
 * @param _driver The Driver to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0DriverType(xmlTextWriterPtr writer, struct openinsurance_ns0_driver *_driver) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_driver->driverId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "driverId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}driverId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}driverId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_driver->driverId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}driverId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}driverId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_driver->driverName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "driverName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}driverName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}driverName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_driver->driverName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}driverName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}driverName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_driver->gender != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "gender", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}gender. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}gender...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_driver->gender));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}gender. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}gender. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_driver->driverPhoto != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "driverPhoto", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}driverPhoto. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}driverPhoto...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_driver->driverPhoto));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}driverPhoto. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}driverPhoto. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_driver->dateOfBirth != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dateOfBirth", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}dateOfBirth. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}dateOfBirth...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_driver->dateOfBirth));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}dateOfBirth. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}dateOfBirth. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_driver->driverLicenseNumber != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "driverLicenseNumber", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}driverLicenseNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}driverLicenseNumber...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_driver->driverLicenseNumber));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}driverLicenseNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}driverLicenseNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_driver->driverClass != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "driverClass", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}driverClass. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}driverClass...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_driver->driverClass));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}driverClass. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}driverClass. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_driver->address != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}address...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_driver->address));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_driver->eyeColor != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "eyeColor", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}eyeColor. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}eyeColor...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_driver->eyeColor));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}eyeColor. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}eyeColor. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_driver->height != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "height", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}height. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}height...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_driver->height));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}height. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}height. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_driver->dateOfIssue != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dateOfIssue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}dateOfIssue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}dateOfIssue...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_driver->dateOfIssue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}dateOfIssue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}dateOfIssue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_driver->expiryDate != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "expiryDate", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}expiryDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}expiryDate...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_driver->expiryDate));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}expiryDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}expiryDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_driver->licensePhoto != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "licensePhoto", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}licensePhoto. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}licensePhoto...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_driver->licensePhoto));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}licensePhoto. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}licensePhoto. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Driver.
 *
 * @param _driver The Driver to free.
 */
static void freeNs0DriverType(struct openinsurance_ns0_driver *_driver) {
  int i;
  if (_driver->driverId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor driverId of type openinsurance_ns0_driver...\n");
#endif
    freeXsStringType(_driver->driverId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor driverId of type openinsurance_ns0_driver...\n");
#endif
    free(_driver->driverId);
  }
  if (_driver->driverName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor driverName of type openinsurance_ns0_driver...\n");
#endif
    freeXsStringType(_driver->driverName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor driverName of type openinsurance_ns0_driver...\n");
#endif
    free(_driver->driverName);
  }
  if (_driver->gender != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor gender of type openinsurance_ns0_driver...\n");
#endif
    freeXsStringType(_driver->gender);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor gender of type openinsurance_ns0_driver...\n");
#endif
    free(_driver->gender);
  }
  if (_driver->driverPhoto != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor driverPhoto of type openinsurance_ns0_driver...\n");
#endif
    freeXsStringType(_driver->driverPhoto);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor driverPhoto of type openinsurance_ns0_driver...\n");
#endif
    free(_driver->driverPhoto);
  }
  if (_driver->dateOfBirth != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor dateOfBirth of type openinsurance_ns0_driver...\n");
#endif
    freeXsDateTimeType(_driver->dateOfBirth);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor dateOfBirth of type openinsurance_ns0_driver...\n");
#endif
    free(_driver->dateOfBirth);
  }
  if (_driver->driverLicenseNumber != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor driverLicenseNumber of type openinsurance_ns0_driver...\n");
#endif
    freeXsStringType(_driver->driverLicenseNumber);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor driverLicenseNumber of type openinsurance_ns0_driver...\n");
#endif
    free(_driver->driverLicenseNumber);
  }
  if (_driver->driverClass != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor driverClass of type openinsurance_ns0_driver...\n");
#endif
    freeXsStringType(_driver->driverClass);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor driverClass of type openinsurance_ns0_driver...\n");
#endif
    free(_driver->driverClass);
  }
  if (_driver->address != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor address of type openinsurance_ns0_driver...\n");
#endif
    freeXsStringType(_driver->address);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor address of type openinsurance_ns0_driver...\n");
#endif
    free(_driver->address);
  }
  if (_driver->eyeColor != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor eyeColor of type openinsurance_ns0_driver...\n");
#endif
    freeXsStringType(_driver->eyeColor);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor eyeColor of type openinsurance_ns0_driver...\n");
#endif
    free(_driver->eyeColor);
  }
  if (_driver->height != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor height of type openinsurance_ns0_driver...\n");
#endif
    freeXsStringType(_driver->height);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor height of type openinsurance_ns0_driver...\n");
#endif
    free(_driver->height);
  }
  if (_driver->dateOfIssue != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor dateOfIssue of type openinsurance_ns0_driver...\n");
#endif
    freeXsDateTimeType(_driver->dateOfIssue);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor dateOfIssue of type openinsurance_ns0_driver...\n");
#endif
    free(_driver->dateOfIssue);
  }
  if (_driver->expiryDate != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor expiryDate of type openinsurance_ns0_driver...\n");
#endif
    freeXsDateTimeType(_driver->expiryDate);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor expiryDate of type openinsurance_ns0_driver...\n");
#endif
    free(_driver->expiryDate);
  }
  if (_driver->licensePhoto != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor licensePhoto of type openinsurance_ns0_driver...\n");
#endif
    freeXsStringType(_driver->licensePhoto);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor licensePhoto of type openinsurance_ns0_driver...\n");
#endif
    free(_driver->licensePhoto);
  }
}
#endif /* DEF_openinsurance_ns0_driver_M */
#ifndef DEF_openinsurance_ns0_faqDetail_M
#define DEF_openinsurance_ns0_faqDetail_M

/**
 * Reads a FaqDetail from XML. The reader is assumed to be at the start element.
 *
 * @return the FaqDetail, or NULL in case of error.
 */
static struct openinsurance_ns0_faqDetail *xmlTextReaderReadNs0FaqDetailType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct openinsurance_ns0_faqDetail *_faqDetail = calloc(1, sizeof(struct openinsurance_ns0_faqDetail));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0FaqDetailType(_faqDetail);
        free(_faqDetail);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "faqId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}faqId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}faqId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FaqDetailType(_faqDetail);
          free(_faqDetail);
          return NULL;
        }

        _faqDetail->faqId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "faqDetails", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}faqDetails of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}faqDetails of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FaqDetailType(_faqDetail);
          free(_faqDetail);
          return NULL;
        }

        _faqDetail->faqDetails = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}faqDetail.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}faqDetail. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _faqDetail;
}

/**
 * Writes a FaqDetail to XML.
 *
 * @param writer The XML writer.
 * @param _faqDetail The FaqDetail to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0FaqDetailType(xmlTextWriterPtr writer, struct openinsurance_ns0_faqDetail *_faqDetail) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_faqDetail->faqId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "faqId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}faqId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}faqId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_faqDetail->faqId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}faqId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}faqId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_faqDetail->faqDetails != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "faqDetails", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}faqDetails. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}faqDetails...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_faqDetail->faqDetails));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}faqDetails. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}faqDetails. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a FaqDetail.
 *
 * @param _faqDetail The FaqDetail to free.
 */
static void freeNs0FaqDetailType(struct openinsurance_ns0_faqDetail *_faqDetail) {
  int i;
  if (_faqDetail->faqId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor faqId of type openinsurance_ns0_faqDetail...\n");
#endif
    freeXsStringType(_faqDetail->faqId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor faqId of type openinsurance_ns0_faqDetail...\n");
#endif
    free(_faqDetail->faqId);
  }
  if (_faqDetail->faqDetails != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor faqDetails of type openinsurance_ns0_faqDetail...\n");
#endif
    freeXsStringType(_faqDetail->faqDetails);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor faqDetails of type openinsurance_ns0_faqDetail...\n");
#endif
    free(_faqDetail->faqDetails);
  }
}
#endif /* DEF_openinsurance_ns0_faqDetail_M */
#ifndef DEF_openinsurance_ns0_idCardDetails_M
#define DEF_openinsurance_ns0_idCardDetails_M

/**
 * Reads a IdCardDetails element from XML. The element to be read is "idCardDetails", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The IdCardDetails, or NULL in case of error.
 */
struct openinsurance_ns0_idCardDetails *xml_read_openinsurance_ns0_idCardDetails(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0IdCardDetailsElement(reader);
}

/**
 * Writes a IdCardDetails to XML under element name "idCardDetails".
 *
 * @param writer The XML writer.
 * @param _idCardDetails The IdCardDetails to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_openinsurance_ns0_idCardDetails(xmlTextWriterPtr writer, struct openinsurance_ns0_idCardDetails *_idCardDetails) {
  return xmlTextWriterWriteNs0IdCardDetailsElementNS(writer, _idCardDetails, 1);
}

/**
 * Frees a IdCardDetails.
 *
 * @param _idCardDetails The IdCardDetails to free.
 */
void free_openinsurance_ns0_idCardDetails(struct openinsurance_ns0_idCardDetails *_idCardDetails) {
  freeNs0IdCardDetailsType(_idCardDetails);
  free(_idCardDetails);
}

/**
 * Reads a IdCardDetails element from XML. The element to be read is "idCardDetails", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The IdCardDetails, or NULL in case of error.
 */
struct openinsurance_ns0_idCardDetails *xmlTextReaderReadNs0IdCardDetailsElement(xmlTextReaderPtr reader) {
  struct openinsurance_ns0_idCardDetails *_idCardDetails = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "idCardDetails", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}idCardDetails.\n");
#endif
    _idCardDetails = xmlTextReaderReadNs0IdCardDetailsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_idCardDetails == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}idCardDetails failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}idCardDetails failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _idCardDetails;
}

/**
 * Writes a IdCardDetails to XML under element name "idCardDetails".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _idCardDetails The IdCardDetails to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0IdCardDetailsElement(xmlTextWriterPtr writer, struct openinsurance_ns0_idCardDetails *_idCardDetails) {
  return xmlTextWriterWriteNs0IdCardDetailsElementNS(writer, _idCardDetails, 0);
}

/**
 * Writes a IdCardDetails to XML under element name "idCardDetails".
 *
 * @param writer The XML writer.
 * @param _idCardDetails The IdCardDetails to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0IdCardDetailsElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_idCardDetails *_idCardDetails, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "idCardDetails", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}idCardDetails. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}idCardDetails for root element {}idCardDetails...\n");
#endif
  status = xmlTextWriterWriteNs0IdCardDetailsType(writer, _idCardDetails);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}idCardDetails. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}idCardDetails. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a IdCardDetails.
 *
 * @param _idCardDetails The IdCardDetails whose children are to be free.
 */
static void freeNs0IdCardDetailsElement(struct openinsurance_ns0_idCardDetails *_idCardDetails) {
  freeNs0IdCardDetailsType(_idCardDetails);
}

/**
 * Reads a IdCardDetails from XML. The reader is assumed to be at the start element.
 *
 * @return the IdCardDetails, or NULL in case of error.
 */
static struct openinsurance_ns0_idCardDetails *xmlTextReaderReadNs0IdCardDetailsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct openinsurance_ns0_idCardDetails *_idCardDetails = calloc(1, sizeof(struct openinsurance_ns0_idCardDetails));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0IdCardDetailsType(_idCardDetails);
        free(_idCardDetails);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "vehicle", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}vehicle of type {}vehicle.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0VehicleType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}vehicle of type {}vehicle.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0IdCardDetailsType(_idCardDetails);
          free(_idCardDetails);
          return NULL;
        }

        _idCardDetails->vehicle = ((struct openinsurance_ns0_vehicle*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "policy", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}policy of type {}policy.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0PolicyType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}policy of type {}policy.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0IdCardDetailsType(_idCardDetails);
          free(_idCardDetails);
          return NULL;
        }

        _idCardDetails->policy = ((struct openinsurance_ns0_policy*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "insuredPersons", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}insuredPersons of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}insuredPersons of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0IdCardDetailsType(_idCardDetails);
          free(_idCardDetails);
          return NULL;
        }

        _idCardDetails->insuredPersons = realloc(_idCardDetails->insuredPersons, (_idCardDetails->_sizeof_insuredPersons + 1) * sizeof(xmlChar));
        memcpy(&(_idCardDetails->insuredPersons[_idCardDetails->_sizeof_insuredPersons++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}idCardDetails.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}idCardDetails. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _idCardDetails;
}

/**
 * Writes a IdCardDetails to XML.
 *
 * @param writer The XML writer.
 * @param _idCardDetails The IdCardDetails to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0IdCardDetailsType(xmlTextWriterPtr writer, struct openinsurance_ns0_idCardDetails *_idCardDetails) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_idCardDetails->vehicle != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vehicle", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}vehicle. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}vehicle for element {}vehicle...\n");
#endif
    status = xmlTextWriterWriteNs0VehicleType(writer, (_idCardDetails->vehicle));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}vehicle for element {}vehicle. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}vehicle. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_idCardDetails->policy != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policy", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}policy. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}policy for element {}policy...\n");
#endif
    status = xmlTextWriterWriteNs0PolicyType(writer, (_idCardDetails->policy));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}policy for element {}policy. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}policy. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _idCardDetails->_sizeof_insuredPersons; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "insuredPersons", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}insuredPersons. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}insuredPersons...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_idCardDetails->insuredPersons[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}insuredPersons. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}insuredPersons. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a IdCardDetails.
 *
 * @param _idCardDetails The IdCardDetails to free.
 */
static void freeNs0IdCardDetailsType(struct openinsurance_ns0_idCardDetails *_idCardDetails) {
  int i;
  if (_idCardDetails->vehicle != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor vehicle of type openinsurance_ns0_idCardDetails...\n");
#endif
    freeNs0VehicleType(_idCardDetails->vehicle);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor vehicle of type openinsurance_ns0_idCardDetails...\n");
#endif
    free(_idCardDetails->vehicle);
  }
  if (_idCardDetails->policy != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor policy of type openinsurance_ns0_idCardDetails...\n");
#endif
    freeNs0PolicyType(_idCardDetails->policy);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor policy of type openinsurance_ns0_idCardDetails...\n");
#endif
    free(_idCardDetails->policy);
  }
  if (_idCardDetails->insuredPersons != NULL) {
    for (i = 0; i < _idCardDetails->_sizeof_insuredPersons; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor insuredPersons[%i] of type openinsurance_ns0_idCardDetails...\n", i);
#endif
      freeXsStringType(&(_idCardDetails->insuredPersons[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor insuredPersons of type openinsurance_ns0_idCardDetails...\n");
#endif
    free(_idCardDetails->insuredPersons);
  }
}
#endif /* DEF_openinsurance_ns0_idCardDetails_M */
#ifndef DEF_openinsurance_ns0_messageDetails_M
#define DEF_openinsurance_ns0_messageDetails_M

/**
 * Reads a MessageDetails element from XML. The element to be read is "messageDetails", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The MessageDetails, or NULL in case of error.
 */
struct openinsurance_ns0_messageDetails *xml_read_openinsurance_ns0_messageDetails(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0MessageDetailsElement(reader);
}

/**
 * Writes a MessageDetails to XML under element name "messageDetails".
 *
 * @param writer The XML writer.
 * @param _messageDetails The MessageDetails to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_openinsurance_ns0_messageDetails(xmlTextWriterPtr writer, struct openinsurance_ns0_messageDetails *_messageDetails) {
  return xmlTextWriterWriteNs0MessageDetailsElementNS(writer, _messageDetails, 1);
}

/**
 * Frees a MessageDetails.
 *
 * @param _messageDetails The MessageDetails to free.
 */
void free_openinsurance_ns0_messageDetails(struct openinsurance_ns0_messageDetails *_messageDetails) {
  freeNs0MessageDetailsType(_messageDetails);
  free(_messageDetails);
}

/**
 * Reads a MessageDetails element from XML. The element to be read is "messageDetails", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The MessageDetails, or NULL in case of error.
 */
struct openinsurance_ns0_messageDetails *xmlTextReaderReadNs0MessageDetailsElement(xmlTextReaderPtr reader) {
  struct openinsurance_ns0_messageDetails *_messageDetails = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "messageDetails", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}messageDetails.\n");
#endif
    _messageDetails = xmlTextReaderReadNs0MessageDetailsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_messageDetails == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}messageDetails failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}messageDetails failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _messageDetails;
}

/**
 * Writes a MessageDetails to XML under element name "messageDetails".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _messageDetails The MessageDetails to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0MessageDetailsElement(xmlTextWriterPtr writer, struct openinsurance_ns0_messageDetails *_messageDetails) {
  return xmlTextWriterWriteNs0MessageDetailsElementNS(writer, _messageDetails, 0);
}

/**
 * Writes a MessageDetails to XML under element name "messageDetails".
 *
 * @param writer The XML writer.
 * @param _messageDetails The MessageDetails to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0MessageDetailsElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_messageDetails *_messageDetails, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "messageDetails", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}messageDetails. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}messageDetails for root element {}messageDetails...\n");
#endif
  status = xmlTextWriterWriteNs0MessageDetailsType(writer, _messageDetails);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}messageDetails. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}messageDetails. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a MessageDetails.
 *
 * @param _messageDetails The MessageDetails whose children are to be free.
 */
static void freeNs0MessageDetailsElement(struct openinsurance_ns0_messageDetails *_messageDetails) {
  freeNs0MessageDetailsType(_messageDetails);
}

/**
 * Reads a MessageDetails from XML. The reader is assumed to be at the start element.
 *
 * @return the MessageDetails, or NULL in case of error.
 */
static struct openinsurance_ns0_messageDetails *xmlTextReaderReadNs0MessageDetailsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct openinsurance_ns0_messageDetails *_messageDetails = calloc(1, sizeof(struct openinsurance_ns0_messageDetails));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0MessageDetailsType(_messageDetails);
        free(_messageDetails);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "messageId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}messageId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}messageId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0MessageDetailsType(_messageDetails);
          free(_messageDetails);
          return NULL;
        }

        _messageDetails->messageId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "messageDetail", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}messageDetail of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}messageDetail of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0MessageDetailsType(_messageDetails);
          free(_messageDetails);
          return NULL;
        }

        _messageDetails->messageDetail = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}messageDetails.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}messageDetails. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _messageDetails;
}

/**
 * Writes a MessageDetails to XML.
 *
 * @param writer The XML writer.
 * @param _messageDetails The MessageDetails to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0MessageDetailsType(xmlTextWriterPtr writer, struct openinsurance_ns0_messageDetails *_messageDetails) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_messageDetails->messageId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "messageId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}messageId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}messageId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_messageDetails->messageId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}messageId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}messageId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_messageDetails->messageDetail != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "messageDetail", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}messageDetail. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}messageDetail...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_messageDetails->messageDetail));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}messageDetail. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}messageDetail. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a MessageDetails.
 *
 * @param _messageDetails The MessageDetails to free.
 */
static void freeNs0MessageDetailsType(struct openinsurance_ns0_messageDetails *_messageDetails) {
  int i;
  if (_messageDetails->messageId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor messageId of type openinsurance_ns0_messageDetails...\n");
#endif
    freeXsStringType(_messageDetails->messageId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor messageId of type openinsurance_ns0_messageDetails...\n");
#endif
    free(_messageDetails->messageId);
  }
  if (_messageDetails->messageDetail != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor messageDetail of type openinsurance_ns0_messageDetails...\n");
#endif
    freeXsStringType(_messageDetails->messageDetail);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor messageDetail of type openinsurance_ns0_messageDetails...\n");
#endif
    free(_messageDetails->messageDetail);
  }
}
#endif /* DEF_openinsurance_ns0_messageDetails_M */
#ifndef DEF_openinsurance_ns0_payment_M
#define DEF_openinsurance_ns0_payment_M

/**
 * Reads a Payment element from XML. The element to be read is "payment", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Payment, or NULL in case of error.
 */
struct openinsurance_ns0_payment *xml_read_openinsurance_ns0_payment(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PaymentElement(reader);
}

/**
 * Writes a Payment to XML under element name "payment".
 *
 * @param writer The XML writer.
 * @param _payment The Payment to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_openinsurance_ns0_payment(xmlTextWriterPtr writer, struct openinsurance_ns0_payment *_payment) {
  return xmlTextWriterWriteNs0PaymentElementNS(writer, _payment, 1);
}

/**
 * Frees a Payment.
 *
 * @param _payment The Payment to free.
 */
void free_openinsurance_ns0_payment(struct openinsurance_ns0_payment *_payment) {
  freeNs0PaymentType(_payment);
  free(_payment);
}

/**
 * Reads a Payment element from XML. The element to be read is "payment", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Payment, or NULL in case of error.
 */
struct openinsurance_ns0_payment *xmlTextReaderReadNs0PaymentElement(xmlTextReaderPtr reader) {
  struct openinsurance_ns0_payment *_payment = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "payment", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}payment.\n");
#endif
    _payment = xmlTextReaderReadNs0PaymentType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_payment == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}payment failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}payment failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _payment;
}

/**
 * Writes a Payment to XML under element name "payment".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _payment The Payment to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PaymentElement(xmlTextWriterPtr writer, struct openinsurance_ns0_payment *_payment) {
  return xmlTextWriterWriteNs0PaymentElementNS(writer, _payment, 0);
}

/**
 * Writes a Payment to XML under element name "payment".
 *
 * @param writer The XML writer.
 * @param _payment The Payment to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PaymentElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_payment *_payment, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "payment", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}payment. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}payment for root element {}payment...\n");
#endif
  status = xmlTextWriterWriteNs0PaymentType(writer, _payment);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}payment. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}payment. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Payment.
 *
 * @param _payment The Payment whose children are to be free.
 */
static void freeNs0PaymentElement(struct openinsurance_ns0_payment *_payment) {
  freeNs0PaymentType(_payment);
}

/**
 * Reads a Payment from XML. The reader is assumed to be at the start element.
 *
 * @return the Payment, or NULL in case of error.
 */
static struct openinsurance_ns0_payment *xmlTextReaderReadNs0PaymentType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct openinsurance_ns0_payment *_payment = calloc(1, sizeof(struct openinsurance_ns0_payment));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PaymentType(_payment);
        free(_payment);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "paymentId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}paymentId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}paymentId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->paymentId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "policyId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}policyId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}policyId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->policyId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "paymentAmount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}paymentAmount of type {http://www.w3.org/2001/XMLSchema}double.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDoubleType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}paymentAmount of type {http://www.w3.org/2001/XMLSchema}double.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->paymentAmount = *((double*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "paymentType", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}paymentType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}paymentType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->paymentType = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "paymentDate", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}paymentDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}paymentDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->paymentDate = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "routingNumber", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}routingNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}routingNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->routingNumber = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "checkingAccountNumber", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}checkingAccountNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}checkingAccountNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->checkingAccountNumber = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "checkPhotograph", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}checkPhotograph of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}checkPhotograph of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->checkPhotograph = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "creditCardNumber", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}creditCardNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}creditCardNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->creditCardNumber = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "creditCardName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}creditCardName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}creditCardName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->creditCardName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "CVSCode", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}CVSCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}CVSCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->CVSCode = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "creditCardExpiryDate", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}creditCardExpiryDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}creditCardExpiryDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->creditCardExpiryDate = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "debitCardNumber", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}debitCardNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}debitCardNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->debitCardNumber = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "debitCardName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}debitCardName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}debitCardName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->debitCardName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "debitCardPin", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}debitCardPin of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}debitCardPin of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->debitCardPin = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "debitCardExpiryDate", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}debitCardExpiryDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}debitCardExpiryDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentType(_payment);
          free(_payment);
          return NULL;
        }

        _payment->debitCardExpiryDate = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}payment.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}payment. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _payment;
}

/**
 * Writes a Payment to XML.
 *
 * @param writer The XML writer.
 * @param _payment The Payment to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PaymentType(xmlTextWriterPtr writer, struct openinsurance_ns0_payment *_payment) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_payment->paymentId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "paymentId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}paymentId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}paymentId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_payment->paymentId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}paymentId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}paymentId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_payment->policyId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}policyId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}policyId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_payment->policyId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}policyId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}policyId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "paymentAmount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}paymentAmount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}double for element {}paymentAmount...\n");
#endif
    status = xmlTextWriterWriteXsDoubleType(writer, &(_payment->paymentAmount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}double for element {}paymentAmount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}paymentAmount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_payment->paymentType != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "paymentType", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}paymentType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}paymentType...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_payment->paymentType));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}paymentType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}paymentType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_payment->paymentDate != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "paymentDate", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}paymentDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}paymentDate...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_payment->paymentDate));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}paymentDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}paymentDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_payment->routingNumber != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "routingNumber", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}routingNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}routingNumber...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_payment->routingNumber));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}routingNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}routingNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_payment->checkingAccountNumber != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "checkingAccountNumber", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}checkingAccountNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}checkingAccountNumber...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_payment->checkingAccountNumber));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}checkingAccountNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}checkingAccountNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_payment->checkPhotograph != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "checkPhotograph", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}checkPhotograph. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}checkPhotograph...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_payment->checkPhotograph));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}checkPhotograph. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}checkPhotograph. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_payment->creditCardNumber != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "creditCardNumber", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}creditCardNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}creditCardNumber...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_payment->creditCardNumber));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}creditCardNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}creditCardNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_payment->creditCardName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "creditCardName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}creditCardName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}creditCardName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_payment->creditCardName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}creditCardName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}creditCardName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_payment->CVSCode != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "CVSCode", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}CVSCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}CVSCode...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_payment->CVSCode));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}CVSCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}CVSCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_payment->creditCardExpiryDate != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "creditCardExpiryDate", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}creditCardExpiryDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}creditCardExpiryDate...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_payment->creditCardExpiryDate));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}creditCardExpiryDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}creditCardExpiryDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_payment->debitCardNumber != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "debitCardNumber", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}debitCardNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}debitCardNumber...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_payment->debitCardNumber));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}debitCardNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}debitCardNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_payment->debitCardName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "debitCardName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}debitCardName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}debitCardName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_payment->debitCardName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}debitCardName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}debitCardName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_payment->debitCardPin != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "debitCardPin", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}debitCardPin. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}debitCardPin...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_payment->debitCardPin));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}debitCardPin. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}debitCardPin. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_payment->debitCardExpiryDate != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "debitCardExpiryDate", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}debitCardExpiryDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}debitCardExpiryDate...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_payment->debitCardExpiryDate));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}debitCardExpiryDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}debitCardExpiryDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Payment.
 *
 * @param _payment The Payment to free.
 */
static void freeNs0PaymentType(struct openinsurance_ns0_payment *_payment) {
  int i;
  if (_payment->paymentId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor paymentId of type openinsurance_ns0_payment...\n");
#endif
    freeXsStringType(_payment->paymentId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor paymentId of type openinsurance_ns0_payment...\n");
#endif
    free(_payment->paymentId);
  }
  if (_payment->policyId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor policyId of type openinsurance_ns0_payment...\n");
#endif
    freeXsStringType(_payment->policyId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor policyId of type openinsurance_ns0_payment...\n");
#endif
    free(_payment->policyId);
  }
  if (_payment->paymentType != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor paymentType of type openinsurance_ns0_payment...\n");
#endif
    freeXsStringType(_payment->paymentType);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor paymentType of type openinsurance_ns0_payment...\n");
#endif
    free(_payment->paymentType);
  }
  if (_payment->paymentDate != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor paymentDate of type openinsurance_ns0_payment...\n");
#endif
    freeXsDateTimeType(_payment->paymentDate);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor paymentDate of type openinsurance_ns0_payment...\n");
#endif
    free(_payment->paymentDate);
  }
  if (_payment->routingNumber != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor routingNumber of type openinsurance_ns0_payment...\n");
#endif
    freeXsStringType(_payment->routingNumber);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor routingNumber of type openinsurance_ns0_payment...\n");
#endif
    free(_payment->routingNumber);
  }
  if (_payment->checkingAccountNumber != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor checkingAccountNumber of type openinsurance_ns0_payment...\n");
#endif
    freeXsStringType(_payment->checkingAccountNumber);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor checkingAccountNumber of type openinsurance_ns0_payment...\n");
#endif
    free(_payment->checkingAccountNumber);
  }
  if (_payment->checkPhotograph != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor checkPhotograph of type openinsurance_ns0_payment...\n");
#endif
    freeXsStringType(_payment->checkPhotograph);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor checkPhotograph of type openinsurance_ns0_payment...\n");
#endif
    free(_payment->checkPhotograph);
  }
  if (_payment->creditCardNumber != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor creditCardNumber of type openinsurance_ns0_payment...\n");
#endif
    freeXsStringType(_payment->creditCardNumber);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor creditCardNumber of type openinsurance_ns0_payment...\n");
#endif
    free(_payment->creditCardNumber);
  }
  if (_payment->creditCardName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor creditCardName of type openinsurance_ns0_payment...\n");
#endif
    freeXsStringType(_payment->creditCardName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor creditCardName of type openinsurance_ns0_payment...\n");
#endif
    free(_payment->creditCardName);
  }
  if (_payment->CVSCode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor CVSCode of type openinsurance_ns0_payment...\n");
#endif
    freeXsStringType(_payment->CVSCode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor CVSCode of type openinsurance_ns0_payment...\n");
#endif
    free(_payment->CVSCode);
  }
  if (_payment->creditCardExpiryDate != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor creditCardExpiryDate of type openinsurance_ns0_payment...\n");
#endif
    freeXsDateTimeType(_payment->creditCardExpiryDate);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor creditCardExpiryDate of type openinsurance_ns0_payment...\n");
#endif
    free(_payment->creditCardExpiryDate);
  }
  if (_payment->debitCardNumber != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor debitCardNumber of type openinsurance_ns0_payment...\n");
#endif
    freeXsStringType(_payment->debitCardNumber);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor debitCardNumber of type openinsurance_ns0_payment...\n");
#endif
    free(_payment->debitCardNumber);
  }
  if (_payment->debitCardName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor debitCardName of type openinsurance_ns0_payment...\n");
#endif
    freeXsStringType(_payment->debitCardName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor debitCardName of type openinsurance_ns0_payment...\n");
#endif
    free(_payment->debitCardName);
  }
  if (_payment->debitCardPin != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor debitCardPin of type openinsurance_ns0_payment...\n");
#endif
    freeXsStringType(_payment->debitCardPin);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor debitCardPin of type openinsurance_ns0_payment...\n");
#endif
    free(_payment->debitCardPin);
  }
  if (_payment->debitCardExpiryDate != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor debitCardExpiryDate of type openinsurance_ns0_payment...\n");
#endif
    freeXsDateTimeType(_payment->debitCardExpiryDate);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor debitCardExpiryDate of type openinsurance_ns0_payment...\n");
#endif
    free(_payment->debitCardExpiryDate);
  }
}
#endif /* DEF_openinsurance_ns0_payment_M */
#ifndef DEF_openinsurance_ns0_paymentResponse_M
#define DEF_openinsurance_ns0_paymentResponse_M

/**
 * Reads a PaymentResponse from XML. The reader is assumed to be at the start element.
 *
 * @return the PaymentResponse, or NULL in case of error.
 */
static struct openinsurance_ns0_paymentResponse *xmlTextReaderReadNs0PaymentResponseType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct openinsurance_ns0_paymentResponse *_paymentResponse = calloc(1, sizeof(struct openinsurance_ns0_paymentResponse));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PaymentResponseType(_paymentResponse);
        free(_paymentResponse);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "reponseStatus", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}reponseStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}reponseStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentResponseType(_paymentResponse);
          free(_paymentResponse);
          return NULL;
        }

        _paymentResponse->reponseStatus = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "responseDescription", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}responseDescription of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}responseDescription of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaymentResponseType(_paymentResponse);
          free(_paymentResponse);
          return NULL;
        }

        _paymentResponse->responseDescription = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}paymentResponse.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}paymentResponse. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _paymentResponse;
}

/**
 * Writes a PaymentResponse to XML.
 *
 * @param writer The XML writer.
 * @param _paymentResponse The PaymentResponse to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PaymentResponseType(xmlTextWriterPtr writer, struct openinsurance_ns0_paymentResponse *_paymentResponse) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_paymentResponse->reponseStatus != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "reponseStatus", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}reponseStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}reponseStatus...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_paymentResponse->reponseStatus));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}reponseStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}reponseStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_paymentResponse->responseDescription != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "responseDescription", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}responseDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}responseDescription...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_paymentResponse->responseDescription));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}responseDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}responseDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a PaymentResponse.
 *
 * @param _paymentResponse The PaymentResponse to free.
 */
static void freeNs0PaymentResponseType(struct openinsurance_ns0_paymentResponse *_paymentResponse) {
  int i;
  if (_paymentResponse->reponseStatus != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor reponseStatus of type openinsurance_ns0_paymentResponse...\n");
#endif
    freeXsStringType(_paymentResponse->reponseStatus);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor reponseStatus of type openinsurance_ns0_paymentResponse...\n");
#endif
    free(_paymentResponse->reponseStatus);
  }
  if (_paymentResponse->responseDescription != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor responseDescription of type openinsurance_ns0_paymentResponse...\n");
#endif
    freeXsStringType(_paymentResponse->responseDescription);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor responseDescription of type openinsurance_ns0_paymentResponse...\n");
#endif
    free(_paymentResponse->responseDescription);
  }
}
#endif /* DEF_openinsurance_ns0_paymentResponse_M */
#ifndef DEF_openinsurance_ns0_policy_M
#define DEF_openinsurance_ns0_policy_M

/**
 * Reads a Policy element from XML. The element to be read is "policy", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Policy, or NULL in case of error.
 */
struct openinsurance_ns0_policy *xml_read_openinsurance_ns0_policy(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PolicyElement(reader);
}

/**
 * Writes a Policy to XML under element name "policy".
 *
 * @param writer The XML writer.
 * @param _policy The Policy to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_openinsurance_ns0_policy(xmlTextWriterPtr writer, struct openinsurance_ns0_policy *_policy) {
  return xmlTextWriterWriteNs0PolicyElementNS(writer, _policy, 1);
}

/**
 * Frees a Policy.
 *
 * @param _policy The Policy to free.
 */
void free_openinsurance_ns0_policy(struct openinsurance_ns0_policy *_policy) {
  freeNs0PolicyType(_policy);
  free(_policy);
}

/**
 * Reads a Policy element from XML. The element to be read is "policy", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Policy, or NULL in case of error.
 */
struct openinsurance_ns0_policy *xmlTextReaderReadNs0PolicyElement(xmlTextReaderPtr reader) {
  struct openinsurance_ns0_policy *_policy = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "policy", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}policy.\n");
#endif
    _policy = xmlTextReaderReadNs0PolicyType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_policy == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}policy failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}policy failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _policy;
}

/**
 * Writes a Policy to XML under element name "policy".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _policy The Policy to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PolicyElement(xmlTextWriterPtr writer, struct openinsurance_ns0_policy *_policy) {
  return xmlTextWriterWriteNs0PolicyElementNS(writer, _policy, 0);
}

/**
 * Writes a Policy to XML under element name "policy".
 *
 * @param writer The XML writer.
 * @param _policy The Policy to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PolicyElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_policy *_policy, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policy", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}policy. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}policy for root element {}policy...\n");
#endif
  status = xmlTextWriterWriteNs0PolicyType(writer, _policy);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}policy. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}policy. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Policy.
 *
 * @param _policy The Policy whose children are to be free.
 */
static void freeNs0PolicyElement(struct openinsurance_ns0_policy *_policy) {
  freeNs0PolicyType(_policy);
}

/**
 * Reads a Policy from XML. The reader is assumed to be at the start element.
 *
 * @return the Policy, or NULL in case of error.
 */
static struct openinsurance_ns0_policy *xmlTextReaderReadNs0PolicyType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct openinsurance_ns0_policy *_policy = calloc(1, sizeof(struct openinsurance_ns0_policy));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PolicyType(_policy);
        free(_policy);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "policyId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}policyId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}policyId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PolicyType(_policy);
          free(_policy);
          return NULL;
        }

        _policy->policyId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "policyType", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}policyType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}policyType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PolicyType(_policy);
          free(_policy);
          return NULL;
        }

        _policy->policyType = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "policyNumber", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}policyNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}policyNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PolicyType(_policy);
          free(_policy);
          return NULL;
        }

        _policy->policyNumber = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "policyEffectiveDate", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}policyEffectiveDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}policyEffectiveDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PolicyType(_policy);
          free(_policy);
          return NULL;
        }

        _policy->policyEffectiveDate = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "policyExpirationDate", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}policyExpirationDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}policyExpirationDate of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PolicyType(_policy);
          free(_policy);
          return NULL;
        }

        _policy->policyExpirationDate = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "policyPremium", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}policyPremium of type {http://www.w3.org/2001/XMLSchema}double.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDoubleType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}policyPremium of type {http://www.w3.org/2001/XMLSchema}double.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PolicyType(_policy);
          free(_policy);
          return NULL;
        }

        _policy->policyPremium = *((double*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}policy.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}policy. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _policy;
}

/**
 * Writes a Policy to XML.
 *
 * @param writer The XML writer.
 * @param _policy The Policy to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PolicyType(xmlTextWriterPtr writer, struct openinsurance_ns0_policy *_policy) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_policy->policyId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}policyId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}policyId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_policy->policyId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}policyId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}policyId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_policy->policyType != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyType", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}policyType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}policyType...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_policy->policyType));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}policyType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}policyType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_policy->policyNumber != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyNumber", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}policyNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}policyNumber...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_policy->policyNumber));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}policyNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}policyNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_policy->policyEffectiveDate != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyEffectiveDate", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}policyEffectiveDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}policyEffectiveDate...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_policy->policyEffectiveDate));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}policyEffectiveDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}policyEffectiveDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_policy->policyExpirationDate != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyExpirationDate", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}policyExpirationDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}policyExpirationDate...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_policy->policyExpirationDate));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}policyExpirationDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}policyExpirationDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyPremium", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}policyPremium. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}double for element {}policyPremium...\n");
#endif
    status = xmlTextWriterWriteXsDoubleType(writer, &(_policy->policyPremium));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}double for element {}policyPremium. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}policyPremium. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Policy.
 *
 * @param _policy The Policy to free.
 */
static void freeNs0PolicyType(struct openinsurance_ns0_policy *_policy) {
  int i;
  if (_policy->policyId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor policyId of type openinsurance_ns0_policy...\n");
#endif
    freeXsStringType(_policy->policyId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor policyId of type openinsurance_ns0_policy...\n");
#endif
    free(_policy->policyId);
  }
  if (_policy->policyType != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor policyType of type openinsurance_ns0_policy...\n");
#endif
    freeXsStringType(_policy->policyType);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor policyType of type openinsurance_ns0_policy...\n");
#endif
    free(_policy->policyType);
  }
  if (_policy->policyNumber != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor policyNumber of type openinsurance_ns0_policy...\n");
#endif
    freeXsStringType(_policy->policyNumber);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor policyNumber of type openinsurance_ns0_policy...\n");
#endif
    free(_policy->policyNumber);
  }
  if (_policy->policyEffectiveDate != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor policyEffectiveDate of type openinsurance_ns0_policy...\n");
#endif
    freeXsDateTimeType(_policy->policyEffectiveDate);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor policyEffectiveDate of type openinsurance_ns0_policy...\n");
#endif
    free(_policy->policyEffectiveDate);
  }
  if (_policy->policyExpirationDate != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor policyExpirationDate of type openinsurance_ns0_policy...\n");
#endif
    freeXsDateTimeType(_policy->policyExpirationDate);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor policyExpirationDate of type openinsurance_ns0_policy...\n");
#endif
    free(_policy->policyExpirationDate);
  }
}
#endif /* DEF_openinsurance_ns0_policy_M */
#ifndef DEF_openinsurance_ns0_towingCompany_M
#define DEF_openinsurance_ns0_towingCompany_M

/**
 * Reads a TowingCompany element from XML. The element to be read is "towingCompany", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TowingCompany, or NULL in case of error.
 */
struct openinsurance_ns0_towingCompany *xml_read_openinsurance_ns0_towingCompany(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0TowingCompanyElement(reader);
}

/**
 * Writes a TowingCompany to XML under element name "towingCompany".
 *
 * @param writer The XML writer.
 * @param _towingCompany The TowingCompany to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_openinsurance_ns0_towingCompany(xmlTextWriterPtr writer, struct openinsurance_ns0_towingCompany *_towingCompany) {
  return xmlTextWriterWriteNs0TowingCompanyElementNS(writer, _towingCompany, 1);
}

/**
 * Frees a TowingCompany.
 *
 * @param _towingCompany The TowingCompany to free.
 */
void free_openinsurance_ns0_towingCompany(struct openinsurance_ns0_towingCompany *_towingCompany) {
  freeNs0TowingCompanyType(_towingCompany);
  free(_towingCompany);
}

/**
 * Reads a TowingCompany element from XML. The element to be read is "towingCompany", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TowingCompany, or NULL in case of error.
 */
struct openinsurance_ns0_towingCompany *xmlTextReaderReadNs0TowingCompanyElement(xmlTextReaderPtr reader) {
  struct openinsurance_ns0_towingCompany *_towingCompany = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "towingCompany", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}towingCompany.\n");
#endif
    _towingCompany = xmlTextReaderReadNs0TowingCompanyType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_towingCompany == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}towingCompany failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}towingCompany failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _towingCompany;
}

/**
 * Writes a TowingCompany to XML under element name "towingCompany".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _towingCompany The TowingCompany to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0TowingCompanyElement(xmlTextWriterPtr writer, struct openinsurance_ns0_towingCompany *_towingCompany) {
  return xmlTextWriterWriteNs0TowingCompanyElementNS(writer, _towingCompany, 0);
}

/**
 * Writes a TowingCompany to XML under element name "towingCompany".
 *
 * @param writer The XML writer.
 * @param _towingCompany The TowingCompany to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0TowingCompanyElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_towingCompany *_towingCompany, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "towingCompany", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}towingCompany. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}towingCompany for root element {}towingCompany...\n");
#endif
  status = xmlTextWriterWriteNs0TowingCompanyType(writer, _towingCompany);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}towingCompany. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}towingCompany. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TowingCompany.
 *
 * @param _towingCompany The TowingCompany whose children are to be free.
 */
static void freeNs0TowingCompanyElement(struct openinsurance_ns0_towingCompany *_towingCompany) {
  freeNs0TowingCompanyType(_towingCompany);
}

/**
 * Reads a TowingCompany from XML. The reader is assumed to be at the start element.
 *
 * @return the TowingCompany, or NULL in case of error.
 */
static struct openinsurance_ns0_towingCompany *xmlTextReaderReadNs0TowingCompanyType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct openinsurance_ns0_towingCompany *_towingCompany = calloc(1, sizeof(struct openinsurance_ns0_towingCompany));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TowingCompanyType(_towingCompany);
        free(_towingCompany);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TowingCompanyType(_towingCompany);
          free(_towingCompany);
          return NULL;
        }

        _towingCompany->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "address1", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}address1 of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}address1 of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TowingCompanyType(_towingCompany);
          free(_towingCompany);
          return NULL;
        }

        _towingCompany->address1 = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "address2", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}address2 of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}address2 of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TowingCompanyType(_towingCompany);
          free(_towingCompany);
          return NULL;
        }

        _towingCompany->address2 = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "city", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TowingCompanyType(_towingCompany);
          free(_towingCompany);
          return NULL;
        }

        _towingCompany->city = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "province", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}province of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}province of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TowingCompanyType(_towingCompany);
          free(_towingCompany);
          return NULL;
        }

        _towingCompany->province = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "pinCode", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}pinCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}pinCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TowingCompanyType(_towingCompany);
          free(_towingCompany);
          return NULL;
        }

        _towingCompany->pinCode = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "phone", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}phone of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}phone of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TowingCompanyType(_towingCompany);
          free(_towingCompany);
          return NULL;
        }

        _towingCompany->phone = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "emailId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}emailId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}emailId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TowingCompanyType(_towingCompany);
          free(_towingCompany);
          return NULL;
        }

        _towingCompany->emailId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}towingCompany.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}towingCompany. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _towingCompany;
}

/**
 * Writes a TowingCompany to XML.
 *
 * @param writer The XML writer.
 * @param _towingCompany The TowingCompany to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TowingCompanyType(xmlTextWriterPtr writer, struct openinsurance_ns0_towingCompany *_towingCompany) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_towingCompany->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_towingCompany->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_towingCompany->address1 != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address1", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}address1. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}address1...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_towingCompany->address1));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}address1. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}address1. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_towingCompany->address2 != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address2", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}address2. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}address2...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_towingCompany->address2));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}address2. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}address2. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_towingCompany->city != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "city", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}city. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}city...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_towingCompany->city));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}city. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}city. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_towingCompany->province != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "province", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}province. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}province...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_towingCompany->province));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}province. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}province. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_towingCompany->pinCode != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "pinCode", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}pinCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}pinCode...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_towingCompany->pinCode));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}pinCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}pinCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "phone", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}phone. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}phone...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_towingCompany->phone));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}phone. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}phone. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_towingCompany->emailId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "emailId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}emailId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}emailId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_towingCompany->emailId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}emailId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}emailId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TowingCompany.
 *
 * @param _towingCompany The TowingCompany to free.
 */
static void freeNs0TowingCompanyType(struct openinsurance_ns0_towingCompany *_towingCompany) {
  int i;
  if (_towingCompany->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type openinsurance_ns0_towingCompany...\n");
#endif
    freeXsStringType(_towingCompany->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type openinsurance_ns0_towingCompany...\n");
#endif
    free(_towingCompany->name);
  }
  if (_towingCompany->address1 != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor address1 of type openinsurance_ns0_towingCompany...\n");
#endif
    freeXsStringType(_towingCompany->address1);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor address1 of type openinsurance_ns0_towingCompany...\n");
#endif
    free(_towingCompany->address1);
  }
  if (_towingCompany->address2 != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor address2 of type openinsurance_ns0_towingCompany...\n");
#endif
    freeXsStringType(_towingCompany->address2);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor address2 of type openinsurance_ns0_towingCompany...\n");
#endif
    free(_towingCompany->address2);
  }
  if (_towingCompany->city != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor city of type openinsurance_ns0_towingCompany...\n");
#endif
    freeXsStringType(_towingCompany->city);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor city of type openinsurance_ns0_towingCompany...\n");
#endif
    free(_towingCompany->city);
  }
  if (_towingCompany->province != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor province of type openinsurance_ns0_towingCompany...\n");
#endif
    freeXsStringType(_towingCompany->province);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor province of type openinsurance_ns0_towingCompany...\n");
#endif
    free(_towingCompany->province);
  }
  if (_towingCompany->pinCode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor pinCode of type openinsurance_ns0_towingCompany...\n");
#endif
    freeXsStringType(_towingCompany->pinCode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor pinCode of type openinsurance_ns0_towingCompany...\n");
#endif
    free(_towingCompany->pinCode);
  }
  if (_towingCompany->emailId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor emailId of type openinsurance_ns0_towingCompany...\n");
#endif
    freeXsStringType(_towingCompany->emailId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor emailId of type openinsurance_ns0_towingCompany...\n");
#endif
    free(_towingCompany->emailId);
  }
}
#endif /* DEF_openinsurance_ns0_towingCompany_M */
#ifndef DEF_openinsurance_ns0_vehicle_M
#define DEF_openinsurance_ns0_vehicle_M

/**
 * Reads a Vehicle element from XML. The element to be read is "vehicle", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Vehicle, or NULL in case of error.
 */
struct openinsurance_ns0_vehicle *xml_read_openinsurance_ns0_vehicle(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0VehicleElement(reader);
}

/**
 * Writes a Vehicle to XML under element name "vehicle".
 *
 * @param writer The XML writer.
 * @param _vehicle The Vehicle to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_openinsurance_ns0_vehicle(xmlTextWriterPtr writer, struct openinsurance_ns0_vehicle *_vehicle) {
  return xmlTextWriterWriteNs0VehicleElementNS(writer, _vehicle, 1);
}

/**
 * Frees a Vehicle.
 *
 * @param _vehicle The Vehicle to free.
 */
void free_openinsurance_ns0_vehicle(struct openinsurance_ns0_vehicle *_vehicle) {
  freeNs0VehicleType(_vehicle);
  free(_vehicle);
}

/**
 * Reads a Vehicle element from XML. The element to be read is "vehicle", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Vehicle, or NULL in case of error.
 */
struct openinsurance_ns0_vehicle *xmlTextReaderReadNs0VehicleElement(xmlTextReaderPtr reader) {
  struct openinsurance_ns0_vehicle *_vehicle = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "vehicle", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}vehicle.\n");
#endif
    _vehicle = xmlTextReaderReadNs0VehicleType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_vehicle == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}vehicle failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}vehicle failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _vehicle;
}

/**
 * Writes a Vehicle to XML under element name "vehicle".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _vehicle The Vehicle to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0VehicleElement(xmlTextWriterPtr writer, struct openinsurance_ns0_vehicle *_vehicle) {
  return xmlTextWriterWriteNs0VehicleElementNS(writer, _vehicle, 0);
}

/**
 * Writes a Vehicle to XML under element name "vehicle".
 *
 * @param writer The XML writer.
 * @param _vehicle The Vehicle to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0VehicleElementNS(xmlTextWriterPtr writer, struct openinsurance_ns0_vehicle *_vehicle, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vehicle", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}vehicle. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}vehicle for root element {}vehicle...\n");
#endif
  status = xmlTextWriterWriteNs0VehicleType(writer, _vehicle);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}vehicle. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}vehicle. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Vehicle.
 *
 * @param _vehicle The Vehicle whose children are to be free.
 */
static void freeNs0VehicleElement(struct openinsurance_ns0_vehicle *_vehicle) {
  freeNs0VehicleType(_vehicle);
}

/**
 * Reads a Vehicle from XML. The reader is assumed to be at the start element.
 *
 * @return the Vehicle, or NULL in case of error.
 */
static struct openinsurance_ns0_vehicle *xmlTextReaderReadNs0VehicleType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct openinsurance_ns0_vehicle *_vehicle = calloc(1, sizeof(struct openinsurance_ns0_vehicle));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0VehicleType(_vehicle);
        free(_vehicle);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "vehicleId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}vehicleId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}vehicleId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0VehicleType(_vehicle);
          free(_vehicle);
          return NULL;
        }

        _vehicle->vehicleId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "make", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}make of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}make of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0VehicleType(_vehicle);
          free(_vehicle);
          return NULL;
        }

        _vehicle->make = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "model", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}model of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}model of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0VehicleType(_vehicle);
          free(_vehicle);
          return NULL;
        }

        _vehicle->model = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "year", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}year of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}year of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0VehicleType(_vehicle);
          free(_vehicle);
          return NULL;
        }

        _vehicle->year = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "vin", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}vin of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}vin of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0VehicleType(_vehicle);
          free(_vehicle);
          return NULL;
        }

        _vehicle->vin = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "licensePlate", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}licensePlate of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}licensePlate of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0VehicleType(_vehicle);
          free(_vehicle);
          return NULL;
        }

        _vehicle->licensePlate = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "vehiclePhoto", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}vehiclePhoto of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}vehiclePhoto of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0VehicleType(_vehicle);
          free(_vehicle);
          return NULL;
        }

        _vehicle->vehiclePhoto = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}vehicle.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}vehicle. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _vehicle;
}

/**
 * Writes a Vehicle to XML.
 *
 * @param writer The XML writer.
 * @param _vehicle The Vehicle to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0VehicleType(xmlTextWriterPtr writer, struct openinsurance_ns0_vehicle *_vehicle) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_vehicle->vehicleId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vehicleId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}vehicleId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}vehicleId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_vehicle->vehicleId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}vehicleId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}vehicleId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_vehicle->make != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "make", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}make. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}make...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_vehicle->make));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}make. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}make. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_vehicle->model != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "model", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}model. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}model...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_vehicle->model));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}model. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}model. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "year", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}year. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}year...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_vehicle->year));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}year. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}year. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_vehicle->vin != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vin", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}vin. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}vin...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_vehicle->vin));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}vin. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}vin. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_vehicle->licensePlate != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "licensePlate", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}licensePlate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}licensePlate...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_vehicle->licensePlate));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}licensePlate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}licensePlate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_vehicle->vehiclePhoto != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vehiclePhoto", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}vehiclePhoto. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}vehiclePhoto...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_vehicle->vehiclePhoto));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}vehiclePhoto. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}vehiclePhoto. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Vehicle.
 *
 * @param _vehicle The Vehicle to free.
 */
static void freeNs0VehicleType(struct openinsurance_ns0_vehicle *_vehicle) {
  int i;
  if (_vehicle->vehicleId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor vehicleId of type openinsurance_ns0_vehicle...\n");
#endif
    freeXsStringType(_vehicle->vehicleId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor vehicleId of type openinsurance_ns0_vehicle...\n");
#endif
    free(_vehicle->vehicleId);
  }
  if (_vehicle->make != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor make of type openinsurance_ns0_vehicle...\n");
#endif
    freeXsStringType(_vehicle->make);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor make of type openinsurance_ns0_vehicle...\n");
#endif
    free(_vehicle->make);
  }
  if (_vehicle->model != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor model of type openinsurance_ns0_vehicle...\n");
#endif
    freeXsStringType(_vehicle->model);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor model of type openinsurance_ns0_vehicle...\n");
#endif
    free(_vehicle->model);
  }
  if (_vehicle->vin != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor vin of type openinsurance_ns0_vehicle...\n");
#endif
    freeXsStringType(_vehicle->vin);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor vin of type openinsurance_ns0_vehicle...\n");
#endif
    free(_vehicle->vin);
  }
  if (_vehicle->licensePlate != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor licensePlate of type openinsurance_ns0_vehicle...\n");
#endif
    freeXsStringType(_vehicle->licensePlate);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor licensePlate of type openinsurance_ns0_vehicle...\n");
#endif
    free(_vehicle->licensePlate);
  }
  if (_vehicle->vehiclePhoto != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor vehiclePhoto of type openinsurance_ns0_vehicle...\n");
#endif
    freeXsStringType(_vehicle->vehiclePhoto);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor vehiclePhoto of type openinsurance_ns0_vehicle...\n");
#endif
    free(_vehicle->vehiclePhoto);
  }
}
#endif /* DEF_openinsurance_ns0_vehicle_M */
