//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SFCTabbarDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString, NSURL, SFCTabbar, UIImage, UIWebView;

@interface SouFunIMRevealAnnounvementWebViewController : UIViewController <UIWebViewDelegate, SFCTabbarDelegate>
{
    _Bool hiddenWebTabbar;
    _Bool setCookies;
    _Bool _isShowMenu;
    _Bool _canNotShare;
    int _businessType;
    NSURL *webUrl;
    UIWebView *revealWebView;
    SFCTabbar *sfcTabbar;
    NSString *_urlStr;
    UIImage *_urlImage;
    NSString *_urlTitle;
    NSString *_urlDesc;
    unsigned long long _revealWebType;
    long long _scrollPosition;
}

@property(nonatomic) long long scrollPosition; // @synthesize scrollPosition=_scrollPosition;
@property(nonatomic) unsigned long long revealWebType; // @synthesize revealWebType=_revealWebType;
@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) _Bool canNotShare; // @synthesize canNotShare=_canNotShare;
@property(nonatomic) _Bool isShowMenu; // @synthesize isShowMenu=_isShowMenu;
@property(retain, nonatomic) NSString *urlDesc; // @synthesize urlDesc=_urlDesc;
@property(retain, nonatomic) NSString *urlTitle; // @synthesize urlTitle=_urlTitle;
@property(retain, nonatomic) UIImage *urlImage; // @synthesize urlImage=_urlImage;
@property(retain, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
@property(nonatomic) _Bool setCookies; // @synthesize setCookies;
@property(nonatomic) _Bool hiddenWebTabbar; // @synthesize hiddenWebTabbar;
@property(retain, nonatomic) SFCTabbar *sfcTabbar; // @synthesize sfcTabbar;
@property(retain, nonatomic) UIWebView *revealWebView; // @synthesize revealWebView;
@property(retain, nonatomic) NSURL *webUrl; // @synthesize webUrl;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)goPayWaySelectView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)appendURLstring:(id)arg1;
- (void)reloadWebWithCookies:(id)arg1 andCookieStr:(id)arg2;
- (void)reloadWeb:(id)arg1;
- (void)deleteSecurityAuthCookie;
- (void)deleteCookie;
- (void)writeSecurityAuthCookie;
- (void)writeRedBagCookiesToRequestWithCookieStr:(id)arg1;
- (void)writeCookiesToRequestWithCookieStr:(id)arg1;
- (void)parseTitleFromUrlStr:(id)arg1;
- (void)rightItemBtnPress:(id)arg1;
- (void)createNavRightItemBtn;
- (void)webViewAlertAction:(id)arg1;
- (void)redpacketSendSuccess;
- (void)createUI;
- (void)viewDidLoad;
- (void)pop;
- (void)changeSFCTabbar:(id)arg1 selectIndex:(unsigned long long)arg2;
- (void)reSetSFTabBarCanUse:(id)arg1 statu:(id)arg2;
- (void)reloadSFCTabBar:(id)arg1;
- (void)createSFCTabbar;
- (void)createWebView;
- (void)createNoDataView;
- (void)backForward;
- (void)createBackButton;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

