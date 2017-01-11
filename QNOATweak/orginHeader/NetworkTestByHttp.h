//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface NetworkTestByHttp : NSObject
{
    NSMutableData *_rspData;
    long long _expectedLen;
    int _state;
    id <NetworkTestByHttpStateDelegate> _delegate;
}

@property(retain, nonatomic) id <NetworkTestByHttpStateDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableData *rspData; // @synthesize rspData=_rspData;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)httpRequest:(id)arg1 timeout:(int)arg2;
- (void)dealloc;
- (id)init;

@end

