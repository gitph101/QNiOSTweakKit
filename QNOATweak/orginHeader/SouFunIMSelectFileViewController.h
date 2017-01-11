//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IMMenuDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, SouFunIMSelectFileMenu, UIButton, UIImageView, UITableView, UIView;

@interface SouFunIMSelectFileViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, IMMenuDelegate>
{
    id <SouFunIMSelectFileDelegate> _delegate;
    UITableView *_tbView;
    NSMutableArray *_data;
    UIView *_noDataView;
    UIButton *_rightButton;
    NSMutableArray *_willSendFileArray;
    UIImageView *_navBg;
    SouFunIMSelectFileMenu *_menu;
    NSMutableArray *_sectionDataArr;
    long long _sectionIndex;
}

@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(retain, nonatomic) NSMutableArray *sectionDataArr; // @synthesize sectionDataArr=_sectionDataArr;
@property(retain, nonatomic) SouFunIMSelectFileMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) UIImageView *navBg; // @synthesize navBg=_navBg;
@property(retain, nonatomic) NSMutableArray *willSendFileArray; // @synthesize willSendFileArray=_willSendFileArray;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(retain, nonatomic) UITableView *tbView; // @synthesize tbView=_tbView;
@property(nonatomic) id <SouFunIMSelectFileDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)backForward;
- (void)createLeftNavBackItem;
- (long long)checkFileNumber;
- (void)reloadTableviewData;
- (void)cancelAction:(id)arg1;
- (void)confirmAction:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)checkButtonTapped:(id)arg1 event:(id)arg2;
- (void)checkButtonTappedRead:(id)arg1 event:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getFileData;
- (void)createNoDataView;
- (void)createTableView;
- (void)getDivideData;
- (void)clickMenu:(id)arg1 atIndex:(long long)arg2;
- (void)createItem;
- (void)createTabBtn;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

