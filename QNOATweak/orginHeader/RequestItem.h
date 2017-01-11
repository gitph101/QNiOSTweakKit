//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString, UploadFileItem;

@interface RequestItem : NSObject
{
    long long _httpMethodType;
    SEL _requestSuccessSEL;
    SEL _requestFailSEL;
    NSString *_requestUrl;
    id _delegateTarget;
    id _targetCenter;
    SEL _parseMethod;
    NSDictionary *_postParamDict;
    NSDictionary *_postPlainParaDict;
    NSDictionary *_requestHeader;
    UploadFileItem *_uploadItem;
    NSError *_netError;
}

@property(retain, nonatomic) NSError *netError; // @synthesize netError=_netError;
@property(retain, nonatomic) UploadFileItem *uploadItem; // @synthesize uploadItem=_uploadItem;
@property(retain, nonatomic) NSDictionary *requestHeader; // @synthesize requestHeader=_requestHeader;
@property(retain, nonatomic) NSDictionary *postPlainParaDict; // @synthesize postPlainParaDict=_postPlainParaDict;
@property(retain, nonatomic) NSDictionary *postParamDict; // @synthesize postParamDict=_postParamDict;
@property(nonatomic) SEL parseMethod; // @synthesize parseMethod=_parseMethod;
@property(nonatomic) __weak id targetCenter; // @synthesize targetCenter=_targetCenter;
@property(nonatomic) __weak id delegateTarget; // @synthesize delegateTarget=_delegateTarget;
@property(retain, nonatomic) NSString *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(nonatomic) SEL requestFailSEL; // @synthesize requestFailSEL=_requestFailSEL;
@property(nonatomic) SEL requestSuccessSEL; // @synthesize requestSuccessSEL=_requestSuccessSEL;
@property(nonatomic) long long httpMethodType; // @synthesize httpMethodType=_httpMethodType;
- (void).cxx_destruct;

@end

