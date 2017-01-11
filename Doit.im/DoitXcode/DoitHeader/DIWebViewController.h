//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, UIActivityIndicatorView, UIWebView;

@interface DIWebViewController : SIViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    NSString *_url;
    UIActivityIndicatorView *_spinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)setNavigationBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWith:(id)arg1 andTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

