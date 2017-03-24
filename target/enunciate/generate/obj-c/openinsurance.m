#import "openinsurance.h"
#ifndef DEF_OPENINSURANCENS0Claim_M
#define DEF_OPENINSURANCENS0Claim_M

/**
 *  The Class Claim.

 */
@implementation OPENINSURANCENS0Claim

/**
 * the claimId
 */
- (NSString *) claimId
{
  return _claimId;
}

/**
 * the claimId
 */
- (void) setClaimId: (NSString *) newClaimId
{
  [newClaimId retain];
  [_claimId release];
  _claimId = newClaimId;
}

/**
 * the claimDescription
 */
- (NSString *) claimDescription
{
  return _claimDescription;
}

/**
 * the claimDescription
 */
- (void) setClaimDescription: (NSString *) newClaimDescription
{
  [newClaimDescription retain];
  [_claimDescription release];
  _claimDescription = newClaimDescription;
}

- (void) dealloc
{
  [self setClaimId: nil];
  [self setClaimDescription: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  OPENINSURANCENS0Claim *_oPENINSURANCENS0Claim;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oPENINSURANCENS0Claim = (OPENINSURANCENS0Claim *) [OPENINSURANCENS0Claim readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oPENINSURANCENS0Claim;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation OPENINSURANCENS0Claim */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OPENINSURANCENS0Claim (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface OPENINSURANCENS0Claim (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OPENINSURANCENS0Claim (JAXB)

/**
 * Read an instance of OPENINSURANCENS0Claim from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OPENINSURANCENS0Claim defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OPENINSURANCENS0Claim *_oPENINSURANCENS0Claim = [[OPENINSURANCENS0Claim alloc] init];
  NS_DURING
  {
    [_oPENINSURANCENS0Claim initWithReader: reader];
  }
  NS_HANDLER
  {
    _oPENINSURANCENS0Claim = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oPENINSURANCENS0Claim autorelease];
  return _oPENINSURANCENS0Claim;
}

/**
 * Initialize this instance of OPENINSURANCENS0Claim according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OPENINSURANCENS0Claim to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a OPENINSURANCENS0Claim from an XML reader. The element to be read is
 * "claim".
 *
 * @param reader The XML reader.
 * @return The OPENINSURANCENS0Claim.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  OPENINSURANCENS0Claim *_claim = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element claim."];
    }
  }

  if (xmlStrcmp(BAD_CAST "claim", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}claim.");
#endif
    _claim = (OPENINSURANCENS0Claim *)[OPENINSURANCENS0Claim readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}claim.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0Claim. Expected element claim. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0Claim. Expected element claim. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _claim;
}

/**
 * Writes this OPENINSURANCENS0Claim to XML under element name "claim".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _claim The Claim to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this OPENINSURANCENS0Claim to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "claim", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}claim. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}claim for root element {}claim...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}claim for root element {}claim...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}claim. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "claimId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}claimId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}claimId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setClaimId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "claimDescription", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}claimDescription of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}claimDescription of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setClaimDescription: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self claimId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "claimId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}claimId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}claimId...");
#endif
    [[self claimId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}claimId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}claimId."];
    }
  }
  if ([self claimDescription]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "claimDescription", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}claimDescription."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}claimDescription...");
#endif
    [[self claimDescription] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}claimDescription...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}claimDescription."];
    }
  }
}
@end /* implementation OPENINSURANCENS0Claim (JAXB) */

#endif /* DEF_OPENINSURANCENS0Claim_M */
#ifndef DEF_OPENINSURANCENS0Driver_M
#define DEF_OPENINSURANCENS0Driver_M

/**
 *  The Class Driver.

 */
@implementation OPENINSURANCENS0Driver

/**
 * the driverId
 */
- (NSString *) driverId
{
  return _driverId;
}

/**
 * the driverId
 */
- (void) setDriverId: (NSString *) newDriverId
{
  [newDriverId retain];
  [_driverId release];
  _driverId = newDriverId;
}

/**
 * the driverName
 */
- (NSString *) driverName
{
  return _driverName;
}

/**
 * the driverName
 */
- (void) setDriverName: (NSString *) newDriverName
{
  [newDriverName retain];
  [_driverName release];
  _driverName = newDriverName;
}

/**
 * the gender
 */
- (NSString *) gender
{
  return _gender;
}

/**
 * the gender
 */
- (void) setGender: (NSString *) newGender
{
  [newGender retain];
  [_gender release];
  _gender = newGender;
}

/**
 * the driverPhoto
 */
- (NSString *) driverPhoto
{
  return _driverPhoto;
}

/**
 * the driverPhoto
 */
- (void) setDriverPhoto: (NSString *) newDriverPhoto
{
  [newDriverPhoto retain];
  [_driverPhoto release];
  _driverPhoto = newDriverPhoto;
}

/**
 * the dateOfBirth
 */
- (NSDate *) dateOfBirth
{
  return _dateOfBirth;
}

/**
 * the dateOfBirth
 */
- (void) setDateOfBirth: (NSDate *) newDateOfBirth
{
  [newDateOfBirth retain];
  [_dateOfBirth release];
  _dateOfBirth = newDateOfBirth;
}

/**
 * the driverLicenseNumber
 */
- (NSString *) driverLicenseNumber
{
  return _driverLicenseNumber;
}

/**
 * the driverLicenseNumber
 */
- (void) setDriverLicenseNumber: (NSString *) newDriverLicenseNumber
{
  [newDriverLicenseNumber retain];
  [_driverLicenseNumber release];
  _driverLicenseNumber = newDriverLicenseNumber;
}

/**
 * the driverClass
 */
- (NSString *) driverClass
{
  return _driverClass;
}

/**
 * the driverClass
 */
- (void) setDriverClass: (NSString *) newDriverClass
{
  [newDriverClass retain];
  [_driverClass release];
  _driverClass = newDriverClass;
}

/**
 * the address
 */
- (NSString *) address
{
  return _address;
}

/**
 * the address
 */
- (void) setAddress: (NSString *) newAddress
{
  [newAddress retain];
  [_address release];
  _address = newAddress;
}

/**
 * the eyeColor
 */
- (NSString *) eyeColor
{
  return _eyeColor;
}

/**
 * the eyeColor
 */
- (void) setEyeColor: (NSString *) newEyeColor
{
  [newEyeColor retain];
  [_eyeColor release];
  _eyeColor = newEyeColor;
}

/**
 * the height
 */
- (NSString *) height
{
  return _height;
}

/**
 * the height
 */
- (void) setHeight: (NSString *) newHeight
{
  [newHeight retain];
  [_height release];
  _height = newHeight;
}

/**
 * the dateOfIssue
 */
- (NSDate *) dateOfIssue
{
  return _dateOfIssue;
}

/**
 * the dateOfIssue
 */
- (void) setDateOfIssue: (NSDate *) newDateOfIssue
{
  [newDateOfIssue retain];
  [_dateOfIssue release];
  _dateOfIssue = newDateOfIssue;
}

/**
 * the expiryDate
 */
- (NSDate *) expiryDate
{
  return _expiryDate;
}

/**
 * the expiryDate
 */
- (void) setExpiryDate: (NSDate *) newExpiryDate
{
  [newExpiryDate retain];
  [_expiryDate release];
  _expiryDate = newExpiryDate;
}

/**
 * the licensePhoto
 */
- (NSString *) licensePhoto
{
  return _licensePhoto;
}

/**
 * the licensePhoto
 */
- (void) setLicensePhoto: (NSString *) newLicensePhoto
{
  [newLicensePhoto retain];
  [_licensePhoto release];
  _licensePhoto = newLicensePhoto;
}

- (void) dealloc
{
  [self setDriverId: nil];
  [self setDriverName: nil];
  [self setGender: nil];
  [self setDriverPhoto: nil];
  [self setDateOfBirth: nil];
  [self setDriverLicenseNumber: nil];
  [self setDriverClass: nil];
  [self setAddress: nil];
  [self setEyeColor: nil];
  [self setHeight: nil];
  [self setDateOfIssue: nil];
  [self setExpiryDate: nil];
  [self setLicensePhoto: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  OPENINSURANCENS0Driver *_oPENINSURANCENS0Driver;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oPENINSURANCENS0Driver = (OPENINSURANCENS0Driver *) [OPENINSURANCENS0Driver readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oPENINSURANCENS0Driver;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation OPENINSURANCENS0Driver */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OPENINSURANCENS0Driver (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface OPENINSURANCENS0Driver (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OPENINSURANCENS0Driver (JAXB)

/**
 * Read an instance of OPENINSURANCENS0Driver from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OPENINSURANCENS0Driver defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OPENINSURANCENS0Driver *_oPENINSURANCENS0Driver = [[OPENINSURANCENS0Driver alloc] init];
  NS_DURING
  {
    [_oPENINSURANCENS0Driver initWithReader: reader];
  }
  NS_HANDLER
  {
    _oPENINSURANCENS0Driver = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oPENINSURANCENS0Driver autorelease];
  return _oPENINSURANCENS0Driver;
}

/**
 * Initialize this instance of OPENINSURANCENS0Driver according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OPENINSURANCENS0Driver to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a OPENINSURANCENS0Driver from an XML reader. The element to be read is
 * "driver".
 *
 * @param reader The XML reader.
 * @return The OPENINSURANCENS0Driver.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  OPENINSURANCENS0Driver *_driver = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element driver."];
    }
  }

  if (xmlStrcmp(BAD_CAST "driver", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}driver.");
#endif
    _driver = (OPENINSURANCENS0Driver *)[OPENINSURANCENS0Driver readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}driver.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0Driver. Expected element driver. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0Driver. Expected element driver. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _driver;
}

/**
 * Writes this OPENINSURANCENS0Driver to XML under element name "driver".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _driver The Driver to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this OPENINSURANCENS0Driver to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "driver", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}driver. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}driver for root element {}driver...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}driver for root element {}driver...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}driver. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "driverId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}driverId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}driverId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDriverId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "driverName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}driverName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}driverName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDriverName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "gender", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}gender of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}gender of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setGender: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "driverPhoto", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}driverPhoto of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}driverPhoto of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDriverPhoto: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "dateOfBirth", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}dateOfBirth of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}dateOfBirth of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setDateOfBirth: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "driverLicenseNumber", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}driverLicenseNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}driverLicenseNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDriverLicenseNumber: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "driverClass", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}driverClass of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}driverClass of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDriverClass: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "address", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAddress: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "eyeColor", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}eyeColor of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}eyeColor of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEyeColor: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "height", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}height of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}height of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setHeight: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "dateOfIssue", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}dateOfIssue of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}dateOfIssue of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setDateOfIssue: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "expiryDate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}expiryDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}expiryDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setExpiryDate: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "licensePhoto", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}licensePhoto of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}licensePhoto of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setLicensePhoto: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self driverId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "driverId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}driverId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}driverId...");
#endif
    [[self driverId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}driverId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}driverId."];
    }
  }
  if ([self driverName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "driverName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}driverName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}driverName...");
#endif
    [[self driverName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}driverName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}driverName."];
    }
  }
  if ([self gender]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "gender", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}gender."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}gender...");
#endif
    [[self gender] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}gender...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}gender."];
    }
  }
  if ([self driverPhoto]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "driverPhoto", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}driverPhoto."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}driverPhoto...");
#endif
    [[self driverPhoto] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}driverPhoto...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}driverPhoto."];
    }
  }
  if ([self dateOfBirth]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dateOfBirth", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}dateOfBirth."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}dateOfBirth...");
#endif
    [[self dateOfBirth] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}dateOfBirth...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}dateOfBirth."];
    }
  }
  if ([self driverLicenseNumber]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "driverLicenseNumber", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}driverLicenseNumber."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}driverLicenseNumber...");
#endif
    [[self driverLicenseNumber] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}driverLicenseNumber...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}driverLicenseNumber."];
    }
  }
  if ([self driverClass]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "driverClass", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}driverClass."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}driverClass...");
#endif
    [[self driverClass] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}driverClass...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}driverClass."];
    }
  }
  if ([self address]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}address."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}address...");
#endif
    [[self address] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}address...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}address."];
    }
  }
  if ([self eyeColor]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "eyeColor", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}eyeColor."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}eyeColor...");
#endif
    [[self eyeColor] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}eyeColor...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}eyeColor."];
    }
  }
  if ([self height]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "height", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}height."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}height...");
#endif
    [[self height] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}height...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}height."];
    }
  }
  if ([self dateOfIssue]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dateOfIssue", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}dateOfIssue."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}dateOfIssue...");
#endif
    [[self dateOfIssue] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}dateOfIssue...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}dateOfIssue."];
    }
  }
  if ([self expiryDate]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "expiryDate", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}expiryDate."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}expiryDate...");
#endif
    [[self expiryDate] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}expiryDate...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}expiryDate."];
    }
  }
  if ([self licensePhoto]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "licensePhoto", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}licensePhoto."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}licensePhoto...");
#endif
    [[self licensePhoto] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}licensePhoto...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}licensePhoto."];
    }
  }
}
@end /* implementation OPENINSURANCENS0Driver (JAXB) */

#endif /* DEF_OPENINSURANCENS0Driver_M */
#ifndef DEF_OPENINSURANCENS0IdCardDetails_M
#define DEF_OPENINSURANCENS0IdCardDetails_M

/**
 *  The Class IdCardDetails.

 */
@implementation OPENINSURANCENS0IdCardDetails

/**
 * the vehicle
 */
- (OPENINSURANCENS0Vehicle *) vehicle
{
  return _vehicle;
}

/**
 * the vehicle
 */
- (void) setVehicle: (OPENINSURANCENS0Vehicle *) newVehicle
{
  [newVehicle retain];
  [_vehicle release];
  _vehicle = newVehicle;
}

/**
 * the policy
 */
- (OPENINSURANCENS0Policy *) policy
{
  return _policy;
}

/**
 * the policy
 */
- (void) setPolicy: (OPENINSURANCENS0Policy *) newPolicy
{
  [newPolicy retain];
  [_policy release];
  _policy = newPolicy;
}

/**
 * the insuredPersons
 */
- (NSArray *) insuredPersons
{
  return _insuredPersons;
}

/**
 * the insuredPersons
 */
- (void) setInsuredPersons: (NSArray *) newInsuredPersons
{
  [newInsuredPersons retain];
  [_insuredPersons release];
  _insuredPersons = newInsuredPersons;
}

- (void) dealloc
{
  [self setVehicle: nil];
  [self setPolicy: nil];
  [self setInsuredPersons: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  OPENINSURANCENS0IdCardDetails *_oPENINSURANCENS0IdCardDetails;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oPENINSURANCENS0IdCardDetails = (OPENINSURANCENS0IdCardDetails *) [OPENINSURANCENS0IdCardDetails readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oPENINSURANCENS0IdCardDetails;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation OPENINSURANCENS0IdCardDetails */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OPENINSURANCENS0IdCardDetails (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface OPENINSURANCENS0IdCardDetails (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OPENINSURANCENS0IdCardDetails (JAXB)

/**
 * Read an instance of OPENINSURANCENS0IdCardDetails from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OPENINSURANCENS0IdCardDetails defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OPENINSURANCENS0IdCardDetails *_oPENINSURANCENS0IdCardDetails = [[OPENINSURANCENS0IdCardDetails alloc] init];
  NS_DURING
  {
    [_oPENINSURANCENS0IdCardDetails initWithReader: reader];
  }
  NS_HANDLER
  {
    _oPENINSURANCENS0IdCardDetails = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oPENINSURANCENS0IdCardDetails autorelease];
  return _oPENINSURANCENS0IdCardDetails;
}

/**
 * Initialize this instance of OPENINSURANCENS0IdCardDetails according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OPENINSURANCENS0IdCardDetails to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a OPENINSURANCENS0IdCardDetails from an XML reader. The element to be read is
 * "idCardDetails".
 *
 * @param reader The XML reader.
 * @return The OPENINSURANCENS0IdCardDetails.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  OPENINSURANCENS0IdCardDetails *_idCardDetails = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element idCardDetails."];
    }
  }

  if (xmlStrcmp(BAD_CAST "idCardDetails", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}idCardDetails.");
#endif
    _idCardDetails = (OPENINSURANCENS0IdCardDetails *)[OPENINSURANCENS0IdCardDetails readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}idCardDetails.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0IdCardDetails. Expected element idCardDetails. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0IdCardDetails. Expected element idCardDetails. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _idCardDetails;
}

/**
 * Writes this OPENINSURANCENS0IdCardDetails to XML under element name "idCardDetails".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _idCardDetails The IdCardDetails to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this OPENINSURANCENS0IdCardDetails to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "idCardDetails", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}idCardDetails. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}idCardDetails for root element {}idCardDetails...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}idCardDetails for root element {}idCardDetails...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}idCardDetails. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "vehicle", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}vehicle of type {}vehicle.");
#endif
    __child = [OPENINSURANCENS0Vehicle readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}vehicle of type {}vehicle.");
#endif

    [self setVehicle: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "policy", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}policy of type {}policy.");
#endif
    __child = [OPENINSURANCENS0Policy readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}policy of type {}policy.");
#endif

    [self setPolicy: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "insuredPersons", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}insuredPersons of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}insuredPersons of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self insuredPersons]) {
      [self setInsuredPersons: [[self insuredPersons] arrayByAddingObject: __child]];
    }
    else {
      [self setInsuredPersons: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self vehicle]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vehicle", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}vehicle."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}vehicle...");
#endif
    [[self vehicle] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}vehicle...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}vehicle."];
    }
  }
  if ([self policy]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policy", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}policy."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}policy...");
#endif
    [[self policy] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}policy...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}policy."];
    }
  }
  if ([self insuredPersons]) {
    __enumerator = [[self insuredPersons] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "insuredPersons", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}insuredPersons."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}insuredPersons...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}insuredPersons...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}insuredPersons."];
      }
    } //end item iterator.
  }
}
@end /* implementation OPENINSURANCENS0IdCardDetails (JAXB) */

#endif /* DEF_OPENINSURANCENS0IdCardDetails_M */
#ifndef DEF_OPENINSURANCENS0Payment_M
#define DEF_OPENINSURANCENS0Payment_M

/**
 *  The Class Payment.

 */
@implementation OPENINSURANCENS0Payment

/**
 * the paymentId
 */
- (NSString *) paymentId
{
  return _paymentId;
}

/**
 * the paymentId
 */
- (void) setPaymentId: (NSString *) newPaymentId
{
  [newPaymentId retain];
  [_paymentId release];
  _paymentId = newPaymentId;
}

/**
 * the policyId
 */
- (NSString *) policyId
{
  return _policyId;
}

/**
 * the policyId
 */
- (void) setPolicyId: (NSString *) newPolicyId
{
  [newPolicyId retain];
  [_policyId release];
  _policyId = newPolicyId;
}

/**
 * the paymentAmount
 */
- (double) paymentAmount
{
  return _paymentAmount;
}

/**
 * the paymentAmount
 */
- (void) setPaymentAmount: (double) newPaymentAmount
{
  _paymentAmount = newPaymentAmount;
}

/**
 * the paymentType
 */
- (NSString *) paymentType
{
  return _paymentType;
}

/**
 * the paymentType
 */
- (void) setPaymentType: (NSString *) newPaymentType
{
  [newPaymentType retain];
  [_paymentType release];
  _paymentType = newPaymentType;
}

/**
 * the paymentDate
 */
- (NSDate *) paymentDate
{
  return _paymentDate;
}

/**
 * the paymentDate
 */
- (void) setPaymentDate: (NSDate *) newPaymentDate
{
  [newPaymentDate retain];
  [_paymentDate release];
  _paymentDate = newPaymentDate;
}

/**
 * the routingNumber
 */
- (NSString *) routingNumber
{
  return _routingNumber;
}

/**
 * the routingNumber
 */
- (void) setRoutingNumber: (NSString *) newRoutingNumber
{
  [newRoutingNumber retain];
  [_routingNumber release];
  _routingNumber = newRoutingNumber;
}

/**
 * the checkingAccountNumber
 */
- (NSString *) checkingAccountNumber
{
  return _checkingAccountNumber;
}

/**
 * the checkingAccountNumber
 */
- (void) setCheckingAccountNumber: (NSString *) newCheckingAccountNumber
{
  [newCheckingAccountNumber retain];
  [_checkingAccountNumber release];
  _checkingAccountNumber = newCheckingAccountNumber;
}

/**
 * the checkPhotograph
 */
- (NSString *) checkPhotograph
{
  return _checkPhotograph;
}

/**
 * the checkPhotograph
 */
- (void) setCheckPhotograph: (NSString *) newCheckPhotograph
{
  [newCheckPhotograph retain];
  [_checkPhotograph release];
  _checkPhotograph = newCheckPhotograph;
}

/**
 * the creditCardNumber
 */
- (NSString *) creditCardNumber
{
  return _creditCardNumber;
}

/**
 * the creditCardNumber
 */
- (void) setCreditCardNumber: (NSString *) newCreditCardNumber
{
  [newCreditCardNumber retain];
  [_creditCardNumber release];
  _creditCardNumber = newCreditCardNumber;
}

/**
 * the creditCardName
 */
- (NSString *) creditCardName
{
  return _creditCardName;
}

/**
 * the creditCardName
 */
- (void) setCreditCardName: (NSString *) newCreditCardName
{
  [newCreditCardName retain];
  [_creditCardName release];
  _creditCardName = newCreditCardName;
}

/**
 * the cVSCode
 */
- (NSString *) CVSCode
{
  return _CVSCode;
}

/**
 * the cVSCode
 */
- (void) setCVSCode: (NSString *) newCVSCode
{
  [newCVSCode retain];
  [_CVSCode release];
  _CVSCode = newCVSCode;
}

/**
 * the creditCardExpiryDate
 */
- (NSDate *) creditCardExpiryDate
{
  return _creditCardExpiryDate;
}

/**
 * the creditCardExpiryDate
 */
- (void) setCreditCardExpiryDate: (NSDate *) newCreditCardExpiryDate
{
  [newCreditCardExpiryDate retain];
  [_creditCardExpiryDate release];
  _creditCardExpiryDate = newCreditCardExpiryDate;
}

/**
 * the debitCardNumber
 */
- (NSString *) debitCardNumber
{
  return _debitCardNumber;
}

/**
 * the debitCardNumber
 */
- (void) setDebitCardNumber: (NSString *) newDebitCardNumber
{
  [newDebitCardNumber retain];
  [_debitCardNumber release];
  _debitCardNumber = newDebitCardNumber;
}

/**
 * the debitCardName
 */
- (NSString *) debitCardName
{
  return _debitCardName;
}

/**
 * the debitCardName
 */
- (void) setDebitCardName: (NSString *) newDebitCardName
{
  [newDebitCardName retain];
  [_debitCardName release];
  _debitCardName = newDebitCardName;
}

/**
 * the debitCardPin
 */
- (NSString *) debitCardPin
{
  return _debitCardPin;
}

/**
 * the debitCardPin
 */
- (void) setDebitCardPin: (NSString *) newDebitCardPin
{
  [newDebitCardPin retain];
  [_debitCardPin release];
  _debitCardPin = newDebitCardPin;
}

/**
 * the debitCardExpiryDate
 */
- (NSDate *) debitCardExpiryDate
{
  return _debitCardExpiryDate;
}

/**
 * the debitCardExpiryDate
 */
- (void) setDebitCardExpiryDate: (NSDate *) newDebitCardExpiryDate
{
  [newDebitCardExpiryDate retain];
  [_debitCardExpiryDate release];
  _debitCardExpiryDate = newDebitCardExpiryDate;
}

- (void) dealloc
{
  [self setPaymentId: nil];
  [self setPolicyId: nil];
  [self setPaymentType: nil];
  [self setPaymentDate: nil];
  [self setRoutingNumber: nil];
  [self setCheckingAccountNumber: nil];
  [self setCheckPhotograph: nil];
  [self setCreditCardNumber: nil];
  [self setCreditCardName: nil];
  [self setCVSCode: nil];
  [self setCreditCardExpiryDate: nil];
  [self setDebitCardNumber: nil];
  [self setDebitCardName: nil];
  [self setDebitCardPin: nil];
  [self setDebitCardExpiryDate: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  OPENINSURANCENS0Payment *_oPENINSURANCENS0Payment;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oPENINSURANCENS0Payment = (OPENINSURANCENS0Payment *) [OPENINSURANCENS0Payment readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oPENINSURANCENS0Payment;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation OPENINSURANCENS0Payment */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OPENINSURANCENS0Payment (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface OPENINSURANCENS0Payment (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OPENINSURANCENS0Payment (JAXB)

/**
 * Read an instance of OPENINSURANCENS0Payment from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OPENINSURANCENS0Payment defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OPENINSURANCENS0Payment *_oPENINSURANCENS0Payment = [[OPENINSURANCENS0Payment alloc] init];
  NS_DURING
  {
    [_oPENINSURANCENS0Payment initWithReader: reader];
  }
  NS_HANDLER
  {
    _oPENINSURANCENS0Payment = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oPENINSURANCENS0Payment autorelease];
  return _oPENINSURANCENS0Payment;
}

/**
 * Initialize this instance of OPENINSURANCENS0Payment according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OPENINSURANCENS0Payment to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a OPENINSURANCENS0Payment from an XML reader. The element to be read is
 * "payment".
 *
 * @param reader The XML reader.
 * @return The OPENINSURANCENS0Payment.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  OPENINSURANCENS0Payment *_payment = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element payment."];
    }
  }

  if (xmlStrcmp(BAD_CAST "payment", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}payment.");
#endif
    _payment = (OPENINSURANCENS0Payment *)[OPENINSURANCENS0Payment readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}payment.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0Payment. Expected element payment. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0Payment. Expected element payment. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _payment;
}

/**
 * Writes this OPENINSURANCENS0Payment to XML under element name "payment".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _payment The Payment to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this OPENINSURANCENS0Payment to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "payment", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}payment. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}payment for root element {}payment...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}payment for root element {}payment...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}payment. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "paymentId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}paymentId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}paymentId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPaymentId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "policyId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}policyId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}policyId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPolicyId: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "paymentAmount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadDoubleType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPaymentAmount: *((double*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "paymentType", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}paymentType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}paymentType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPaymentType: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "paymentDate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}paymentDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}paymentDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setPaymentDate: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "routingNumber", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}routingNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}routingNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRoutingNumber: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "checkingAccountNumber", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}checkingAccountNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}checkingAccountNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCheckingAccountNumber: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "checkPhotograph", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}checkPhotograph of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}checkPhotograph of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCheckPhotograph: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "creditCardNumber", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}creditCardNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}creditCardNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCreditCardNumber: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "creditCardName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}creditCardName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}creditCardName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCreditCardName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "CVSCode", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}CVSCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}CVSCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCVSCode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "creditCardExpiryDate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}creditCardExpiryDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}creditCardExpiryDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setCreditCardExpiryDate: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "debitCardNumber", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}debitCardNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}debitCardNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDebitCardNumber: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "debitCardName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}debitCardName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}debitCardName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDebitCardName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "debitCardPin", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}debitCardPin of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}debitCardPin of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDebitCardPin: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "debitCardExpiryDate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}debitCardExpiryDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}debitCardExpiryDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setDebitCardExpiryDate: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self paymentId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "paymentId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}paymentId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}paymentId...");
#endif
    [[self paymentId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}paymentId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}paymentId."];
    }
  }
  if ([self policyId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}policyId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}policyId...");
#endif
    [[self policyId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}policyId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}policyId."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "paymentAmount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}paymentAmount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}paymentAmount...");
#endif
    status = xmlTextWriterWriteDoubleType(writer, &_paymentAmount);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}paymentAmount...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}paymentAmount."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}paymentAmount."];
    }
  }
  if ([self paymentType]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "paymentType", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}paymentType."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}paymentType...");
#endif
    [[self paymentType] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}paymentType...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}paymentType."];
    }
  }
  if ([self paymentDate]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "paymentDate", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}paymentDate."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}paymentDate...");
#endif
    [[self paymentDate] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}paymentDate...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}paymentDate."];
    }
  }
  if ([self routingNumber]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "routingNumber", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}routingNumber."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}routingNumber...");
#endif
    [[self routingNumber] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}routingNumber...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}routingNumber."];
    }
  }
  if ([self checkingAccountNumber]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "checkingAccountNumber", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}checkingAccountNumber."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}checkingAccountNumber...");
#endif
    [[self checkingAccountNumber] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}checkingAccountNumber...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}checkingAccountNumber."];
    }
  }
  if ([self checkPhotograph]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "checkPhotograph", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}checkPhotograph."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}checkPhotograph...");
#endif
    [[self checkPhotograph] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}checkPhotograph...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}checkPhotograph."];
    }
  }
  if ([self creditCardNumber]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "creditCardNumber", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}creditCardNumber."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}creditCardNumber...");
#endif
    [[self creditCardNumber] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}creditCardNumber...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}creditCardNumber."];
    }
  }
  if ([self creditCardName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "creditCardName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}creditCardName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}creditCardName...");
#endif
    [[self creditCardName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}creditCardName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}creditCardName."];
    }
  }
  if ([self CVSCode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "CVSCode", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}CVSCode."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}CVSCode...");
#endif
    [[self CVSCode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}CVSCode...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}CVSCode."];
    }
  }
  if ([self creditCardExpiryDate]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "creditCardExpiryDate", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}creditCardExpiryDate."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}creditCardExpiryDate...");
#endif
    [[self creditCardExpiryDate] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}creditCardExpiryDate...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}creditCardExpiryDate."];
    }
  }
  if ([self debitCardNumber]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "debitCardNumber", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}debitCardNumber."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}debitCardNumber...");
#endif
    [[self debitCardNumber] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}debitCardNumber...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}debitCardNumber."];
    }
  }
  if ([self debitCardName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "debitCardName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}debitCardName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}debitCardName...");
#endif
    [[self debitCardName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}debitCardName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}debitCardName."];
    }
  }
  if ([self debitCardPin]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "debitCardPin", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}debitCardPin."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}debitCardPin...");
#endif
    [[self debitCardPin] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}debitCardPin...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}debitCardPin."];
    }
  }
  if ([self debitCardExpiryDate]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "debitCardExpiryDate", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}debitCardExpiryDate."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}debitCardExpiryDate...");
#endif
    [[self debitCardExpiryDate] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}debitCardExpiryDate...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}debitCardExpiryDate."];
    }
  }
}
@end /* implementation OPENINSURANCENS0Payment (JAXB) */

#endif /* DEF_OPENINSURANCENS0Payment_M */
#ifndef DEF_OPENINSURANCENS0Policy_M
#define DEF_OPENINSURANCENS0Policy_M

/**
 *  The Class Policy.

 */
@implementation OPENINSURANCENS0Policy

/**
 * the policyId
 */
- (NSString *) policyId
{
  return _policyId;
}

/**
 * the policyId
 */
- (void) setPolicyId: (NSString *) newPolicyId
{
  [newPolicyId retain];
  [_policyId release];
  _policyId = newPolicyId;
}

/**
 * the policyType
 */
- (NSString *) policyType
{
  return _policyType;
}

/**
 * the policyType
 */
- (void) setPolicyType: (NSString *) newPolicyType
{
  [newPolicyType retain];
  [_policyType release];
  _policyType = newPolicyType;
}

/**
 * the policyNumber
 */
- (NSString *) policyNumber
{
  return _policyNumber;
}

/**
 * the policyNumber
 */
- (void) setPolicyNumber: (NSString *) newPolicyNumber
{
  [newPolicyNumber retain];
  [_policyNumber release];
  _policyNumber = newPolicyNumber;
}

/**
 * the policyEffectiveDate
 */
- (NSDate *) policyEffectiveDate
{
  return _policyEffectiveDate;
}

/**
 * the policyEffectiveDate
 */
- (void) setPolicyEffectiveDate: (NSDate *) newPolicyEffectiveDate
{
  [newPolicyEffectiveDate retain];
  [_policyEffectiveDate release];
  _policyEffectiveDate = newPolicyEffectiveDate;
}

/**
 * the policyExpirationDate
 */
- (NSDate *) policyExpirationDate
{
  return _policyExpirationDate;
}

/**
 * the policyExpirationDate
 */
- (void) setPolicyExpirationDate: (NSDate *) newPolicyExpirationDate
{
  [newPolicyExpirationDate retain];
  [_policyExpirationDate release];
  _policyExpirationDate = newPolicyExpirationDate;
}

/**
 * the policyPremium
 */
- (double) policyPremium
{
  return _policyPremium;
}

/**
 * the policyPremium
 */
- (void) setPolicyPremium: (double) newPolicyPremium
{
  _policyPremium = newPolicyPremium;
}

- (void) dealloc
{
  [self setPolicyId: nil];
  [self setPolicyType: nil];
  [self setPolicyNumber: nil];
  [self setPolicyEffectiveDate: nil];
  [self setPolicyExpirationDate: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  OPENINSURANCENS0Policy *_oPENINSURANCENS0Policy;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oPENINSURANCENS0Policy = (OPENINSURANCENS0Policy *) [OPENINSURANCENS0Policy readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oPENINSURANCENS0Policy;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation OPENINSURANCENS0Policy */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OPENINSURANCENS0Policy (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface OPENINSURANCENS0Policy (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OPENINSURANCENS0Policy (JAXB)

/**
 * Read an instance of OPENINSURANCENS0Policy from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OPENINSURANCENS0Policy defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OPENINSURANCENS0Policy *_oPENINSURANCENS0Policy = [[OPENINSURANCENS0Policy alloc] init];
  NS_DURING
  {
    [_oPENINSURANCENS0Policy initWithReader: reader];
  }
  NS_HANDLER
  {
    _oPENINSURANCENS0Policy = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oPENINSURANCENS0Policy autorelease];
  return _oPENINSURANCENS0Policy;
}

/**
 * Initialize this instance of OPENINSURANCENS0Policy according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OPENINSURANCENS0Policy to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a OPENINSURANCENS0Policy from an XML reader. The element to be read is
 * "policy".
 *
 * @param reader The XML reader.
 * @return The OPENINSURANCENS0Policy.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  OPENINSURANCENS0Policy *_policy = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element policy."];
    }
  }

  if (xmlStrcmp(BAD_CAST "policy", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}policy.");
#endif
    _policy = (OPENINSURANCENS0Policy *)[OPENINSURANCENS0Policy readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}policy.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0Policy. Expected element policy. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0Policy. Expected element policy. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _policy;
}

/**
 * Writes this OPENINSURANCENS0Policy to XML under element name "policy".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _policy The Policy to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this OPENINSURANCENS0Policy to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policy", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}policy. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}policy for root element {}policy...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}policy for root element {}policy...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}policy. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "policyId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}policyId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}policyId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPolicyId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "policyType", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}policyType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}policyType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPolicyType: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "policyNumber", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}policyNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}policyNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPolicyNumber: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "policyEffectiveDate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}policyEffectiveDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}policyEffectiveDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setPolicyEffectiveDate: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "policyExpirationDate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}policyExpirationDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}policyExpirationDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setPolicyExpirationDate: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "policyPremium", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadDoubleType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPolicyPremium: *((double*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self policyId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}policyId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}policyId...");
#endif
    [[self policyId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}policyId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}policyId."];
    }
  }
  if ([self policyType]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyType", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}policyType."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}policyType...");
#endif
    [[self policyType] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}policyType...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}policyType."];
    }
  }
  if ([self policyNumber]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyNumber", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}policyNumber."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}policyNumber...");
#endif
    [[self policyNumber] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}policyNumber...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}policyNumber."];
    }
  }
  if ([self policyEffectiveDate]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyEffectiveDate", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}policyEffectiveDate."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}policyEffectiveDate...");
#endif
    [[self policyEffectiveDate] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}policyEffectiveDate...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}policyEffectiveDate."];
    }
  }
  if ([self policyExpirationDate]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyExpirationDate", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}policyExpirationDate."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}policyExpirationDate...");
#endif
    [[self policyExpirationDate] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}policyExpirationDate...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}policyExpirationDate."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyPremium", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}policyPremium."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}policyPremium...");
#endif
    status = xmlTextWriterWriteDoubleType(writer, &_policyPremium);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}policyPremium...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}policyPremium."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}policyPremium."];
    }
  }
}
@end /* implementation OPENINSURANCENS0Policy (JAXB) */

#endif /* DEF_OPENINSURANCENS0Policy_M */
#ifndef DEF_OPENINSURANCENS0Vehicle_M
#define DEF_OPENINSURANCENS0Vehicle_M

/**
 *  The Class Vehicle.

 */
@implementation OPENINSURANCENS0Vehicle

/**
 * the vehicleId
 */
- (NSString *) vehicleId
{
  return _vehicleId;
}

/**
 * the vehicleId
 */
- (void) setVehicleId: (NSString *) newVehicleId
{
  [newVehicleId retain];
  [_vehicleId release];
  _vehicleId = newVehicleId;
}

/**
 * the make
 */
- (NSString *) make
{
  return _make;
}

/**
 * the make
 */
- (void) setMake: (NSString *) newMake
{
  [newMake retain];
  [_make release];
  _make = newMake;
}

/**
 * the model
 */
- (NSString *) model
{
  return _model;
}

/**
 * the model
 */
- (void) setModel: (NSString *) newModel
{
  [newModel retain];
  [_model release];
  _model = newModel;
}

/**
 * the year
 */
- (int) year
{
  return _year;
}

/**
 * the year
 */
- (void) setYear: (int) newYear
{
  _year = newYear;
}

/**
 * the vin
 */
- (NSString *) vin
{
  return _vin;
}

/**
 * the vin
 */
- (void) setVin: (NSString *) newVin
{
  [newVin retain];
  [_vin release];
  _vin = newVin;
}

/**
 * the licensePlate
 */
- (NSString *) licensePlate
{
  return _licensePlate;
}

/**
 * the licensePlate
 */
- (void) setLicensePlate: (NSString *) newLicensePlate
{
  [newLicensePlate retain];
  [_licensePlate release];
  _licensePlate = newLicensePlate;
}

/**
 * the vehiclePhoto
 */
- (NSString *) vehiclePhoto
{
  return _vehiclePhoto;
}

/**
 * the vehiclePhoto
 */
- (void) setVehiclePhoto: (NSString *) newVehiclePhoto
{
  [newVehiclePhoto retain];
  [_vehiclePhoto release];
  _vehiclePhoto = newVehiclePhoto;
}

- (void) dealloc
{
  [self setVehicleId: nil];
  [self setMake: nil];
  [self setModel: nil];
  [self setVin: nil];
  [self setLicensePlate: nil];
  [self setVehiclePhoto: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  OPENINSURANCENS0Vehicle *_oPENINSURANCENS0Vehicle;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oPENINSURANCENS0Vehicle = (OPENINSURANCENS0Vehicle *) [OPENINSURANCENS0Vehicle readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oPENINSURANCENS0Vehicle;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation OPENINSURANCENS0Vehicle */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OPENINSURANCENS0Vehicle (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface OPENINSURANCENS0Vehicle (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OPENINSURANCENS0Vehicle (JAXB)

/**
 * Read an instance of OPENINSURANCENS0Vehicle from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OPENINSURANCENS0Vehicle defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OPENINSURANCENS0Vehicle *_oPENINSURANCENS0Vehicle = [[OPENINSURANCENS0Vehicle alloc] init];
  NS_DURING
  {
    [_oPENINSURANCENS0Vehicle initWithReader: reader];
  }
  NS_HANDLER
  {
    _oPENINSURANCENS0Vehicle = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oPENINSURANCENS0Vehicle autorelease];
  return _oPENINSURANCENS0Vehicle;
}

/**
 * Initialize this instance of OPENINSURANCENS0Vehicle according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OPENINSURANCENS0Vehicle to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a OPENINSURANCENS0Vehicle from an XML reader. The element to be read is
 * "vehicle".
 *
 * @param reader The XML reader.
 * @return The OPENINSURANCENS0Vehicle.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  OPENINSURANCENS0Vehicle *_vehicle = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element vehicle."];
    }
  }

  if (xmlStrcmp(BAD_CAST "vehicle", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}vehicle.");
#endif
    _vehicle = (OPENINSURANCENS0Vehicle *)[OPENINSURANCENS0Vehicle readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}vehicle.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0Vehicle. Expected element vehicle. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0Vehicle. Expected element vehicle. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _vehicle;
}

/**
 * Writes this OPENINSURANCENS0Vehicle to XML under element name "vehicle".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _vehicle The Vehicle to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this OPENINSURANCENS0Vehicle to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vehicle", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}vehicle. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}vehicle for root element {}vehicle...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}vehicle for root element {}vehicle...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}vehicle. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "vehicleId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}vehicleId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}vehicleId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setVehicleId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "make", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}make of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}make of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMake: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "model", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}model of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}model of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setModel: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "year", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setYear: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "vin", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}vin of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}vin of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setVin: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "licensePlate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}licensePlate of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}licensePlate of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setLicensePlate: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "vehiclePhoto", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}vehiclePhoto of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}vehiclePhoto of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setVehiclePhoto: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self vehicleId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vehicleId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}vehicleId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}vehicleId...");
#endif
    [[self vehicleId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}vehicleId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}vehicleId."];
    }
  }
  if ([self make]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "make", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}make."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}make...");
#endif
    [[self make] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}make...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}make."];
    }
  }
  if ([self model]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "model", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}model."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}model...");
#endif
    [[self model] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}model...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}model."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "year", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}year."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}year...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_year);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}year...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}year."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}year."];
    }
  }
  if ([self vin]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vin", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}vin."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}vin...");
#endif
    [[self vin] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}vin...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}vin."];
    }
  }
  if ([self licensePlate]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "licensePlate", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}licensePlate."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}licensePlate...");
#endif
    [[self licensePlate] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}licensePlate...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}licensePlate."];
    }
  }
  if ([self vehiclePhoto]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vehiclePhoto", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}vehiclePhoto."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}vehiclePhoto...");
#endif
    [[self vehiclePhoto] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}vehiclePhoto...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}vehiclePhoto."];
    }
  }
}
@end /* implementation OPENINSURANCENS0Vehicle (JAXB) */

#endif /* DEF_OPENINSURANCENS0Vehicle_M */
#ifndef DEF_OPENINSURANCENS0TowingCompany_M
#define DEF_OPENINSURANCENS0TowingCompany_M

/**
 *  The Class TowingCompany.

 */
@implementation OPENINSURANCENS0TowingCompany

/**
 * the name
 */
- (NSString *) name
{
  return _name;
}

/**
 * the name
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * the address1
 */
- (NSString *) address1
{
  return _address1;
}

/**
 * the address1
 */
- (void) setAddress1: (NSString *) newAddress1
{
  [newAddress1 retain];
  [_address1 release];
  _address1 = newAddress1;
}

/**
 * the address2
 */
- (NSString *) address2
{
  return _address2;
}

/**
 * the address2
 */
- (void) setAddress2: (NSString *) newAddress2
{
  [newAddress2 retain];
  [_address2 release];
  _address2 = newAddress2;
}

/**
 * the city
 */
- (NSString *) city
{
  return _city;
}

/**
 * the city
 */
- (void) setCity: (NSString *) newCity
{
  [newCity retain];
  [_city release];
  _city = newCity;
}

/**
 * the province
 */
- (NSString *) province
{
  return _province;
}

/**
 * the province
 */
- (void) setProvince: (NSString *) newProvince
{
  [newProvince retain];
  [_province release];
  _province = newProvince;
}

/**
 * the pinCode
 */
- (NSString *) pinCode
{
  return _pinCode;
}

/**
 * the pinCode
 */
- (void) setPinCode: (NSString *) newPinCode
{
  [newPinCode retain];
  [_pinCode release];
  _pinCode = newPinCode;
}

/**
 * the phone
 */
- (int) phone
{
  return _phone;
}

/**
 * the phone
 */
- (void) setPhone: (int) newPhone
{
  _phone = newPhone;
}

/**
 * the emailId
 */
- (NSString *) emailId
{
  return _emailId;
}

/**
 * the emailId
 */
- (void) setEmailId: (NSString *) newEmailId
{
  [newEmailId retain];
  [_emailId release];
  _emailId = newEmailId;
}

- (void) dealloc
{
  [self setName: nil];
  [self setAddress1: nil];
  [self setAddress2: nil];
  [self setCity: nil];
  [self setProvince: nil];
  [self setPinCode: nil];
  [self setEmailId: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  OPENINSURANCENS0TowingCompany *_oPENINSURANCENS0TowingCompany;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oPENINSURANCENS0TowingCompany = (OPENINSURANCENS0TowingCompany *) [OPENINSURANCENS0TowingCompany readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oPENINSURANCENS0TowingCompany;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation OPENINSURANCENS0TowingCompany */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OPENINSURANCENS0TowingCompany (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface OPENINSURANCENS0TowingCompany (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OPENINSURANCENS0TowingCompany (JAXB)

/**
 * Read an instance of OPENINSURANCENS0TowingCompany from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OPENINSURANCENS0TowingCompany defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OPENINSURANCENS0TowingCompany *_oPENINSURANCENS0TowingCompany = [[OPENINSURANCENS0TowingCompany alloc] init];
  NS_DURING
  {
    [_oPENINSURANCENS0TowingCompany initWithReader: reader];
  }
  NS_HANDLER
  {
    _oPENINSURANCENS0TowingCompany = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oPENINSURANCENS0TowingCompany autorelease];
  return _oPENINSURANCENS0TowingCompany;
}

/**
 * Initialize this instance of OPENINSURANCENS0TowingCompany according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OPENINSURANCENS0TowingCompany to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a OPENINSURANCENS0TowingCompany from an XML reader. The element to be read is
 * "towingCompany".
 *
 * @param reader The XML reader.
 * @return The OPENINSURANCENS0TowingCompany.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  OPENINSURANCENS0TowingCompany *_towingCompany = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element towingCompany."];
    }
  }

  if (xmlStrcmp(BAD_CAST "towingCompany", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}towingCompany.");
#endif
    _towingCompany = (OPENINSURANCENS0TowingCompany *)[OPENINSURANCENS0TowingCompany readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}towingCompany.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0TowingCompany. Expected element towingCompany. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0TowingCompany. Expected element towingCompany. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _towingCompany;
}

/**
 * Writes this OPENINSURANCENS0TowingCompany to XML under element name "towingCompany".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _towingCompany The TowingCompany to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this OPENINSURANCENS0TowingCompany to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "towingCompany", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}towingCompany. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}towingCompany for root element {}towingCompany...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}towingCompany for root element {}towingCompany...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}towingCompany. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "address1", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}address1 of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}address1 of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAddress1: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "address2", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}address2 of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}address2 of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAddress2: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "city", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCity: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "province", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}province of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}province of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setProvince: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "pinCode", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}pinCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}pinCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPinCode: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "phone", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPhone: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "emailId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}emailId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}emailId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEmailId: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self address1]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address1", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}address1."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}address1...");
#endif
    [[self address1] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}address1...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}address1."];
    }
  }
  if ([self address2]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address2", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}address2."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}address2...");
#endif
    [[self address2] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}address2...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}address2."];
    }
  }
  if ([self city]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "city", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}city."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}city...");
#endif
    [[self city] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}city...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}city."];
    }
  }
  if ([self province]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "province", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}province."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}province...");
#endif
    [[self province] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}province...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}province."];
    }
  }
  if ([self pinCode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "pinCode", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}pinCode."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}pinCode...");
#endif
    [[self pinCode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}pinCode...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}pinCode."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "phone", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}phone."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}phone...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_phone);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}phone...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}phone."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}phone."];
    }
  }
  if ([self emailId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "emailId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}emailId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}emailId...");
#endif
    [[self emailId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}emailId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}emailId."];
    }
  }
}
@end /* implementation OPENINSURANCENS0TowingCompany (JAXB) */

#endif /* DEF_OPENINSURANCENS0TowingCompany_M */
#ifndef DEF_OPENINSURANCENS0PaymentResponse_M
#define DEF_OPENINSURANCENS0PaymentResponse_M

/**
 *  The Class PaymentResponse.

 */
@implementation OPENINSURANCENS0PaymentResponse

/**
 * the reponseStatus
 */
- (NSString *) reponseStatus
{
  return _reponseStatus;
}

/**
 * the reponseStatus
 */
- (void) setReponseStatus: (NSString *) newReponseStatus
{
  [newReponseStatus retain];
  [_reponseStatus release];
  _reponseStatus = newReponseStatus;
}

/**
 * the responseDescription
 */
- (NSString *) responseDescription
{
  return _responseDescription;
}

/**
 * the responseDescription
 */
- (void) setResponseDescription: (NSString *) newResponseDescription
{
  [newResponseDescription retain];
  [_responseDescription release];
  _responseDescription = newResponseDescription;
}

- (void) dealloc
{
  [self setReponseStatus: nil];
  [self setResponseDescription: nil];
  [super dealloc];
}
@end /* implementation OPENINSURANCENS0PaymentResponse */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OPENINSURANCENS0PaymentResponse (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface OPENINSURANCENS0PaymentResponse (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OPENINSURANCENS0PaymentResponse (JAXB)

/**
 * Read an instance of OPENINSURANCENS0PaymentResponse from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OPENINSURANCENS0PaymentResponse defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OPENINSURANCENS0PaymentResponse *_oPENINSURANCENS0PaymentResponse = [[OPENINSURANCENS0PaymentResponse alloc] init];
  NS_DURING
  {
    [_oPENINSURANCENS0PaymentResponse initWithReader: reader];
  }
  NS_HANDLER
  {
    _oPENINSURANCENS0PaymentResponse = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oPENINSURANCENS0PaymentResponse autorelease];
  return _oPENINSURANCENS0PaymentResponse;
}

/**
 * Initialize this instance of OPENINSURANCENS0PaymentResponse according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OPENINSURANCENS0PaymentResponse to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "reponseStatus", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}reponseStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}reponseStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setReponseStatus: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "responseDescription", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}responseDescription of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}responseDescription of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setResponseDescription: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self reponseStatus]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "reponseStatus", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}reponseStatus."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}reponseStatus...");
#endif
    [[self reponseStatus] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}reponseStatus...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}reponseStatus."];
    }
  }
  if ([self responseDescription]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "responseDescription", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}responseDescription."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}responseDescription...");
#endif
    [[self responseDescription] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}responseDescription...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}responseDescription."];
    }
  }
}
@end /* implementation OPENINSURANCENS0PaymentResponse (JAXB) */

#endif /* DEF_OPENINSURANCENS0PaymentResponse_M */
#ifndef DEF_OPENINSURANCENS0MessageDetails_M
#define DEF_OPENINSURANCENS0MessageDetails_M

/**
 *  The Class MessageDetails.

 */
@implementation OPENINSURANCENS0MessageDetails

/**
 * the messageId
 */
- (NSString *) messageId
{
  return _messageId;
}

/**
 * the messageId
 */
- (void) setMessageId: (NSString *) newMessageId
{
  [newMessageId retain];
  [_messageId release];
  _messageId = newMessageId;
}

/**
 * the messageDetail
 */
- (NSString *) messageDetail
{
  return _messageDetail;
}

/**
 * the messageDetail
 */
- (void) setMessageDetail: (NSString *) newMessageDetail
{
  [newMessageDetail retain];
  [_messageDetail release];
  _messageDetail = newMessageDetail;
}

- (void) dealloc
{
  [self setMessageId: nil];
  [self setMessageDetail: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  OPENINSURANCENS0MessageDetails *_oPENINSURANCENS0MessageDetails;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oPENINSURANCENS0MessageDetails = (OPENINSURANCENS0MessageDetails *) [OPENINSURANCENS0MessageDetails readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oPENINSURANCENS0MessageDetails;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation OPENINSURANCENS0MessageDetails */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OPENINSURANCENS0MessageDetails (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface OPENINSURANCENS0MessageDetails (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OPENINSURANCENS0MessageDetails (JAXB)

/**
 * Read an instance of OPENINSURANCENS0MessageDetails from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OPENINSURANCENS0MessageDetails defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OPENINSURANCENS0MessageDetails *_oPENINSURANCENS0MessageDetails = [[OPENINSURANCENS0MessageDetails alloc] init];
  NS_DURING
  {
    [_oPENINSURANCENS0MessageDetails initWithReader: reader];
  }
  NS_HANDLER
  {
    _oPENINSURANCENS0MessageDetails = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oPENINSURANCENS0MessageDetails autorelease];
  return _oPENINSURANCENS0MessageDetails;
}

/**
 * Initialize this instance of OPENINSURANCENS0MessageDetails according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OPENINSURANCENS0MessageDetails to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a OPENINSURANCENS0MessageDetails from an XML reader. The element to be read is
 * "messageDetails".
 *
 * @param reader The XML reader.
 * @return The OPENINSURANCENS0MessageDetails.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  OPENINSURANCENS0MessageDetails *_messageDetails = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element messageDetails."];
    }
  }

  if (xmlStrcmp(BAD_CAST "messageDetails", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}messageDetails.");
#endif
    _messageDetails = (OPENINSURANCENS0MessageDetails *)[OPENINSURANCENS0MessageDetails readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}messageDetails.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0MessageDetails. Expected element messageDetails. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0MessageDetails. Expected element messageDetails. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _messageDetails;
}

/**
 * Writes this OPENINSURANCENS0MessageDetails to XML under element name "messageDetails".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _messageDetails The MessageDetails to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this OPENINSURANCENS0MessageDetails to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "messageDetails", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}messageDetails. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}messageDetails for root element {}messageDetails...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}messageDetails for root element {}messageDetails...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}messageDetails. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "messageId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}messageId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}messageId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMessageId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "messageDetail", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}messageDetail of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}messageDetail of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMessageDetail: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self messageId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "messageId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}messageId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}messageId...");
#endif
    [[self messageId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}messageId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}messageId."];
    }
  }
  if ([self messageDetail]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "messageDetail", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}messageDetail."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}messageDetail...");
#endif
    [[self messageDetail] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}messageDetail...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}messageDetail."];
    }
  }
}
@end /* implementation OPENINSURANCENS0MessageDetails (JAXB) */

#endif /* DEF_OPENINSURANCENS0MessageDetails_M */
#ifndef DEF_OPENINSURANCENS0FaqDetail_M
#define DEF_OPENINSURANCENS0FaqDetail_M

/**
 *  The Class FaqDetail.

 */
@implementation OPENINSURANCENS0FaqDetail

/**
 * the faqId
 */
- (NSString *) faqId
{
  return _faqId;
}

/**
 * the faqId
 */
- (void) setFaqId: (NSString *) newFaqId
{
  [newFaqId retain];
  [_faqId release];
  _faqId = newFaqId;
}

/**
 * the faqDetails
 */
- (NSString *) faqDetails
{
  return _faqDetails;
}

/**
 * the faqDetails
 */
- (void) setFaqDetails: (NSString *) newFaqDetails
{
  [newFaqDetails retain];
  [_faqDetails release];
  _faqDetails = newFaqDetails;
}

- (void) dealloc
{
  [self setFaqId: nil];
  [self setFaqDetails: nil];
  [super dealloc];
}
@end /* implementation OPENINSURANCENS0FaqDetail */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OPENINSURANCENS0FaqDetail (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface OPENINSURANCENS0FaqDetail (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OPENINSURANCENS0FaqDetail (JAXB)

/**
 * Read an instance of OPENINSURANCENS0FaqDetail from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OPENINSURANCENS0FaqDetail defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OPENINSURANCENS0FaqDetail *_oPENINSURANCENS0FaqDetail = [[OPENINSURANCENS0FaqDetail alloc] init];
  NS_DURING
  {
    [_oPENINSURANCENS0FaqDetail initWithReader: reader];
  }
  NS_HANDLER
  {
    _oPENINSURANCENS0FaqDetail = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oPENINSURANCENS0FaqDetail autorelease];
  return _oPENINSURANCENS0FaqDetail;
}

/**
 * Initialize this instance of OPENINSURANCENS0FaqDetail according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OPENINSURANCENS0FaqDetail to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "faqId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}faqId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}faqId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFaqId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "faqDetails", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}faqDetails of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}faqDetails of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFaqDetails: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self faqId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "faqId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}faqId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}faqId...");
#endif
    [[self faqId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}faqId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}faqId."];
    }
  }
  if ([self faqDetails]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "faqDetails", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}faqDetails."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}faqDetails...");
#endif
    [[self faqDetails] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}faqDetails...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}faqDetails."];
    }
  }
}
@end /* implementation OPENINSURANCENS0FaqDetail (JAXB) */

#endif /* DEF_OPENINSURANCENS0FaqDetail_M */
#ifndef DEF_OPENINSURANCENS0Coverage_M
#define DEF_OPENINSURANCENS0Coverage_M

/**
 *  The Class Coverage.

 */
@implementation OPENINSURANCENS0Coverage

/**
 * the coverageId
 */
- (NSString *) coverageId
{
  return _coverageId;
}

/**
 * the coverageId
 */
- (void) setCoverageId: (NSString *) newCoverageId
{
  [newCoverageId retain];
  [_coverageId release];
  _coverageId = newCoverageId;
}

/**
 * the coverageTypeId
 */
- (NSString *) coverageTypeId
{
  return _coverageTypeId;
}

/**
 * the coverageTypeId
 */
- (void) setCoverageTypeId: (NSString *) newCoverageTypeId
{
  [newCoverageTypeId retain];
  [_coverageTypeId release];
  _coverageTypeId = newCoverageTypeId;
}

/**
 * the coverageAmount
 */
- (NSString *) coverageAmount
{
  return _coverageAmount;
}

/**
 * the coverageAmount
 */
- (void) setCoverageAmount: (NSString *) newCoverageAmount
{
  [newCoverageAmount retain];
  [_coverageAmount release];
  _coverageAmount = newCoverageAmount;
}

/**
 * the coverageLimit
 */
- (NSString *) coverageLimit
{
  return _coverageLimit;
}

/**
 * the coverageLimit
 */
- (void) setCoverageLimit: (NSString *) newCoverageLimit
{
  [newCoverageLimit retain];
  [_coverageLimit release];
  _coverageLimit = newCoverageLimit;
}

/**
 * the deductible
 */
- (NSString *) deductible
{
  return _deductible;
}

/**
 * the deductible
 */
- (void) setDeductible: (NSString *) newDeductible
{
  [newDeductible retain];
  [_deductible release];
  _deductible = newDeductible;
}

- (void) dealloc
{
  [self setCoverageId: nil];
  [self setCoverageTypeId: nil];
  [self setCoverageAmount: nil];
  [self setCoverageLimit: nil];
  [self setDeductible: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  OPENINSURANCENS0Coverage *_oPENINSURANCENS0Coverage;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oPENINSURANCENS0Coverage = (OPENINSURANCENS0Coverage *) [OPENINSURANCENS0Coverage readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oPENINSURANCENS0Coverage;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation OPENINSURANCENS0Coverage */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OPENINSURANCENS0Coverage (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface OPENINSURANCENS0Coverage (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OPENINSURANCENS0Coverage (JAXB)

/**
 * Read an instance of OPENINSURANCENS0Coverage from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OPENINSURANCENS0Coverage defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OPENINSURANCENS0Coverage *_oPENINSURANCENS0Coverage = [[OPENINSURANCENS0Coverage alloc] init];
  NS_DURING
  {
    [_oPENINSURANCENS0Coverage initWithReader: reader];
  }
  NS_HANDLER
  {
    _oPENINSURANCENS0Coverage = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oPENINSURANCENS0Coverage autorelease];
  return _oPENINSURANCENS0Coverage;
}

/**
 * Initialize this instance of OPENINSURANCENS0Coverage according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OPENINSURANCENS0Coverage to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a OPENINSURANCENS0Coverage from an XML reader. The element to be read is
 * "coverage".
 *
 * @param reader The XML reader.
 * @return The OPENINSURANCENS0Coverage.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  OPENINSURANCENS0Coverage *_coverage = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element coverage."];
    }
  }

  if (xmlStrcmp(BAD_CAST "coverage", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}coverage.");
#endif
    _coverage = (OPENINSURANCENS0Coverage *)[OPENINSURANCENS0Coverage readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}coverage.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0Coverage. Expected element coverage. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0Coverage. Expected element coverage. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _coverage;
}

/**
 * Writes this OPENINSURANCENS0Coverage to XML under element name "coverage".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _coverage The Coverage to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this OPENINSURANCENS0Coverage to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "coverage", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}coverage. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}coverage for root element {}coverage...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}coverage for root element {}coverage...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}coverage. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "coverageId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}coverageId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}coverageId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCoverageId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "coverageTypeId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}coverageTypeId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}coverageTypeId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCoverageTypeId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "coverageAmount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}coverageAmount of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}coverageAmount of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCoverageAmount: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "coverageLimit", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}coverageLimit of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}coverageLimit of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCoverageLimit: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "deductible", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}deductible of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}deductible of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDeductible: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self coverageId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "coverageId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}coverageId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}coverageId...");
#endif
    [[self coverageId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}coverageId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}coverageId."];
    }
  }
  if ([self coverageTypeId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "coverageTypeId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}coverageTypeId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}coverageTypeId...");
#endif
    [[self coverageTypeId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}coverageTypeId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}coverageTypeId."];
    }
  }
  if ([self coverageAmount]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "coverageAmount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}coverageAmount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}coverageAmount...");
#endif
    [[self coverageAmount] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}coverageAmount...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}coverageAmount."];
    }
  }
  if ([self coverageLimit]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "coverageLimit", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}coverageLimit."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}coverageLimit...");
#endif
    [[self coverageLimit] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}coverageLimit...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}coverageLimit."];
    }
  }
  if ([self deductible]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "deductible", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}deductible."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}deductible...");
#endif
    [[self deductible] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}deductible...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}deductible."];
    }
  }
}
@end /* implementation OPENINSURANCENS0Coverage (JAXB) */

#endif /* DEF_OPENINSURANCENS0Coverage_M */
#ifndef DEF_OPENINSURANCENS0BodyShop_M
#define DEF_OPENINSURANCENS0BodyShop_M

/**
 *  The Class BodyShop.

 */
@implementation OPENINSURANCENS0BodyShop

/**
 * the name
 */
- (NSString *) name
{
  return _name;
}

/**
 * the name
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * the address1
 */
- (NSString *) address1
{
  return _address1;
}

/**
 * the address1
 */
- (void) setAddress1: (NSString *) newAddress1
{
  [newAddress1 retain];
  [_address1 release];
  _address1 = newAddress1;
}

/**
 * the address2
 */
- (NSString *) address2
{
  return _address2;
}

/**
 * the address2
 */
- (void) setAddress2: (NSString *) newAddress2
{
  [newAddress2 retain];
  [_address2 release];
  _address2 = newAddress2;
}

/**
 * the city
 */
- (NSString *) city
{
  return _city;
}

/**
 * the city
 */
- (void) setCity: (NSString *) newCity
{
  [newCity retain];
  [_city release];
  _city = newCity;
}

/**
 * the province
 */
- (NSString *) province
{
  return _province;
}

/**
 * the province
 */
- (void) setProvince: (NSString *) newProvince
{
  [newProvince retain];
  [_province release];
  _province = newProvince;
}

/**
 * the pinCode
 */
- (NSString *) pinCode
{
  return _pinCode;
}

/**
 * the pinCode
 */
- (void) setPinCode: (NSString *) newPinCode
{
  [newPinCode retain];
  [_pinCode release];
  _pinCode = newPinCode;
}

/**
 * the phone
 */
- (int) phone
{
  return _phone;
}

/**
 * the phone
 */
- (void) setPhone: (int) newPhone
{
  _phone = newPhone;
}

/**
 * the emailId
 */
- (NSString *) emailId
{
  return _emailId;
}

/**
 * the emailId
 */
- (void) setEmailId: (NSString *) newEmailId
{
  [newEmailId retain];
  [_emailId release];
  _emailId = newEmailId;
}

- (void) dealloc
{
  [self setName: nil];
  [self setAddress1: nil];
  [self setAddress2: nil];
  [self setCity: nil];
  [self setProvince: nil];
  [self setPinCode: nil];
  [self setEmailId: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  OPENINSURANCENS0BodyShop *_oPENINSURANCENS0BodyShop;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oPENINSURANCENS0BodyShop = (OPENINSURANCENS0BodyShop *) [OPENINSURANCENS0BodyShop readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oPENINSURANCENS0BodyShop;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation OPENINSURANCENS0BodyShop */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OPENINSURANCENS0BodyShop (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface OPENINSURANCENS0BodyShop (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OPENINSURANCENS0BodyShop (JAXB)

/**
 * Read an instance of OPENINSURANCENS0BodyShop from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OPENINSURANCENS0BodyShop defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OPENINSURANCENS0BodyShop *_oPENINSURANCENS0BodyShop = [[OPENINSURANCENS0BodyShop alloc] init];
  NS_DURING
  {
    [_oPENINSURANCENS0BodyShop initWithReader: reader];
  }
  NS_HANDLER
  {
    _oPENINSURANCENS0BodyShop = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oPENINSURANCENS0BodyShop autorelease];
  return _oPENINSURANCENS0BodyShop;
}

/**
 * Initialize this instance of OPENINSURANCENS0BodyShop according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OPENINSURANCENS0BodyShop to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a OPENINSURANCENS0BodyShop from an XML reader. The element to be read is
 * "bodyShop".
 *
 * @param reader The XML reader.
 * @return The OPENINSURANCENS0BodyShop.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  OPENINSURANCENS0BodyShop *_bodyShop = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element bodyShop."];
    }
  }

  if (xmlStrcmp(BAD_CAST "bodyShop", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}bodyShop.");
#endif
    _bodyShop = (OPENINSURANCENS0BodyShop *)[OPENINSURANCENS0BodyShop readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}bodyShop.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0BodyShop. Expected element bodyShop. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0BodyShop. Expected element bodyShop. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _bodyShop;
}

/**
 * Writes this OPENINSURANCENS0BodyShop to XML under element name "bodyShop".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _bodyShop The BodyShop to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this OPENINSURANCENS0BodyShop to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "bodyShop", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}bodyShop. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}bodyShop for root element {}bodyShop...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}bodyShop for root element {}bodyShop...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}bodyShop. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "address1", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}address1 of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}address1 of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAddress1: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "address2", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}address2 of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}address2 of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAddress2: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "city", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCity: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "province", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}province of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}province of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setProvince: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "pinCode", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}pinCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}pinCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPinCode: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "phone", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPhone: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "emailId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}emailId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}emailId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEmailId: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self address1]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address1", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}address1."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}address1...");
#endif
    [[self address1] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}address1...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}address1."];
    }
  }
  if ([self address2]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address2", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}address2."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}address2...");
#endif
    [[self address2] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}address2...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}address2."];
    }
  }
  if ([self city]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "city", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}city."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}city...");
#endif
    [[self city] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}city...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}city."];
    }
  }
  if ([self province]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "province", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}province."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}province...");
#endif
    [[self province] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}province...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}province."];
    }
  }
  if ([self pinCode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "pinCode", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}pinCode."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}pinCode...");
#endif
    [[self pinCode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}pinCode...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}pinCode."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "phone", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}phone."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}phone...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_phone);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}phone...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}phone."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}phone."];
    }
  }
  if ([self emailId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "emailId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}emailId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}emailId...");
#endif
    [[self emailId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}emailId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}emailId."];
    }
  }
}
@end /* implementation OPENINSURANCENS0BodyShop (JAXB) */

#endif /* DEF_OPENINSURANCENS0BodyShop_M */
#ifndef DEF_OPENINSURANCENS0Billing_M
#define DEF_OPENINSURANCENS0Billing_M

/**
 *  The Class Billing.

 */
@implementation OPENINSURANCENS0Billing

/**
 * the policyId
 */
- (NSString *) policyId
{
  return _policyId;
}

/**
 * the policyId
 */
- (void) setPolicyId: (NSString *) newPolicyId
{
  [newPolicyId retain];
  [_policyId release];
  _policyId = newPolicyId;
}

/**
 * the policyBalance
 */
- (double) policyBalance
{
  return _policyBalance;
}

/**
 * the policyBalance
 */
- (void) setPolicyBalance: (double) newPolicyBalance
{
  _policyBalance = newPolicyBalance;
}

/**
 * the lastPaymentDate
 */
- (NSDate *) lastPaymentDate
{
  return _lastPaymentDate;
}

/**
 * the lastPaymentDate
 */
- (void) setLastPaymentDate: (NSDate *) newLastPaymentDate
{
  [newLastPaymentDate retain];
  [_lastPaymentDate release];
  _lastPaymentDate = newLastPaymentDate;
}

/**
 * the amountBalance
 */
- (double) amountBalance
{
  return _amountBalance;
}

/**
 * the amountBalance
 */
- (void) setAmountBalance: (double) newAmountBalance
{
  _amountBalance = newAmountBalance;
}

- (void) dealloc
{
  [self setPolicyId: nil];
  [self setLastPaymentDate: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  OPENINSURANCENS0Billing *_oPENINSURANCENS0Billing;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oPENINSURANCENS0Billing = (OPENINSURANCENS0Billing *) [OPENINSURANCENS0Billing readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oPENINSURANCENS0Billing;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation OPENINSURANCENS0Billing */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OPENINSURANCENS0Billing (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface OPENINSURANCENS0Billing (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OPENINSURANCENS0Billing (JAXB)

/**
 * Read an instance of OPENINSURANCENS0Billing from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OPENINSURANCENS0Billing defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OPENINSURANCENS0Billing *_oPENINSURANCENS0Billing = [[OPENINSURANCENS0Billing alloc] init];
  NS_DURING
  {
    [_oPENINSURANCENS0Billing initWithReader: reader];
  }
  NS_HANDLER
  {
    _oPENINSURANCENS0Billing = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oPENINSURANCENS0Billing autorelease];
  return _oPENINSURANCENS0Billing;
}

/**
 * Initialize this instance of OPENINSURANCENS0Billing according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OPENINSURANCENS0Billing to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a OPENINSURANCENS0Billing from an XML reader. The element to be read is
 * "billing".
 *
 * @param reader The XML reader.
 * @return The OPENINSURANCENS0Billing.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  OPENINSURANCENS0Billing *_billing = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element billing."];
    }
  }

  if (xmlStrcmp(BAD_CAST "billing", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}billing.");
#endif
    _billing = (OPENINSURANCENS0Billing *)[OPENINSURANCENS0Billing readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}billing.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0Billing. Expected element billing. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OPENINSURANCENS0Billing. Expected element billing. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _billing;
}

/**
 * Writes this OPENINSURANCENS0Billing to XML under element name "billing".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _billing The Billing to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this OPENINSURANCENS0Billing to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "billing", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}billing. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}billing for root element {}billing...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}billing for root element {}billing...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}billing. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "policyId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}policyId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}policyId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPolicyId: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "policyBalance", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadDoubleType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPolicyBalance: *((double*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "lastPaymentDate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}lastPaymentDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}lastPaymentDate of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setLastPaymentDate: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "amountBalance", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadDoubleType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setAmountBalance: *((double*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self policyId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}policyId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}policyId...");
#endif
    [[self policyId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}policyId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}policyId."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "policyBalance", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}policyBalance."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}policyBalance...");
#endif
    status = xmlTextWriterWriteDoubleType(writer, &_policyBalance);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}policyBalance...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}policyBalance."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}policyBalance."];
    }
  }
  if ([self lastPaymentDate]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lastPaymentDate", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}lastPaymentDate."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}lastPaymentDate...");
#endif
    [[self lastPaymentDate] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}lastPaymentDate...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}lastPaymentDate."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "amountBalance", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}amountBalance."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}amountBalance...");
#endif
    status = xmlTextWriterWriteDoubleType(writer, &_amountBalance);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}amountBalance...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}amountBalance."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}amountBalance."];
    }
  }
}
@end /* implementation OPENINSURANCENS0Billing (JAXB) */

#endif /* DEF_OPENINSURANCENS0Billing_M */
