//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class UIWebView;

@interface SFProcessWebDetailsViewController : BaseViewController
{
    UIWebView *_webView;
}

@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)sendProcessWebDetailsRequestFailWithItem:(id)arg1;
- (void)sendProcessWebDetailsRequestSuccessWithItem:(id)arg1;
- (id)initWithUserId:(id)arg1 workflowid:(id)arg2 detailid:(id)arg3 formid:(id)arg4 requestid:(id)arg5 detaildataid:(id)arg6 method:(id)arg7;

@end

