//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSString, UIScrollView, UITableView, UIView;

@interface SFDetailedListViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>
{
    long long index;
    UIView *selectView;
    UIScrollView *detailScrollview;
    UIView *view1;
    UIView *view2;
    _Bool isScrolled;
    UITableView *incomeTableview;
    UITableView *salaryTableview;
    NSArray *incomeDataAry;
    NSDictionary *SalaryDataDic;
    NSString *errorInfo;
    int i;
    NSString *_idStr;
    NSString *_titleStr;
}

@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) NSString *idStr; // @synthesize idStr=_idStr;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)dictionaryWithJsonString:(id)arg1;
- (void)returnSalaryDataFail:(id)arg1;
- (void)returnSalaryDataSuccess:(id)arg1;
- (void)requestSalaryData;
- (void)returnIncomeDataFail:(id)arg1;
- (void)returnIncomeDataSuccess:(id)arg1;
- (void)requestIncomeData;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)btnClickWithScroll:(id)arg1;
- (void)btnClick:(id)arg1;
- (void)creatSalaryTableviewCell:(id)arg1 withLine:(_Bool)arg2 indexPath:(id)arg3;
- (void)creatIncomeTablewCell:(id)arg1 withLine:(_Bool)arg2 indexPath:(id)arg3;
- (void)creatTablewView2;
- (void)creatTablewView1;
- (void)creatDetailView;
- (void)creatScrollView;
- (void)creatSelectView:(id)arg1;
- (void)creatButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)salaryExplain;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
