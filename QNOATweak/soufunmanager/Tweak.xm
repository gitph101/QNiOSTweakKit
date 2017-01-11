#import<CoreLocation/CoreLocation.h>

@interface SFPhoneSignInViewController
//新增方法
-(void)showArg:(NSString *)arg X:(double)x;
- (void) dimissAlert:(UIAlertView *)alert;
-(void)setXandY;

@property(nonatomic) double currentLatitude; // @synthesize currentLatitude=_currentLatitude;
@property(nonatomic) double currentLongitude; // @synthesize currentLongitude=_currentLongitude;

@property(nonatomic) double signInlatitude; // @synthesize signInlatitude=_signInlatitude;
@property(nonatomic) double signInlongitude; // @synthesize signInlongitude=_signInlongitude;

@end


// static  double x  = 39.827122;
// static  double y  = 116.301378;

// static  double x  = 40.827122;
// static  double y  = 116.301378;

 static  double x  = 39.827122;
 static  double y  = 116.301378;
%hook SFPhoneSignInViewController

%new 
-(void)setXandY
{

  x  = 39.827122;
  y  = 116.301378;

  int lx = arc4random() % 100;
  int ly = arc4random() % 100;

   x+= lx/100000;
   y+= ly/100000;

}
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 { %log; 

    [self setXandY];
    NSArray *arg2Array = arg2;
if(arg2Array.count>0){
    CLLocation *orgLoc = arg2Array[0];
    CLLocationDistance distance = orgLoc.altitude;
    CLLocationAccuracy accuracy = orgLoc.horizontalAccuracy;
    CLLocationAccuracy verticalAccuracy = orgLoc.verticalAccuracy;
    NSDate *timestamp = orgLoc.timestamp;
    CLLocationSpeed speed = orgLoc.speed;
    CLLocationDirection course = orgLoc.course;    


    CLLocation *loc = [[CLLocation alloc]initWithCoordinate:CLLocationCoordinate2DMake(x, y) altitude:distance horizontalAccuracy:accuracy verticalAccuracy:verticalAccuracy course:course speed:speed timestamp:timestamp];
   
   NSArray *array = [[NSArray alloc] initWithObjects:loc, nil];


    %orig(arg1,array);
/*
   [arg2Array release];
   [orgLoc release];

   [orgLoc release];
   [timestamp release];
    [loc release];
    [array release];
*/
%orig;

}else{
%orig;
}

   }

- (void)viewDidLoad { %log; %orig;
NSLog(@"askMe:CheckID starting!");
UIAlertView *alert =[[UIAlertView alloc]initWithTitle:@"message" message:@"OK" delegate:self cancelButtonTitle:@"OK" otherButtonTitles:nil, nil];
[alert show];
}


