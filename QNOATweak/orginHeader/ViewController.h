//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SFGlobalAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MBProgressHUD, NSMutableArray, NSString, SFTabChangeViewController, UIButton, UITableView, UIView;

@interface ViewController : UIViewController <SFGlobalAlertViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SFTabChangeViewController *_tabVC;
    NSMutableArray *_authURLs;
    UITableView *_tableView;
    UIView *_displayFailResultView;
    UIButton *_timeAsyButton;
    long long _connectState;
    MBProgressHUD *_hudView;
    NSString *_codeNumber;
}

@property(retain, nonatomic) NSString *codeNumber; // @synthesize codeNumber=_codeNumber;
@property(retain, nonatomic) MBProgressHUD *hudView; // @synthesize hudView=_hudView;
@property(nonatomic) long long connectState; // @synthesize connectState=_connectState;
@property(retain, nonatomic) UIButton *timeAsyButton; // @synthesize timeAsyButton=_timeAsyButton;
@property(retain, nonatomic) UIView *displayFailResultView; // @synthesize displayFailResultView=_displayFailResultView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *authURLs; // @synthesize authURLs=_authURLs;
@property(nonatomic) __weak SFTabChangeViewController *tabVC; // @synthesize tabVC=_tabVC;
- (void).cxx_destruct;
- (void)hideHudView;
- (void)showHudView;
- (void)toDetailExplain;
- (void)didReceiveMemoryWarning;
- (void)drawConnectionFailedUI;
- (void)drawTimeCompareButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)buttonClicked:(id)arg1;
- (void)showViewWithConnectionStateType:(long long)arg1;
- (void)parsingResultWithDictionary:(id)arg1 andUserName:(id)arg2;
- (void)creatTokenByRequestSecretkeyFromServer;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)creatRightButttonItem;
- (void)viewWillAppear:(_Bool)arg1;
- (void)refreshUIByReloadData;
- (void)refreshOtpcodeByServerTime;
- (void)buttonTap:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

