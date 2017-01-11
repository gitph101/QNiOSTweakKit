//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIViewController.h"

#import "DILeftMenuViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class DILeftMenuViewController, NSDate, NSString, NSTimer, UIButton, UIImageView, UINavigationController, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface DIRootViewController : SIViewController <UINavigationControllerDelegate, UIGestureRecognizerDelegate, DILeftMenuViewControllerDelegate>
{
    DILeftMenuViewController *_leftMenuViewController;
    struct CGPoint _panStartLocation;
    NSTimer *_refreshTimer;
    _Bool _shownPasscodeView;
    int _dailyType;
    UIImageView *_bkView;
    UINavigationController *_rightNavigationController;
    SIViewController *_currentSheetViewController;
    UIPanGestureRecognizer *_panHideMenuRecognizer;
    UIPanGestureRecognizer *_panShowMenuRecognizer;
    UITapGestureRecognizer *_tapHideMenuRecognizer;
    UIButton *_maskView;
    NSDate *_refreshTimerfireDate;
}

+ (id)sharedInstance;
@property(nonatomic) int dailyType; // @synthesize dailyType=_dailyType;
@property(retain, nonatomic) NSDate *refreshTimerfireDate; // @synthesize refreshTimerfireDate=_refreshTimerfireDate;
@property(nonatomic) _Bool shownPasscodeView; // @synthesize shownPasscodeView=_shownPasscodeView;
@property(retain, nonatomic) UIButton *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UITapGestureRecognizer *tapHideMenuRecognizer; // @synthesize tapHideMenuRecognizer=_tapHideMenuRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panShowMenuRecognizer; // @synthesize panShowMenuRecognizer=_panShowMenuRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panHideMenuRecognizer; // @synthesize panHideMenuRecognizer=_panHideMenuRecognizer;
@property(retain, nonatomic) SIViewController *currentSheetViewController; // @synthesize currentSheetViewController=_currentSheetViewController;
@property(retain, nonatomic) UINavigationController *rightNavigationController; // @synthesize rightNavigationController=_rightNavigationController;
@property(retain, nonatomic) UIImageView *bkView; // @synthesize bkView=_bkView;
- (void).cxx_destruct;
- (void)showBuyAlertViewWithString:(id)arg1;
- (void)actor:(id)arg1 didEditTask:(id)arg2 editType:(int)arg3;
- (void)showYesterdayReivew;
- (void)showDailyReview;
- (void)showDailyPlan;
- (void)showIAPViewController;
- (void)viewTask:(id)arg1;
- (void)dismissActionSheet;
- (void)showActionSheetWithViewController:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)leftMenuViewController:(id)arg1 didSelectContact:(id)arg2;
- (void)leftMenuViewController:(id)arg1 didSelectBox:(int)arg2;
- (void)handleTapGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanFrom:(id)arg1;
- (void)onShowMenuGestureEnded:(struct CGPoint)arg1;
- (void)onHideMenuGestureEnded:(struct CGPoint)arg1;
- (void)onGestureMove:(struct CGPoint)arg1;
- (void)applicationDidSyncData:(id)arg1;
- (void)startSync;
- (void)presentPasscodeView;
- (void)showOpenIDLogin:(id)arg1;
- (void)showLoginWithUserName:(id)arg1;
- (void)hideMenu;
- (void)showMenu;
- (_Bool)isMenuHidden;
- (void)showContentUI;
- (void)openTaskDetail:(id)arg1;
- (id)mainContentController;
- (void)resetCurrentBox;
- (void)resetBox:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