/*
- (void)setIsMotionShake:(_Bool )isMotionShake { %log; %orig; }
- (_Bool )isMotionShake { %log; _Bool  r = %orig; HBLogDebug(@" = %d", r); return r; }
- (void)setDateComponents:(NSDateComponents *)dateComponents { %log; %orig; }
- (NSDateComponents *)dateComponents { %log; NSDateComponents * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setCalendar:(NSCalendar *)calendar { %log; %orig; }
- (NSCalendar *)calendar { %log; NSCalendar * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setSignInCompanyId:(NSString *)signInCompanyId { %log; %orig; }
- (NSString *)signInCompanyId { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setSignInlatitude:(double )signInlatitude { %log; %orig; }
- (double )signInlatitude { %log; double  r = %orig; HBLogDebug(@" = %f", r); return r; }
- (void)setSignInlongitude:(double )signInlongitude { %log; %orig; }
- (double )signInlongitude { %log; double  r = %orig; HBLogDebug(@" = %f", r); return r; }
- (void)setCurrentLatitude:(double )currentLatitude { %log; %orig;}
- (double )currentLatitude { %log; double  r = %orig; HBLogDebug(@" = %f", r); return r;}
- (void)setCurrentLongitude:(double )currentLongitude { %log; %orig;}
- (double )currentLongitude { %log; double  r = %orig; HBLogDebug(@" = %f", r); return r; }
//- (void)setLocationManager:(CLLocationManager *)locationManager { %log; %orig; }
//- (CLLocationManager *)locationManager { %log; CLLocationManager * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setCurrentScopeLabel:(UILabel *)currentScopeLabel { %log; %orig; }
- (UILabel *)currentScopeLabel { %log; UILabel * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setDistanceHintLabel:(UILabel *)distanceHintLabel { %log; %orig; }
- (UILabel *)distanceHintLabel { %log; UILabel * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setDistanceLabel:(UILabel *)distanceLabel { %log; %orig; }
- (UILabel *)distanceLabel { %log; UILabel * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setCurrentScopeBgView:(UIView *)currentScopeBgView { %log; %orig; }
- (UIView *)currentScopeBgView { %log; UIView * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setPointButton:(UIButton *)pointButton { %log; %orig; }
- (UIButton *)pointButton { %log; UIButton * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setPlaceLabel:(UILabel *)placeLabel { %log; %orig; }
- (UILabel *)placeLabel { %log; UILabel * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setSignInPointLabel:(UILabel *)signInPointLabel { %log; %orig; }
- (UILabel *)signInPointLabel { %log; UILabel * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setSignInPointBgView:(UIView *)signInPointBgView { %log; %orig; }
- (UIView *)signInPointBgView { %log; UIView * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setBottomView:(UIView *)bottomView { %log; %orig; }
- (UIView *)bottomView { %log; UIView * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setSharkImgView:(UIImageView *)sharkImgView { %log; %orig; }
- (UIImageView *)sharkImgView { %log; UIImageView * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setWeekLabel:(UILabel *)weekLabel { %log; %orig; }
- (UILabel *)weekLabel { %log; UILabel * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setDateLabel:(UILabel *)dateLabel { %log; %orig; }
- (UILabel *)dateLabel { %log; UILabel * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setTimeLabel:(UILabel *)timeLabel { %log; %orig; }
- (UILabel *)timeLabel { %log; UILabel * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setSubContentView:(UIView *)subContentView { %log; %orig; }
- (UIView *)subContentView { %log; UIView * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setScrollView:(UIScrollView *)scrollView { %log; %orig; }
- (UIScrollView *)scrollView { %log; UIScrollView * r = %orig; HBLogDebug(@" = %@", r); return r; }
//- (void).cxx_destruct { %log; %orig; }
- (void)dealloc { %log; %orig; }
- (void)signInViewControllerDidEnterBackground { %log; %orig; }
- (void)removeInstructionsView { %log; %orig; }
- (void)instructionsEvent:(id)arg1 { %log; %orig; }
- (void)loadInstructionsView { %log; %orig; }
- (void)attendancePlaceViewController:(id)arg1 didSelectedLocationItem:(id)arg2 { %log; %orig; }
- (void)sendPhoneSignInRequestFailWithItem:(id)arg1 { %log; %orig; }
- (void)sendPhoneSignInRequestSuccessWithItem:(id)arg1 { %log; %orig; }
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2 { %log; %orig; }
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2 { %log; %orig; }
- (void)changeSignInStatusWithDistance:(double)arg1 { %log; %orig; }
- (void)setSignInPlaceInfoWithLocationItem:(id)arg1 { %log; %orig; }
- (void)sendAttendancePointRequestFailWithItem:(id)arg1 { %log; %orig; }
- (void)sendAttendancePointRequestSuccessWithItem:(id)arg1 { %log; %orig; }
- (void)getSignInParaFailWithUserInterface { %log; %orig; }
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2 { %log; %orig; }
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 { %log; %orig; }
//- (void)timerCountdown:(id)arg1 { %log; %orig; }
- (void)timerStop { %log; %orig; }
- (void)timerStart { %log; %orig; }
- (void)attendancePlaceEvent:(id)arg1 { %log; %orig; }
- (void)signInListEvent:(id)arg1 { %log; %orig; }
- (void)BackFoward { %log; %orig; }
- (id)weekWithWeekIndex:(long long)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)refreshDateInfo { %log; %orig; }
- (void)prepareContentView { %log; %orig; }
- (void)globalAlertView:(id)arg1 clickedButtonIndex:(long long)arg2 { %log; %orig; }
- (void)startUpdatingLocation { %log; %orig; }
- (void)didReceiveMemoryWarning { %log; %orig; }
- (_Bool)canBecomeFirstResponder { %log; _Bool r = %orig; HBLogDebug(@" = %d", r); return r; }
- (void)viewDidDisappear:(_Bool)arg1 { %log; %orig; }
- (void)viewWillDisappear:(_Bool)arg1 { %log; %orig; }
- (void)viewDidAppear:(_Bool)arg1 { %log; %orig; }
- (void)viewWillAppear:(_Bool)arg1 { %log; %orig; }
- (id)init { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (NSString *)debugDescription { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (NSString *)description { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (unsigned long long )hash { %log; unsigned long long  r = %orig; HBLogDebug(@" = %llu", r); return r; }
- (Class )superclass { %log; Class  r = %orig; HBLogDebug(@" = %@", r); return r; }

*/
%end
