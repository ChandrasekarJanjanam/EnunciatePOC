#import "enunciate-common.h"

@class OPENINSURANCENS0Claim;
@class OPENINSURANCENS0Driver;
@class OPENINSURANCENS0IdCardDetails;
@class OPENINSURANCENS0Payment;
@class OPENINSURANCENS0Policy;
@class OPENINSURANCENS0Vehicle;
@class OPENINSURANCENS0TowingCompany;
@class OPENINSURANCENS0PaymentResponse;
@class OPENINSURANCENS0MessageDetails;
@class OPENINSURANCENS0FaqDetail;
@class OPENINSURANCENS0Coverage;
@class OPENINSURANCENS0BodyShop;
@class OPENINSURANCENS0Billing;

#ifndef DEF_OPENINSURANCENS0Claim_H
#define DEF_OPENINSURANCENS0Claim_H

/**
 *  The Class Claim.

 */
@interface OPENINSURANCENS0Claim : NSObject <EnunciateXML>
{
  @private
    NSString *_claimId;
    NSString *_claimDescription;
}

/**
 * the claimId
 */
- (NSString *) claimId;

/**
 * the claimId
 */
- (void) setClaimId: (NSString *) newClaimId;

/**
 * the claimDescription
 */
- (NSString *) claimDescription;

/**
 * the claimDescription
 */
- (void) setClaimDescription: (NSString *) newClaimDescription;
@end /* interface OPENINSURANCENS0Claim */

#endif /* DEF_OPENINSURANCENS0Claim_H */
#ifndef DEF_OPENINSURANCENS0Driver_H
#define DEF_OPENINSURANCENS0Driver_H

/**
 *  The Class Driver.

 */
@interface OPENINSURANCENS0Driver : NSObject <EnunciateXML>
{
  @private
    NSString *_driverId;
    NSString *_driverName;
    NSString *_gender;
    NSString *_driverPhoto;
    NSDate *_dateOfBirth;
    NSString *_driverLicenseNumber;
    NSString *_driverClass;
    NSString *_address;
    NSString *_eyeColor;
    NSString *_height;
    NSDate *_dateOfIssue;
    NSDate *_expiryDate;
    NSString *_licensePhoto;
}

/**
 * the driverId
 */
- (NSString *) driverId;

/**
 * the driverId
 */
- (void) setDriverId: (NSString *) newDriverId;

/**
 * the driverName
 */
- (NSString *) driverName;

/**
 * the driverName
 */
- (void) setDriverName: (NSString *) newDriverName;

/**
 * the gender
 */
- (NSString *) gender;

/**
 * the gender
 */
- (void) setGender: (NSString *) newGender;

/**
 * the driverPhoto
 */
- (NSString *) driverPhoto;

/**
 * the driverPhoto
 */
- (void) setDriverPhoto: (NSString *) newDriverPhoto;

/**
 * the dateOfBirth
 */
- (NSDate *) dateOfBirth;

/**
 * the dateOfBirth
 */
- (void) setDateOfBirth: (NSDate *) newDateOfBirth;

/**
 * the driverLicenseNumber
 */
- (NSString *) driverLicenseNumber;

/**
 * the driverLicenseNumber
 */
- (void) setDriverLicenseNumber: (NSString *) newDriverLicenseNumber;

/**
 * the driverClass
 */
- (NSString *) driverClass;

/**
 * the driverClass
 */
- (void) setDriverClass: (NSString *) newDriverClass;

/**
 * the address
 */
- (NSString *) address;

/**
 * the address
 */
- (void) setAddress: (NSString *) newAddress;

/**
 * the eyeColor
 */
- (NSString *) eyeColor;

/**
 * the eyeColor
 */
- (void) setEyeColor: (NSString *) newEyeColor;

/**
 * the height
 */
- (NSString *) height;

/**
 * the height
 */
- (void) setHeight: (NSString *) newHeight;

/**
 * the dateOfIssue
 */
- (NSDate *) dateOfIssue;

/**
 * the dateOfIssue
 */
- (void) setDateOfIssue: (NSDate *) newDateOfIssue;

/**
 * the expiryDate
 */
- (NSDate *) expiryDate;

/**
 * the expiryDate
 */
- (void) setExpiryDate: (NSDate *) newExpiryDate;

/**
 * the licensePhoto
 */
- (NSString *) licensePhoto;

/**
 * the licensePhoto
 */
