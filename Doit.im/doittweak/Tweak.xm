
#import "DILeftMenuViewControllerDelegate.h"
%hook DILeftMenuViewController
- (void)setAnimationID:(NSString *)animationID { %log; %orig; }
- (NSString *)animationID { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setAnimationIDIndex:(long long )animationIDIndex { %log; %orig; }
- (long long )animationIDIndex { %log; long long  r = %orig; HBLogDebug(@" = %lld", r); return r; }
- (void)setSyncBtnTransfromDegree:(long long )syncBtnTransfromDegree { %log; %orig; }
- (long long )syncBtnTransfromDegree { %log; long long  r = %orig; HBLogDebug(@" = %lld", r); return r; }
- (void)setIsSyncBtnRotationStop:(_Bool )isSyncBtnRotationStop { %log; %orig; }
- (_Bool )isSyncBtnRotationStop { %log; _Bool  r = %orig; HBLogDebug(@" = %d", r); return r; }
- (void)setCellTypes:(NSMutableArray *)cellTypes { %log; %orig; }
- (NSMutableArray *)cellTypes { %log; NSMutableArray * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setVcDelegate:(id <DILeftMenuViewControllerDelegate> )vcDelegate { %log; %orig; }
- (id <DILeftMenuViewControllerDelegate> )vcDelegate { %log; id <DILeftMenuViewControllerDelegate>  r = %orig; HBLogDebug(@" = 0x%x", (unsigned int)r); return r; }
- (void).cxx_destruct { %log; %orig; }
- (void)p_reloadData { %log; %orig; }
- (void)syncStarted { %log; %orig; }
- (void)rotationEnded { %log; %orig; }
- (void)endRotation { %log; %orig; }
- (void)beginRotation:(id)arg1 { %log; %orig; }
- (void)finishSync:(id)arg1 { %log; %orig; }
- (void)didClickSyncButton:(id)arg1 { %log; %orig; }
- (void)selectCellForBox:(int)arg1 { %log; %orig; }
- (void)didClickContactButton:(id)arg1 { %log; %orig; }
- (void)didClickNoticeButton:(id)arg1 { %log; %orig; }
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 { %log; %orig; }
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 { %log; _Bool r = %orig; HBLogDebug(@" = %d", r); return r; }
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 { %log; double r = %orig; HBLogDebug(@" = %f", r); return r; }
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 { %log; long long r = %orig; HBLogDebug(@" = %lld", r); return r; }
- (long long)numberOfSectionsInTableView:(id)arg1 { %log; long long r = %orig; HBLogDebug(@" = %lld", r); return r; }
- (void)willChangeStatusBarFrame:(id)arg1 { %log; %orig; }
- (void)refreshBoxes { %log; %orig; }
- (void)didReceiveMemoryWarning { %log; %orig; }
- (void)viewWillAppear:(_Bool)arg1 { %log; %orig; }
- (void)viewDidLoad { %log; %orig; }
- (id)init { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (NSString *)debugDescription { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (NSString *)description { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (unsigned long long )hash { %log; unsigned long long  r = %orig; HBLogDebug(@" = %llu", r); return r; }
- (Class )superclass { %log; Class  r = %orig; HBLogDebug(@" = %@", r); return r; }
%end
%hook DIRootViewController
+ (id)sharedInstance { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setDailyType:(int )dailyType { %log; %orig; }
- (int )dailyType { %log; int  r = %orig; HBLogDebug(@" = %d", r); return r; }
- (void)setRefreshTimerfireDate:(NSDate *)refreshTimerfireDate { %log; %orig; }
- (NSDate *)refreshTimerfireDate { %log; NSDate * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setShownPasscodeView:(_Bool )shownPasscodeView { %log; %orig; }
- (_Bool )shownPasscodeView { %log; _Bool  r = %orig; HBLogDebug(@" = %d", r); return r; }
- (void)setMaskView:(UIButton *)maskView { %log; %orig; }
- (UIButton *)maskView { %log; UIButton * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setTapHideMenuRecognizer:(UITapGestureRecognizer *)tapHideMenuRecognizer { %log; %orig; }
- (UITapGestureRecognizer *)tapHideMenuRecognizer { %log; UITapGestureRecognizer * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setPanShowMenuRecognizer:(UIPanGestureRecognizer *)panShowMenuRecognizer { %log; %orig; }
- (UIPanGestureRecognizer *)panShowMenuRecognizer { %log; UIPanGestureRecognizer * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setPanHideMenuRecognizer:(UIPanGestureRecognizer *)panHideMenuRecognizer { %log; %orig; }
- (UIPanGestureRecognizer *)panHideMenuRecognizer { %log; UIPanGestureRecognizer * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setCurrentSheetViewController:(SIViewController *)currentSheetViewController { %log; %orig; }
- (SIViewController *)currentSheetViewController { %log; SIViewController * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setRightNavigationController:(UINavigationController *)rightNavigationController { %log; %orig; }
- (UINavigationController *)rightNavigationController { %log; UINavigationController * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)setBkView:(UIImageView *)bkView { %log; %orig; }
- (UIImageView *)bkView { %log; UIImageView * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void).cxx_destruct { %log; %orig; }
- (void)showBuyAlertViewWithString:(id)arg1 { %log; %orig; }
- (void)actor:(id)arg1 didEditTask:(id)arg2 editType:(int)arg3 { %log; %orig; }
- (void)showYesterdayReivew { %log; %orig; }
- (void)showDailyReview { %log; %orig; }
- (void)showDailyPlan { %log; %orig; }
- (void)showIAPViewController { %log; %orig; }
- (void)viewTask:(id)arg1 { %log; %orig; }
- (void)dismissActionSheet { %log; %orig; }
- (void)showActionSheetWithViewController:(id)arg1 { %log; %orig; }
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3 { %log; %orig; }
- (void)leftMenuViewController:(id)arg1 didSelectContact:(id)arg2 { %log; %orig; }
- (void)leftMenuViewController:(id)arg1 didSelectBox:(int)arg2 { %log; %orig; }
- (void)handleTapGesture:(id)arg1 { %log; %orig; }
- (_Bool)gestureRecognizerShouldBegin:(id)arg1 { %log; _Bool r = %orig; HBLogDebug(@" = %d", r); return r; }
- (void)handlePanFrom:(id)arg1 { %log; %orig; }
- (void)onShowMenuGestureEnded:(struct CGPoint)arg1 { %log; %orig; }
- (void)onHideMenuGestureEnded:(struct CGPoint)arg1 { %log; %orig; }
- (void)onGestureMove:(struct CGPoint)arg1 { %log; %orig; }
- (void)applicationDidSyncData:(id)arg1 { %log; %orig; }
- (void)startSync { %log; %orig; }
- (void)presentPasscodeView { %log; %orig; }
- (void)showOpenIDLogin:(id)arg1 { %log; %orig; }
- (void)showLoginWithUserName:(id)arg1 { %log; %orig; }
- (void)hideMenu { %log; %orig; }
- (void)showMenu { %log; %orig; }
- (_Bool)isMenuHidden { %log; _Bool r = %orig; HBLogDebug(@" = %d", r); return r; }
- (void)showContentUI { %log; %orig; }
- (void)openTaskDetail:(id)arg1 { %log; %orig; }
- (id)mainContentController { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)resetCurrentBox { %log; %orig; }
- (void)resetBox:(int)arg1 { %log; %orig; }
- (void)didReceiveMemoryWarning { %log; %orig; }
- (void)dealloc { %log; %orig; }
- (void)viewDidAppear:(_Bool)arg1 { %log; %orig; }
- (void)viewDidLoad { %log; %orig; }
- (void)awakeFromNib { %log; %orig; }
- (id)init { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (NSString *)debugDescription { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (NSString *)description { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (unsigned long long )hash { %log; unsigned long long  r = %orig; HBLogDebug(@" = %llu", r); return r; }
- (Class )superclass { %log; Class  r = %orig; HBLogDebug(@" = %@", r); return r; }
%end
