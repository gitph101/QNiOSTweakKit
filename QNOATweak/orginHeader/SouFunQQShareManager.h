//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQApiInterfaceDelegate.h"

@class NSString;

@interface SouFunQQShareManager : NSObject <QQApiInterfaceDelegate>
{
    id <SouFunShareManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <SouFunShareManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)isOnlineResponse:(id)arg1;
- (void)onResp:(id)arg1;
- (void)onReq:(id)arg1;
- (void)reqQQWithObject:(id)arg1 shareType:(unsigned long long)arg2;
- (void)showToast:(id)arg1;
- (void)shareQQWithDataModel:(id)arg1 shareType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

