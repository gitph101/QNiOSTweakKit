//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DITabPageViewController.h"

#import "DICommentEditorViewControllerDelegate.h"
#import "DIDailyPlanStatisticsViewControllerDelegate.h"
#import "DIDailyPlanTabBarDelegate.h"
#import "DITaskSendToViewControllerDelegate.h"

@class DIDailyPlanStatisticsViewController, MBProgressHUD, NSMutableArray, NSString, Task;

@interface DIDailyPlanViewController : DITabPageViewController <DITaskSendToViewControllerDelegate, DICommentEditorViewControllerDelegate, DIDailyPlanTabBarDelegate, DIDailyPlanStatisticsViewControllerDelegate>
{
    Task *_currentTask;
    NSMutableArray *_tasks;
    NSMutableArray *_taskDetailViewControllers;
    DIDailyPlanStatisticsViewController *_statisticsViewController;
    MBProgressHUD *_loadingHUD;
}

+ (id)tasksAfterSort:(id)arg1;
@property(retain, nonatomic) MBProgressHUD *loadingHUD; // @synthesize loadingHUD=_loadingHUD;
@property(retain, nonatomic) DIDailyPlanStatisticsViewController *statisticsViewController; // @synthesize statisticsViewController=_statisticsViewController;
@property(retain, nonatomic) NSMutableArray *taskDetailViewControllers; // @synthesize taskDetailViewControllers=_taskDetailViewControllers;
@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
- (void).cxx_destruct;
- (void)didClickNextButtonOnDailyPlanStatisticsViewController:(id)arg1;
- (void)dailyPlanTabBar:(id)arg1 didSelectedAtIndex:(long long)arg2;
- (void)commentController:(id)arg1 postCommentText:(id)arg2;
- (void)sendToController:(id)arg1 didSelectContact:(id)arg2 autoCompleted:(_Bool)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCurrentIndex:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