- (void) setLicensePhoto: (NSString *) newLicensePhoto;
@end /* interface OPENINSURANCENS0Driver */

#endif /* DEF_OPENINSURANCENS0Driver_H */
#ifndef DEF_OPENINSURANCENS0IdCardDetails_H
#define DEF_OPENINSURANCENS0IdCardDetails_H

/**
 *  The Class IdCardDetails.

 */
@interface OPENINSURANCENS0IdCardDetails : NSObject <EnunciateXML>
{
  @private
    OPENINSURANCENS0Vehicle *_vehicle;
    OPENINSURANCENS0Policy *_policy;
    NSArray *_insuredPersons;
}

/**
 * the vehicle
 */
- (OPENINSURANCENS0Vehicle *) vehicle;

/**
 * the vehicle
 */
- (void) setVehicle: (OPENINSURANCENS0Vehicle *) newVehicle;

/**
 * the policy
 */
- (OPENINSURANCENS0Policy *) policy;

/**
 * the policy
 */
- (void) setPolicy: (OPENINSURANCENS0Policy *) newPolicy;

/**
 * the insuredPersons
 */
- (NSArray *) insuredPersons;

/**
 * the insuredPersons
 */
- (void) setInsuredPersons: (NSArray *) newInsuredPersons;
@end /* interface OPENINSURANCENS0IdCardDetails */

#endif /* DEF_OPENINSURANCENS0IdCardDetails_H */
#ifndef DEF_OPENINSURANCENS0Payment_H
#define DEF_OPENINSURANCENS0Payment_H

/**
 *  The Class Payment.

 */
@interface OPENINSURANCENS0Payment : NSObject <EnunciateXML>
{
  @private
    NSString *_paymentId;
    NSString *_policyId;
    double _paymentAmount;
    NSString *_paymentType;
    NSDate *_paymentDate;
    NSString *_routingNumber;
    NSString *_checkingAccountNumber;
    NSString *_checkPhotograph;
    NSString *_creditCardNumber;
    NSString *_creditCardName;
    NSString *_CVSCode;
    NSDate *_creditCardExpiryDate;
    NSString *_debitCardNumber;
    NSString *_debitCardName;
    NSString *_debitCardPin;
    NSDate *_debitCardExpiryDate;
}

/**
 * the paymentId
 */
- (NSString *) paymentId;

/**
 * the paymentId
 */
- (void) setPaymentId: (NSString *) newPaymentId;

/**
 * the policyId
 */
- (NSString *) policyId;

/**
 * the policyId
 */
- (void) setPolicyId: (NSString *) newPolicyId;

/**
 * the paymentAmount
 */
- (double) paymentAmount;

/**
 * the paymentAmount
 */
- (void) setPaymentAmount: (double) newPaymentAmount;

/**
 * the paymentType
 */
- (NSString *) paymentType;

/**
 * the paymentType
 */
- (void) setPaymentType: (NSString *) newPaymentType;

/**
 * the paymentDate
 */
- (NSDate *) paymentDate;

/**
 * the paymentDate
 */
- (void) setPaymentDate: (NSDate *) newPaymentDate;

/**
 * the routingNumber
 */
- (NSString *) routingNumber;

/**
 * the routingNumber
 */
- (void) setRoutingNumber: (NSString *) newRoutingNumber;

/**
 * the checkingAccountNumber
 */
- (NSString *) checkingAccountNumber;

/**
 * the checkingAccountNumber
 */
- (void) setCheckingAccountNumber: (NSString *) newCheckingAccountNumber;

/**
 * the checkPhotograph
 */
- (NSString *) checkPhotograph;

/**
 * the checkPhotograph
 */
- (void) setCheckPhotograph: (NSString *) newCheckPhotograph;

/**
 * the creditCardNumber
 */
- (NSString *) creditCardNumber;

/**
 * the creditCardNumber
 */
- (void) setCreditCardNumber: (NSString *) newCreditCardNumber;

/**
 * the creditCardName
 */
- (NSString *) creditCardName;

/**
 * the creditCardName
 */
- (void) setCreditCardName: (NSString *) newCreditCardName;

/**
 * the cVSCode
 */
- (NSString *) CVSCode;

/**
 * the cVSCode
 */
- (void) setCVSCode: (NSString *) newCVSCode;

/**
 * the creditCardExpiryDate
 */
- (NSDate *) creditCardExpiryDate;

