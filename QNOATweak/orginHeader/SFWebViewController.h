//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString, NSTimer, NSURL, SFOAScanResultViewController, UIImageView, UIWebView;

@interface SFWebViewController : BaseViewController <UIWebViewDelegate, UIAlertViewDelegate, UIActionSheetDelegate>
{
    NSString *srcUrl;
    NSString *GroupID;
    NSString *CreaterIMUsername;
    SFOAScanResultViewController *resultVC;
    NSString *_oa_token;
    NSString *_sfut;
    UIWebView *_webView;
    NSString *_urlString;
    NSURL *_baseURL;
    NSURL *_currentURL;
    NSString *_webTitle;
    long long _type;
    UIImageView *_temporaryImgView;
    NSString *_refresSign;
    NSString *_imgeStrUrl;
    NSTimer *_timer;
    long long _STATE;
    NSString *_uuidStr;
}

@property(retain, nonatomic) NSString *uuidStr; // @synthesize uuidStr=_uuidStr;
@property(nonatomic) long long STATE; // @synthesize STATE=_STATE;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *imgeStrUrl; // @synthesize imgeStrUrl=_imgeStrUrl;
@property(retain, nonatomic) NSString *refresSign; // @synthesize refresSign=_refresSign;
@property(retain, nonatomic) UIImageView *temporaryImgView; // @synthesize temporaryImgView=_temporaryImgView;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *webTitle; // @synthesize webTitle=_webTitle;
@property(retain, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *sfut; // @synthesize sfut=_sfut;
@property(retain, nonatomic) NSString *oa_token; // @synthesize oa_token=_oa_token;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestFangAPPQRcode;
- (id)touchImgeOnTheWebForJS;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleLongTouch;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)BackFoward;
- (void)didReceiveMemoryWarning;
- (void)setUserAgent;
- (id)requestHeaderWithUrlString:(id)arg1;
- (void)refreshWebView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)closeWeb;
- (void)toDetailExplain;
- (void)creatRightExplainButttonItem;
- (void)creatLeftItems;
- (void)creatCustomItem;
- (void)webViewAlertAction:(id)arg1;
- (void)viewDidLoad;
- (id)initViewWithUrlString:(id)arg1 title:(id)arg2 type:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
