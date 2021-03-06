//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QalBindCallbackProtocol.h"
#import "TLSExchangeTicketListener.h"

@class NSString;

@interface QalLoginDelegate : NSObject <TLSExchangeTicketListener, QalBindCallbackProtocol>
{
}

- (void)onFail:(int)arg1;
- (void)onSucc;
- (void)OnExchangeTicketTimeout:(id)arg1;
- (void)OnExchangeTicketFail:(id)arg1;
- (void)OnExchangeTicketSuccess;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

