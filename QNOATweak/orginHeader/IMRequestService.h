//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMRequestService : NSObject
{
}

+ (void)parseMimeType:(id *)arg1 andResponseEncoding:(unsigned long long *)arg2 fromContentType:(id)arg3;
+ (id)sharedInstance;
- (void)setHttpHeader:(id)arg1;
- (id)createURL:(id)arg1 withParameters:(id)arg2;
- (void)getRequestWithUrl:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)postRequestWithUrl:(id)arg1 parameters:(id)arg2 addFileHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)postRequestWithUrl:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)postRequestWithUrl:(id)arg1 urlParameters:(id)arg2 dataParameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)parseStringEncodingFromHeaders:(id)arg1;
- (void)sendAsynchronousRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

