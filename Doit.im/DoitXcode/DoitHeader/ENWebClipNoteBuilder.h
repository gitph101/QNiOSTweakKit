//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, UIWebView;

@interface ENWebClipNoteBuilder : NSObject
{
    UIWebView *_webView;
    NSURL *_url;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)createNoteFromContents:(id)arg1 title:(id)arg2 mimeType:(id)arg3 sourceURL:(id)arg4;
- (_Bool)clipContentsOfWebView:(id)arg1;
- (void)completeWithNote:(id)arg1;
- (void)buildNote:(CDUnknownBlockType)arg1;
- (id)initWithWebView:(id)arg1;
- (id)initWithUrl:(id)arg1;

@end
