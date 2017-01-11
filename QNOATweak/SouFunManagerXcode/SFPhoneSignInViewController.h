//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "CLLocationManagerDelegate.h"
#import "SFAttendancePlaceViewControllerDelegate.h"
#import "SFGlobalAlertViewDelegate.h"

@class CLLocationManager, NSCalendar, NSDateComponents, NSString, NSTimer, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface SFPhoneSignInViewController : BaseViewController <CLLocationManagerDelegate, SFAttendancePlaceViewControllerDelegate, SFGlobalAlertViewDelegate>
{
    NSTimer *_timer;
    long long _interval;
    UIScrollView *_instructionsView;
    _Bool _isMotionShake;
    UIScrollView *_scrollView;
    UIView *_subContentView;
    UILabel *_timeLabel;
    UILabel *_dateLabel;
    UILabel *_weekLabel;
    UIImageView *_sharkImgView;
    UIView *_bottomView;
    UIView *_signInPointBgView;
    UILabel *_signInPointLabel;
    UILabel *_placeLabel;
    UIButton *_pointButton;
    UIView *_currentScopeBgView;
    UILabel *_distanceLabel;
    UILabel *_distanceHintLabel;
    UILabel *_currentScopeLabel;
    CLLocationManager *_locationManager;
    double _currentLongitude;
    double _currentLatitude;
    double _signInlongitude;
    double _signInlatitude;
    NSString *_signInCompanyId;
    NSCalendar *_calendar;
    NSDateComponents *_dateComponents;
}

@property(nonatomic) _Bool isMotionShake; // @synthesize isMotionShake=_isMotionShake;
@property(retain, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSString *signInCompanyId; // @synthesize signInCompanyId=_signInCompanyId;
@property(nonatomic) double signInlatitude; // @synthesize signInlatitude=_signInlatitude;
@property(nonatomic) double signInlongitude; // @synthesize signInlongitude=_signInlongitude;
@property(nonatomic) double currentLatitude; // @synthesize currentLatitude=_currentLatitude;
@property(nonatomic) double currentLongitude; // @synthesize currentLongitude=_currentLongitude;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;

@property(retain, nonatomic) UILabel *currentScopeLabel; // @synthesize currentScopeLabel=_currentScopeLabel;
@property(retain, nonatomic) UILabel *distanceHintLabel; // @synthesize distanceHintLabel=_distanceHintLabel;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UIView *currentScopeBgView; // @synthesize currentScopeBgView=_currentScopeBgView;
@property(retain, nonatomic) UIButton *pointButton; // @synthesize pointButton=_pointButton;
@property(retain, nonatomic) UILabel *placeLabel; // @synthesize placeLabel=_placeLabel;
@property(retain, nonatomic) UILabel *signInPointLabel; // @synthesize signInPointLabel=_signInPointLabel;
@property(retain, nonatomic) UIView *signInPointBgView; // @synthesize signInPointBgView=_signInPointBgView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *sharkImgView; // @synthesize sharkImgView=_sharkImgView;
@property(retain, nonatomic) UILabel *weekLabel; // @synthesize weekLabel=_weekLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *subContentView; // @synthesize subContentView=_subContentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)signInViewControllerDidEnterBackground;
- (void)removeInstructionsView;
- (void)instructionsEvent:(id)arg1;
- (void)loadInstructionsView;
- (void)attendancePlaceViewController:(id)arg1 didSelectedLocationItem:(id)arg2;

- (void)sendPhoneSignInRequestFailWithItem:(id)arg1;
- (void)sendPhoneSignInRequestSuccessWithItem:(id)arg1;

- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)changeSignInStatusWithDistance:(double)arg1;
- (void)setSignInPlaceInfoWithLocationItem:(id)arg1;
- (void)sendAttendancePointRequestFailWithItem:(id)arg1;
- (void)sendAttendancePointRequestSuccessWithItem:(id)arg1;
- (void)getSignInParaFailWithUserInterface;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)timerCountdown:(id)arg1;
- (void)timerStop;
- (void)timerStart;
- (void)attendancePlaceEvent:(id)arg1;
- (void)signInListEvent:(id)arg1;
- (void)BackFoward;
- (id)weekWithWeekIndex:(long long)arg1;
- (void)refreshDateInfo;
- (void)prepareContentView;
- (void)globalAlertView:(id)arg1 clickedButtonIndex:(long long)arg2;
- (void)startUpdatingLocation;
- (void)didReceiveMemoryWarning;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

