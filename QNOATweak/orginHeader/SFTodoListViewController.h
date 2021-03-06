//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RefreshTableViewController.h"

#import "SFProcessDetailsViewControllerDelegate.h"
#import "SFTitleSearchViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UILabel, UIView;

@interface SFTodoListViewController : RefreshTableViewController <UITableViewDelegate, UITableViewDataSource, SFTitleSearchViewControllerDelegate, SFProcessDetailsViewControllerDelegate>
{
    _Bool _isRefreshFromSearchPage;
    _Bool _isRefreshFromProcessDetails;
    NSString *_status;
    UIView *_sectionView;
    UIView *_sectionColorView;
    UILabel *_sectionTitleLabel;
    UIView *_sectionLine;
    NSString *_companyID;
    NSString *_typeCode;
    NSString *_urlString;
    NSString *_mainTitle;
    NSString *_todoListTitle;
    NSString *_menuName;
    NSString *_presectionTitle;
    long long _sfListType;
    long long _todoListType;
    NSString *_startDate;
    NSString *_endDate;
    NSString *_searchCondition;
    long long _sfSearchSign;
    NSString *_nextRequestIds;
    UIButton *_backButton;
    UIButton *_searchButton;
    id <SFTodoListViewControllerDelegate> _delegate;
    NSMutableArray *_dataArray;
    NSString *_noramlUserListType;
    UIView *_noDataView;
}

@property(nonatomic) _Bool isRefreshFromProcessDetails; // @synthesize isRefreshFromProcessDetails=_isRefreshFromProcessDetails;
@property(nonatomic) _Bool isRefreshFromSearchPage; // @synthesize isRefreshFromSearchPage=_isRefreshFromSearchPage;
@property(retain, nonatomic) UIView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) NSString *noramlUserListType; // @synthesize noramlUserListType=_noramlUserListType;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) id <SFTodoListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) NSString *nextRequestIds; // @synthesize nextRequestIds=_nextRequestIds;
@property(nonatomic) long long sfSearchSign; // @synthesize sfSearchSign=_sfSearchSign;
@property(retain, nonatomic) NSString *searchCondition; // @synthesize searchCondition=_searchCondition;
@property(retain, nonatomic) NSString *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSString *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long todoListType; // @synthesize todoListType=_todoListType;
@property(nonatomic) long long sfListType; // @synthesize sfListType=_sfListType;
@property(retain, nonatomic) NSString *presectionTitle; // @synthesize presectionTitle=_presectionTitle;
@property(retain, nonatomic) NSString *menuName; // @synthesize menuName=_menuName;
@property(retain, nonatomic) NSString *todoListTitle; // @synthesize todoListTitle=_todoListTitle;
@property(retain, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) NSString *typeCode; // @synthesize typeCode=_typeCode;
@property(retain, nonatomic) NSString *companyID; // @synthesize companyID=_companyID;
@property(retain, nonatomic) UIView *sectionLine; // @synthesize sectionLine=_sectionLine;
@property(retain, nonatomic) UILabel *sectionTitleLabel; // @synthesize sectionTitleLabel=_sectionTitleLabel;
@property(retain, nonatomic) UIView *sectionColorView; // @synthesize sectionColorView=_sectionColorView;
@property(retain, nonatomic) UIView *sectionView; // @synthesize sectionView=_sectionView;
@property(nonatomic) __weak NSString *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)userLogoutSuccessNofitication:(id)arg1;
- (void)titleSearchViewController:(id)arg1 searchTitle:(id)arg2 startTime:(id)arg3 endTime:(id)arg4 isRefreshFromSearchPage:(_Bool)arg5;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)searchButtonAction:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)BackFoward;
- (void)sendRequestFail:(id)arg1;
- (void)popVC;
- (void)sendRequestSuccess:(id)arg1;
- (void)sendRequestToServerWithPage:(long long)arg1 searchCondition:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (void)sendSearchRequestToServerWithPage:(long long)arg1;
- (void)sendRequestToServerWithPage:(long long)arg1;
- (void)sendRequestToServer;
- (void)viewDidLoad;
- (void)sfProcessDetailsViewController:(id)arg1 isRefreshTodoListViewController:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setUserInterface;
- (void)createNoDataView;
- (id)init;
- (id)initWithTitle:(id)arg1 type:(long long)arg2 listType:(long long)arg3 typecode:(id)arg4 todoListType:(long long)arg5 delegate:(id)arg6;
- (id)initWithTitle:(id)arg1 companyID:(id)arg2 menuName:(id)arg3 typecode:(id)arg4 sectionTitle:(id)arg5 todoListType:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

