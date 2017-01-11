//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RefreshTableViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString;

@interface SFIncomeExpensesViewController : RefreshTableViewController <UITableViewDataSource, UITableViewDelegate>
{
}

- (void)didReceiveMemoryWarning;
- (id)dictionaryWithJsonString:(id)arg1;
- (void)requestBalanceMoneyFail:(id)arg1;
- (void)requestBalanceMoneySuccess:(id)arg1;
- (void)requestIncomeExpensesData;
- (void)sendRequestToServer;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)creatCell:(id)arg1 withLine:(_Bool)arg2 indxpeth:(id)arg3;
- (void)creatTableview;
- (void)salaryExplain;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