/**
 * the creditCardExpiryDate
 */
- (void) setCreditCardExpiryDate: (NSDate *) newCreditCardExpiryDate;

/**
 * the debitCardNumber
 */
- (NSString *) debitCardNumber;

/**
 * the debitCardNumber
 */
- (void) setDebitCardNumber: (NSString *) newDebitCardNumber;

/**
 * the debitCardName
 */
- (NSString *) debitCardName;

/**
 * the debitCardName
 */
- (void) setDebitCardName: (NSString *) newDebitCardName;

/**
 * the debitCardPin
 */
- (NSString *) debitCardPin;

/**
 * the debitCardPin
 */
- (void) setDebitCardPin: (NSString *) newDebitCardPin;

/**
 * the debitCardExpiryDate
 */
- (NSDate *) debitCardExpiryDate;

/**
 * the debitCardExpiryDate
 */
- (void) setDebitCardExpiryDate: (NSDate *) newDebitCardExpiryDate;
@end /* interface OPENINSURANCENS0Payment */

#endif /* DEF_OPENINSURANCENS0Payment_H */
#ifndef DEF_OPENINSURANCENS0Policy_H
#define DEF_OPENINSURANCENS0Policy_H

/**
 *  The Class Policy.

 */
@interface OPENINSURANCENS0Policy : NSObject <EnunciateXML>
{
  @private
    NSString *_policyId;
    NSString *_policyType;
    NSString *_policyNumber;
    NSDate *_policyEffectiveDate;
    NSDate *_policyExpirationDate;
    double _policyPremium;
}

/**
 * the policyId
 */
- (NSString *) policyId;

/**
 * the policyId
 */
- (void) setPolicyId: (NSString *) newPolicyId;

/**
 * the policyType
 */
- (NSString *) policyType;

/**
 * the policyType
 */
- (void) setPolicyType: (NSString *) newPolicyType;

/**
 * the policyNumber
 */
- (NSString *) policyNumber;

/**
 * the policyNumber
 */
- (void) setPolicyNumber: (NSString *) newPolicyNumber;

/**
 * the policyEffectiveDate
 */
- (NSDate *) policyEffectiveDate;

/**
 * the policyEffectiveDate
 */
- (void) setPolicyEffectiveDate: (NSDate *) newPolicyEffectiveDate;

/**
 * the policyExpirationDate
 */
- (NSDate *) policyExpirationDate;

/**
 * the policyExpirationDate
 */
- (void) setPolicyExpirationDate: (NSDate *) newPolicyExpirationDate;

/**
 * the policyPremium
 */
- (double) policyPremium;

/**
 * the policyPremium
 */
- (void) setPolicyPremium: (double) newPolicyPremium;
@end /* interface OPENINSURANCENS0Policy */

#endif /* DEF_OPENINSURANCENS0Policy_H */
#ifndef DEF_OPENINSURANCENS0Vehicle_H
#define DEF_OPENINSURANCENS0Vehicle_H

/**
 *  The Class Vehicle.

 */
@interface OPENINSURANCENS0Vehicle : NSObject <EnunciateXML>
{
  @private
    NSString *_vehicleId;
    NSString *_make;
    NSString *_model;
    int _year;
    NSString *_vin;
    NSString *_licensePlate;
    NSString *_vehiclePhoto;
}

/**
 * the vehicleId
 */
- (NSString *) vehicleId;

/**
 * the vehicleId
 */
- (void) setVehicleId: (NSString *) newVehicleId;

/**
 * the make
 */
- (NSString *) make;

/**
 * the make
 */
- (void) setMake: (NSString *) newMake;

/**
 * the model
 */
- (NSString *) model;

/**
 * the model
 */
- (void) setModel: (NSString *) newModel;

/**
 * the year
 */
- (int) year;

/**
 * the year
 */
- (void) setYear: (int) newYear;

/**
 * the vin
 */
- (NSString *) vin;

/**
 * the vin
 */
- (void) setVin: (NSString *) newVin;

/**
 * the licensePlate
 */
- (NSString *) licensePlate;

/**
 * the licensePlate
 */
- (void) setLicensePlate: (NSString *) newLicensePlate;

/**
 * the vehiclePhoto
 */
- (NSString *) vehiclePhoto;

/**
 * the vehiclePhoto
 */
- (void) setVehiclePhoto: (NSString *) newVehiclePhoto;
@end /* interface OPENINSURANCENS0Vehicle */

