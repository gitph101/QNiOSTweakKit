//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"

@class NSMutableArray, NSString, SKProductsRequest;

@interface DIIAPController : NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    _Bool _transcationFailed;
    NSMutableArray *_noticesDelegates;
    SKProductsRequest *_productRequest;
}

@property(nonatomic) _Bool transcationFailed; // @synthesize transcationFailed=_transcationFailed;
@property(retain, nonatomic) SKProductsRequest *productRequest; // @synthesize productRequest=_productRequest;
@property(retain, nonatomic) NSMutableArray *noticesDelegates; // @synthesize noticesDelegates=_noticesDelegates;
- (void).cxx_destruct;
- (void)onFinish:(_Bool)arg1;
- (void)saveTransaction:(id)arg1;
- (void)removeNoticeDelegate:(id)arg1;
- (void)addNoticeDelegate:(id)arg1;
- (void)onFinishTransaction:(id)arg1;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)completeTransaction:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)requestPayment:(id)arg1;
- (_Bool)requestProduct;
- (_Bool)isInPayment;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

