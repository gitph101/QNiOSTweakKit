//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TaxPlanItem : NSObject
{
    NSString *_allsavemoney;
    NSString *_hrmsalaryid;
    NSString *_taxablemoney;
    NSString *_payborrowment;
    NSString *_hrmsalarydetailid;
    NSString *_allOughtpayment;
    NSString *_allTax;
    NSString *_levelmoney;
}

@property(copy, nonatomic) NSString *levelmoney; // @synthesize levelmoney=_levelmoney;
@property(copy, nonatomic) NSString *allTax; // @synthesize allTax=_allTax;
@property(copy, nonatomic) NSString *allOughtpayment; // @synthesize allOughtpayment=_allOughtpayment;
@property(copy, nonatomic) NSString *hrmsalarydetailid; // @synthesize hrmsalarydetailid=_hrmsalarydetailid;
@property(copy, nonatomic) NSString *payborrowment; // @synthesize payborrowment=_payborrowment;
@property(copy, nonatomic) NSString *taxablemoney; // @synthesize taxablemoney=_taxablemoney;
@property(copy, nonatomic) NSString *hrmsalaryid; // @synthesize hrmsalaryid=_hrmsalaryid;
@property(copy, nonatomic) NSString *allsavemoney; // @synthesize allsavemoney=_allsavemoney;
- (void).cxx_destruct;
- (id)initTaxPlanItemWithDict:(id)arg1;

@end