#endif /* DEF_OPENINSURANCENS0Vehicle_H */
#ifndef DEF_OPENINSURANCENS0TowingCompany_H
#define DEF_OPENINSURANCENS0TowingCompany_H

/**
 *  The Class TowingCompany.

 */
@interface OPENINSURANCENS0TowingCompany : NSObject <EnunciateXML>
{
  @private
    NSString *_name;
    NSString *_address1;
    NSString *_address2;
    NSString *_city;
    NSString *_province;
    NSString *_pinCode;
    int _phone;
    NSString *_emailId;
}

/**
 * the name
 */
- (NSString *) name;

/**
 * the name
 */
- (void) setName: (NSString *) newName;

/**
 * the address1
 */
- (NSString *) address1;

/**
 * the address1
 */
- (void) setAddress1: (NSString *) newAddress1;

/**
 * the address2
 */
- (NSString *) address2;

/**
 * the address2
 */
- (void) setAddress2: (NSString *) newAddress2;

/**
 * the city
 */
- (NSString *) city;

/**
 * the city
 */
- (void) setCity: (NSString *) newCity;

/**
 * the province
 */
- (NSString *) province;

/**
 * the province
 */
- (void) setProvince: (NSString *) newProvince;

/**
 * the pinCode
 */
- (NSString *) pinCode;

/**
 * the pinCode
 */
- (void) setPinCode: (NSString *) newPinCode;

/**
 * the phone
 */
- (int) phone;

/**
 * the phone
 */
- (void) setPhone: (int) newPhone;

/**
 * the emailId
 */
- (NSString *) emailId;

/**
 * the emailId
 */
- (void) setEmailId: (NSString *) newEmailId;
@end /* interface OPENINSURANCENS0TowingCompany */

#endif /* DEF_OPENINSURANCENS0TowingCompany_H */
#ifndef DEF_OPENINSURANCENS0PaymentResponse_H
#define DEF_OPENINSURANCENS0PaymentResponse_H

/**
 *  The Class PaymentResponse.

 */
@interface OPENINSURANCENS0PaymentResponse : NSObject
{
  @private
    NSString *_reponseStatus;
    NSString *_responseDescription;
}

/**
 * the reponseStatus
 */
- (NSString *) reponseStatus;

/**
 * the reponseStatus
 */
- (void) setReponseStatus: (NSString *) newReponseStatus;

/**
 * the responseDescription
 */
- (NSString *) responseDescription;

/**
 * the responseDescription
 */
- (void) setResponseDescription: (NSString *) newResponseDescription;
@end /* interface OPENINSURANCENS0PaymentResponse */

#endif /* DEF_OPENINSURANCENS0PaymentResponse_H */
#ifndef DEF_OPENINSURANCENS0MessageDetails_H
#define DEF_OPENINSURANCENS0MessageDetails_H

/**
 *  The Class MessageDetails.

 */
@interface OPENINSURANCENS0MessageDetails : NSObject <EnunciateXML>
{
  @private
    NSString *_messageId;
    NSString *_messageDetail;
}

/**
 * the messageId
 */
- (NSString *) messageId;

/**
 * the messageId
 */
- (void) setMessageId: (NSString *) newMessageId;

/**
 * the messageDetail
 */
- (NSString *) messageDetail;

/**
 * the messageDetail
 */
- (void) setMessageDetail: (NSString *) newMessageDetail;
@end /* interface OPENINSURANCENS0MessageDetails */

#endif /* DEF_OPENINSURANCENS0MessageDetails_H */
#ifndef DEF_OPENINSURANCENS0FaqDetail_H
#define DEF_OPENINSURANCENS0FaqDetail_H

/**
 *  The Class FaqDetail.

 */
@interface OPENINSURANCENS0FaqDetail : NSObject
{
  @private
    NSString *_faqId;
    NSString *_faqDetails;
}

/**
 * the faqId
 */
- (NSString *) faqId;

/**
 * the faqId
 */
- (void) setFaqId: (NSString *) newFaqId;

/**
 * the faqDetails
 */
- (NSString *) faqDetails;

/**
 * the faqDetails
 */
- (void) setFaqDetails: (NSString *) newFaqDetails;
@end /* interface OPENINSURANCENS0FaqDetail */

#endif /* DEF_OPENINSURANCENS0FaqDetail_H */
#ifndef DEF_OPENINSURANCENS0Coverage_H
#define DEF_OPENINSURANCENS0Coverage_H

