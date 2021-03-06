//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"

@class NSString, NSURL, VideoAWSSignature;

@interface VideoHandle : NSObject <NSURLSessionDelegate>
{
    NSString *_videoPath;
    VideoAWSSignature *_signature;
    NSURL *_availableUrl;
}

@property(retain, nonatomic) NSURL *availableUrl; // @synthesize availableUrl=_availableUrl;
@property(retain, nonatomic) VideoAWSSignature *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
- (void).cxx_destruct;
- (void)requestCenterWithRequestfunctionurlstr:(id)arg1 requestmethod:(id)arg2 requestheader:(id)arg3 requesturipath:(id)arg4 andSuccessBlock:(CDUnknownBlockType)arg5 andFailureBlock:(CDUnknownBlockType)arg6;
- (void)uploadvideoWithbucket:(id)arg1 keyname:(id)arg2 contentType:(id)arg3 videopath:(id)arg4 andSuccessBlock:(CDUnknownBlockType)arg5 andFailureBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

