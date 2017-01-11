//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RefreshTableViewController.h"

#import "SFNormalMainTableViewCellDelegate.h"
#import "SFTodoListViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, SFTabChangeViewController, SFTodoListViewController, UIButton, UIImageView, UILabel, UIView;

@interface SFNormalMainViewController : RefreshTableViewController <SFTodoListViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, SFNormalMainTableViewCellDelegate>
{
    SFTabChangeViewController *_tabVC;
    id <SFNormalMainViewControllerDelegate> _delegate;
    SFTodoListViewController *_sfTodoListVC;
    NSMutableArray *_dataArray;
    UIButton *_todoButton;
    UIImageView *_todoImage;
    UILabel *_todoLabel;
    UIButton *_doingButton;
    UIImageView *_doingImage;
    UILabel *_doingLabel;
    UIButton *_doneButton;
    UIImageView *_doneImage;
    UILabel *_doneLabel;
    UIButton *_applyButton;
    UIImageView *_applyImage;
    UILabel *_applyLabel;
    UIView *_applyBackView;
    UIView *_buttonBackgView;
    UIView *_buttonBackgView2;
}

@property(retain, nonatomic) UIView *buttonBackgView2; // @synthesize buttonBackgView2=_buttonBackgView2;
@property(retain, nonatomic) UIView *buttonBackgView; // @synthesize buttonBackgView=_buttonBackgView;
@property(retain, nonatomic) UIView *applyBackView; // @synthesize applyBackView=_applyBackView;
@property(retain, nonatomic) UILabel *applyLabel; // @synthesize applyLabel=_applyLabel;
@property(retain, nonatomic) UIImageView *applyImage; // @synthesize applyImage=_applyImage;
@property(retain, nonatomic) UIButton *applyButton; // @synthesize applyButton=_applyButton;
@property(retain, nonatomic) UILabel *doneLabel; // @synthesize doneLabel=_doneLabel;
@property(retain, nonatomic) UIImageView *doneImage; // @synthesize doneImage=_doneImage;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UILabel *doingLabel; // @synthesize doingLabel=_doingLabel;
@property(retain, nonatomic) UIImageView *doingImage; // @synthesize doingImage=_doingImage;
@property(retain, nonatomic) UIButton *doingButton; // @synthesize doingButton=_doingButton;
@property(retain, nonatomic) UILabel *todoLabel; // @synthesize todoLabel=_todoLabel;
@property(retain, nonatomic) UIImageView *todoImage; // @synthesize todoImage=_todoImage;
@property(retain, nonatomic) UIButton *todoButton; // @synthesize todoButton=_todoButton;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) SFTodoListViewController *sfTodoListVC; // @synthesize sfTodoListVC=_sfTodoListVC;
@property(nonatomic) __weak id <SFNormalMainViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SFTabChangeViewController *tabVC; // @synthesize tabVC=_tabVC;
- (void).cxx_destruct;
- (void)userLogoutSuccessNofitication:(id)arg1;
- (id)addLabelWithFrame:(struct CGRect)arg1;
- (id)addImageViewWithFrame:(struct CGRect)arg1 imageName:(id)arg2;
- (id)addButtonWithTitle:(id)arg1 backImageName:(id)arg2 superView:(id)arg3 tag:(unsigned long long)arg4;
- (id)addViewWithFrame:(struct CGRect)arg1 backColor:(id)arg2;
- (void)allWorkbenchButtonAction:(id)arg1;
- (id)createHeaderViewWithTitle:(id)arg1 rightButtonIsHiden:(_Bool)arg2;
- (void)setTableHeaderViewContentItems;
- (void)tableHeaderButtonAction:(id)arg1;
- (id)createTableHeaderView;
- (void)normalMainTableViewCell:(id)arg1 didSelectedWithItem:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)sendAllWorkbenchRequestFailWithItem:(id)arg1;
- (void)sendAllWorkbenchRequestSuccessWithItem:(id)arg1;
- (void)sendNormalMainVCInitRequestFailWithItem:(id)arg1;
- (void)sendNormalMainVCInitRequestSuccessWithItem:(id)arg1;
- (void)getWorkflowIdFailWithItem:(id)arg1;
- (void)getWorkflowIdSucessWithItem:(id)arg1;
- (void)requestNormalMainVCData;
- (void)sendRequestToServer;
- (void)todoListViewControllerChangePage:(id)arg1;
- (void)goWorkBenchWithTimeStr:(id)arg1;
- (void)timeVerifyFailWithResponseItem:(id)arg1;
- (void)timeVerifySuccessWithResponseItem:(id)arg1;
- (void)openWorkflow;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadUserInfoData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