/**
 *  The Class Coverage.

 */
@interface OPENINSURANCENS0Coverage : NSObject <EnunciateXML>
{
  @private
    NSString *_coverageId;
    NSString *_coverageTypeId;
    NSString *_coverageAmount;
    NSString *_coverageLimit;
    NSString *_deductible;
}

/**
 * the coverageId
 */
- (NSString *) coverageId;

/**
 * the coverageId
 */
- (void) setCoverageId: (NSString *) newCoverageId;

/**
 * the coverageTypeId
 */
- (NSString *) coverageTypeId;

/**
 * the coverageTypeId
 */
- (void) setCoverageTypeId: (NSString *) newCoverageTypeId;

/**
 * the coverageAmount
 */
- (NSString *) coverageAmount;

/**
 * the coverageAmount
 */
- (void) setCoverageAmount: (NSString *) newCoverageAmount;

/**
 * the coverageLimit
 */
- (NSString *) coverageLimit;

/**
 * the coverageLimit
 */
- (void) setCoverageLimit: (NSString *) newCoverageLimit;

/**
 * the deductible
 */
- (NSString *) deductible;

/**
 * the deductible
 */
- (void) setDeductible: (NSString *) newDeductible;
@end /* interface OPENINSURANCENS0Coverage */

#endif /* DEF_OPENINSURANCENS0Coverage_H */
#ifndef DEF_OPENINSURANCENS0BodyShop_H
#define DEF_OPENINSURANCENS0BodyShop_H

/**
 *  The Class BodyShop.

 */
@interface OPENINSURANCENS0BodyShop : NSObject <EnunciateXML>
{
  @private
    NSString *_name;
    NSString *_address1;
    NSString *_address2;
    NSString *_city;
    NSString *_province;
    NSString *_pinCode;
    int _phone;
    NSString *_emailId;
}

/**
 * the name
 */
- (NSString *) name;

/**
 * the name
 */
- (void) setName: (NSString *) newName;

/**
 * the address1
 */
- (NSString *) address1;

/**
 * the address1
 */
- (void) setAddress1: (NSString *) newAddress1;

/**
 * the address2
 */
- (NSString *) address2;

/**
 * the address2
 */
- (void) setAddress2: (NSString *) newAddress2;

/**
 * the city
 */
- (NSString *) city;

/**
 * the city
 */
- (void) setCity: (NSString *) newCity;

/**
 * the province
 */
- (NSString *) province;

/**
 * the province
 */
- (void) setProvince: (NSString *) newProvince;

/**
 * the pinCode
 */
- (NSString *) pinCode;

/**
 * the pinCode
 */
- (void) setPinCode: (NSString *) newPinCode;

/**
 * the phone
 */
- (int) phone;

/**
 * the phone
 */
- (void) setPhone: (int) newPhone;

/**
 * the emailId
 */
- (NSString *) emailId;

/**
 * the emailId
 */
- (void) setEmailId: (NSString *) newEmailId;
@end /* interface OPENINSURANCENS0BodyShop */

#endif /* DEF_OPENINSURANCENS0BodyShop_H */
#ifndef DEF_OPENINSURANCENS0Billing_H
#define DEF_OPENINSURANCENS0Billing_H

/**
 *  The Class Billing.

 */
@interface OPENINSURANCENS0Billing : NSObject <EnunciateXML>
{
  @private
    NSString *_policyId;
    double _policyBalance;
    NSDate *_lastPaymentDate;
    double _amountBalance;
}

/**
 * the policyId
 */
- (NSString *) policyId;

/**
 * the policyId
 */
- (void) setPolicyId: (NSString *) newPolicyId;

/**
 * the policyBalance
 */
- (double) policyBalance;

/**
 * the policyBalance
 */
- (void) setPolicyBalance: (double) newPolicyBalance;

/**
 * the lastPaymentDate
 */
- (NSDate *) lastPaymentDate;

/**
 * the lastPaymentDate
 */
- (void) setLastPaymentDate: (NSDate *) newLastPaymentDate;

/**
 * the amountBalance
 */
- (double) amountBalance;

/**
 * the amountBalance
 */
- (void) setAmountBalance: (double) newAmountBalance;
@end /* interface OPENINSURANCENS0Billing */

#endif /* DEF_OPENINSURANCENS0Billing_H */
