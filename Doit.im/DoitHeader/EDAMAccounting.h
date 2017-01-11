//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FATObject.h"

@class NSNumber, NSString;

@interface EDAMAccounting : FATObject
{
    NSNumber *_uploadLimit;
    NSNumber *_uploadLimitEnd;
    NSNumber *_uploadLimitNextMonth;
    NSNumber *_premiumServiceStatus;
    NSString *_premiumOrderNumber;
    NSString *_premiumCommerceService;
    NSNumber *_premiumServiceStart;
    NSString *_premiumServiceSKU;
    NSNumber *_lastSuccessfulCharge;
    NSNumber *_lastFailedCharge;
    NSString *_lastFailedChargeReason;
    NSNumber *_nextPaymentDue;
    NSNumber *_premiumLockUntil;
    NSNumber *_updated;
    NSString *_premiumSubscriptionNumber;
    NSNumber *_lastRequestedCharge;
    NSString *_currency;
    NSNumber *_unitPrice;
    NSNumber *_businessId;
    NSString *_businessName;
    NSNumber *_businessRole;
    NSNumber *_unitDiscount;
    NSNumber *_nextChargeDate;
    NSNumber *_availablePoints;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *availablePoints; // @synthesize availablePoints=_availablePoints;
@property(retain, nonatomic) NSNumber *nextChargeDate; // @synthesize nextChargeDate=_nextChargeDate;
@property(retain, nonatomic) NSNumber *unitDiscount; // @synthesize unitDiscount=_unitDiscount;
@property(retain, nonatomic) NSNumber *businessRole; // @synthesize businessRole=_businessRole;
@property(retain, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
@property(retain, nonatomic) NSNumber *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSNumber *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSNumber *lastRequestedCharge; // @synthesize lastRequestedCharge=_lastRequestedCharge;
@property(retain, nonatomic) NSString *premiumSubscriptionNumber; // @synthesize premiumSubscriptionNumber=_premiumSubscriptionNumber;
@property(retain, nonatomic) NSNumber *updated; // @synthesize updated=_updated;
@property(retain, nonatomic) NSNumber *premiumLockUntil; // @synthesize premiumLockUntil=_premiumLockUntil;
@property(retain, nonatomic) NSNumber *nextPaymentDue; // @synthesize nextPaymentDue=_nextPaymentDue;
@property(retain, nonatomic) NSString *lastFailedChargeReason; // @synthesize lastFailedChargeReason=_lastFailedChargeReason;
@property(retain, nonatomic) NSNumber *lastFailedCharge; // @synthesize lastFailedCharge=_lastFailedCharge;
@property(retain, nonatomic) NSNumber *lastSuccessfulCharge; // @synthesize lastSuccessfulCharge=_lastSuccessfulCharge;
@property(retain, nonatomic) NSString *premiumServiceSKU; // @synthesize premiumServiceSKU=_premiumServiceSKU;
@property(retain, nonatomic) NSNumber *premiumServiceStart; // @synthesize premiumServiceStart=_premiumServiceStart;
@property(retain, nonatomic) NSString *premiumCommerceService; // @synthesize premiumCommerceService=_premiumCommerceService;
@property(retain, nonatomic) NSString *premiumOrderNumber; // @synthesize premiumOrderNumber=_premiumOrderNumber;
@property(retain, nonatomic) NSNumber *premiumServiceStatus; // @synthesize premiumServiceStatus=_premiumServiceStatus;
@property(retain, nonatomic) NSNumber *uploadLimitNextMonth; // @synthesize uploadLimitNextMonth=_uploadLimitNextMonth;
@property(retain, nonatomic) NSNumber *uploadLimitEnd; // @synthesize uploadLimitEnd=_uploadLimitEnd;
@property(retain, nonatomic) NSNumber *uploadLimit; // @synthesize uploadLimit=_uploadLimit;
- (void).cxx_destruct;

@end

