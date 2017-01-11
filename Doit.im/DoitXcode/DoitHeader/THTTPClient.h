//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTransport.h"

@class ENAFURLConnectionOperation, NSData, NSMutableData, NSString, NSURL;

@interface THTTPClient : NSObject <TTransport>
{
    int _responseDataOffset;
    int _timeout;
    NSURL *_url;
    ENAFURLConnectionOperation *_httpOperation;
    NSMutableData *_requestData;
    NSData *_responseData;
    NSString *_userAgent;
    CDUnknownBlockType _uploadBlock;
    CDUnknownBlockType _downloadBlock;
}

+ (id)createClientVersionString;
@property(copy, nonatomic) CDUnknownBlockType downloadBlock; // @synthesize downloadBlock=_downloadBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadBlock; // @synthesize uploadBlock=_uploadBlock;
@property(nonatomic) int timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) int responseDataOffset; // @synthesize responseDataOffset=_responseDataOffset;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSMutableData *requestData; // @synthesize requestData=_requestData;
@property(retain, nonatomic) ENAFURLConnectionOperation *httpOperation; // @synthesize httpOperation=_httpOperation;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)setDownloadProgressBlock:(CDUnknownBlockType)arg1;
- (void)setUploadProgressBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)flush;
- (id)newRequest;
- (void)write:(const char *)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (int)readAll:(char *)arg1 offset:(int)arg2 length:(int)arg3;
- (id)initWithURL:(id)arg1 userAgent:(id)arg2 timeout:(int)arg3;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
