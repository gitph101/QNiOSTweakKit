//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString, NSURL, UIBarButtonItem, UIToolbar, UIWebView;

@interface ZBarHelpController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate>
{
    NSString *reason;
    id delegate;
    UIWebView *webView;
    UIToolbar *toolbar;
    UIBarButtonItem *doneBtn;
    UIBarButtonItem *backBtn;
    UIBarButtonItem *space;
    NSURL *linkURL;
    unsigned long long orientations;
}

@property(nonatomic) id <ZBarHelpDelegate> delegate; // @synthesize delegate;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)dismiss;
- (void)setInterfaceOrientation:(long long)arg1 supported:(_Bool)arg2;
- (_Bool)isInterfaceOrientationSupported:(long long)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (void)cleanup;
- (id)init;
- (id)initWithReason:(id)arg1;

@end

