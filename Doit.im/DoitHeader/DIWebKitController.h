//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NJKWebViewProgressDelegate.h"
#import "UIWebViewDelegate.h"

@class NJKWebViewProgress, NSString, NSURL, UIBarButtonItem, UIToolbar, UIWebView;

@interface DIWebKitController : UIViewController <UIWebViewDelegate, NJKWebViewProgressDelegate>
{
    UIWebView *_webView;
    UIToolbar *_toolBar;
    UIBarButtonItem *_backItem;
    UIBarButtonItem *_forwardItem;
    UIBarButtonItem *_refreshItem;
    NSURL *_url;
    NJKWebViewProgress *_progressProxy;
}

@property(retain, nonatomic) NJKWebViewProgress *progressProxy; // @synthesize progressProxy=_progressProxy;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) UIBarButtonItem *refreshItem; // @synthesize refreshItem=_refreshItem;
@property(retain, nonatomic) UIBarButtonItem *forwardItem; // @synthesize forwardItem=_forwardItem;
@property(retain, nonatomic) UIBarButtonItem *backItem; // @synthesize backItem=_backItem;
@property(retain, nonatomic) UIToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webViewProgress:(id)arg1 updateProgress:(float)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)on_refresh:(id)arg1;
- (void)on_forward:(id)arg1;
- (void)on_back:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

