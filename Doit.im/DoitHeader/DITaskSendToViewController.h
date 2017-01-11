//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class Contact, DISearchTextField, NSArray, NSOperationQueue, NSString, Task, UILabel, UISwitch, UITableView, UIView;

@interface DITaskSendToViewController : SIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UISwitch *_autoComplete;
    NSOperationQueue *_searchQueue;
    _Bool _ignoreTableViewFrameOnce;
    Task *_task;
    id <DITaskSendToViewControllerDelegate> _controllerDelegate;
    NSArray *_contacts;
    NSArray *_filterContacts;
    UIView *_headerView;
    UITableView *_tableView;
    Contact *_selectedContact;
    DISearchTextField *_searchTextField;
    UILabel *_noResultLabel;
}

@property(nonatomic) _Bool ignoreTableViewFrameOnce; // @synthesize ignoreTableViewFrameOnce=_ignoreTableViewFrameOnce;
@property(retain, nonatomic) UILabel *noResultLabel; // @synthesize noResultLabel=_noResultLabel;
@property(retain, nonatomic) DISearchTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) Contact *selectedContact; // @synthesize selectedContact=_selectedContact;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSArray *filterContacts; // @synthesize filterContacts=_filterContacts;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) id <DITaskSendToViewControllerDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(retain, nonatomic) Task *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)OK:(id)arg1;
- (void)cancel:(id)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)avatarImageForUser:(id)arg1;
- (void)loadTableHeaderView;
- (void)setNavigationBarStyle;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

