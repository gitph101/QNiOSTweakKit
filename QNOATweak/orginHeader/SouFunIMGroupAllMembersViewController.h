//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SouFunIMAllMemberTopViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class MBProgressHUD, NSIndexPath, NSMutableArray, NSString, SouFunIMAllMemberTopView, UIBarButtonItem, UIButton, UISearchBar, UITableView, UIView;

@interface SouFunIMGroupAllMembersViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UIAlertViewDelegate, UITextFieldDelegate, SouFunIMAllMemberTopViewDelegate>
{
    _Bool _isGroupManager;
    _Bool _isRefresh;
    _Bool _isGroupAdministrator;
    int _viewType;
    NSString *_groupID;
    NSString *_groupName;
    NSString *_groupManager;
    NSString *_housetype;
    NSString *_notifyState;
    NSString *_groupCount;
    NSMutableArray *_membersArr;
    NSIndexPath *_deletedIndexPath;
    UITableView *_mainTableView;
    MBProgressHUD *_hud;
    UITableView *_searchTableView;
    UISearchBar *_mySearchBar;
    UIView *_searchBackView;
    NSMutableArray *_searchArr;
    NSMutableArray *_deletedMembersArr;
    UIButton *_rightButton;
    UIBarButtonItem *_shareButton;
    NSString *_groupNewManager;
    unsigned long long _page;
    unsigned long long _searchPage;
    unsigned long long _membersCount;
    NSString *_searchText;
    unsigned long long _searchTotal;
    NSMutableArray *_personTotalArr;
    NSMutableArray *_groupAdministrators;
    UIView *_noDataView;
    NSMutableArray *_indexResult;
    NSMutableArray *_sortedArray;
    NSMutableArray *_resultArray;
    NSMutableArray *_sectionArr;
    NSMutableArray *_LetterResultArr;
    NSIndexPath *_topViewSelectIndexPath;
    SouFunIMAllMemberTopView *_topView;
}

@property(retain, nonatomic) SouFunIMAllMemberTopView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSIndexPath *topViewSelectIndexPath; // @synthesize topViewSelectIndexPath=_topViewSelectIndexPath;
@property(retain, nonatomic) NSMutableArray *LetterResultArr; // @synthesize LetterResultArr=_LetterResultArr;
@property(retain, nonatomic) NSMutableArray *sectionArr; // @synthesize sectionArr=_sectionArr;
@property(retain, nonatomic) NSMutableArray *resultArray; // @synthesize resultArray=_resultArray;
@property(retain, nonatomic) NSMutableArray *sortedArray; // @synthesize sortedArray=_sortedArray;
@property(retain, nonatomic) NSMutableArray *indexResult; // @synthesize indexResult=_indexResult;
@property(retain, nonatomic) UIView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) NSMutableArray *groupAdministrators; // @synthesize groupAdministrators=_groupAdministrators;
@property(nonatomic) _Bool isGroupAdministrator; // @synthesize isGroupAdministrator=_isGroupAdministrator;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(retain, nonatomic) NSMutableArray *personTotalArr; // @synthesize personTotalArr=_personTotalArr;
@property(nonatomic) unsigned long long searchTotal; // @synthesize searchTotal=_searchTotal;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) unsigned long long membersCount; // @synthesize membersCount=_membersCount;
@property(nonatomic) unsigned long long searchPage; // @synthesize searchPage=_searchPage;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *groupNewManager; // @synthesize groupNewManager=_groupNewManager;
@property(retain, nonatomic) UIBarButtonItem *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) NSMutableArray *deletedMembersArr; // @synthesize deletedMembersArr=_deletedMembersArr;
@property(retain, nonatomic) NSMutableArray *searchArr; // @synthesize searchArr=_searchArr;
@property(retain, nonatomic) UIView *searchBackView; // @synthesize searchBackView=_searchBackView;
@property(retain, nonatomic) UISearchBar *mySearchBar; // @synthesize mySearchBar=_mySearchBar;
@property(retain, nonatomic) UITableView *searchTableView; // @synthesize searchTableView=_searchTableView;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) NSIndexPath *deletedIndexPath; // @synthesize deletedIndexPath=_deletedIndexPath;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;
@property(nonatomic) _Bool isGroupManager; // @synthesize isGroupManager=_isGroupManager;
@property(retain, nonatomic) NSMutableArray *membersArr; // @synthesize membersArr=_membersArr;
@property(copy, nonatomic) NSString *groupCount; // @synthesize groupCount=_groupCount;
@property(copy, nonatomic) NSString *notifyState; // @synthesize notifyState=_notifyState;
@property(copy, nonatomic) NSString *housetype; // @synthesize housetype=_housetype;
@property(copy, nonatomic) NSString *groupManager; // @synthesize groupManager=_groupManager;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
- (void).cxx_destruct;
- (id)getSortArrayWithArray:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)changeGroupManager:(id)arg1;
- (void)changeGroupManagerRequest;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)searchRefreshData;
- (void)searchPagingGetGroupUserListUnsuccessfully:(id)arg1;
- (void)searchPagingGetGroupUserListSuccessfully:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarResignAndChangeUI;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)kickGroupUserUnSuccessfully:(id)arg1;
- (void)kickGroupUserSuccessfully:(id)arg1;
- (void)deletePersonInGroup:(id)arg1;
- (void)cancleGroupManagerInfo:(id)arg1;
- (void)cancleGroupManager:(id)arg1;
- (void)addGroupManagerInfo:(id)arg1;
- (void)addGroupManager:(id)arg1;
- (void)batchKickGroupUserUnSuccessfully:(id)arg1;
- (void)batchKickGroupUserSuccessfully:(id)arg1;
- (void)deletPersonWithArr:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)judgeState:(id)arg1;
- (void)checkButtonTapped:(id)arg1 event:(id)arg2;
- (id)selectMembersTableViewCell:(id)arg1 withModel:(id)arg2 withDataArr:(id)arg3 withIndexPath:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)topViewCancelManagerAtIndexPath:(id)arg1;
- (void)topViewDeleteMemberAtIndexPath:(id)arg1;
- (void)topViewDidSelectRowAtIndexPath:(id)arg1;
- (id)LetterResultArrWithArray:(id)arg1;
- (id)indexResultWithArray:(id)arg1;
- (id)sortedArrayWithArray:(id)arg1;
- (void)addPerson;
- (void)searchFriend;
- (void)createRightButtonItems;
- (void)chatAction;
- (void)back;
- (void)createNavItem;
- (void)createSearchBar;
- (void)goBack;
- (void)setNavigation;
- (void)createNoDataView;
- (void)createUI;
- (void)viewDidLoad;
- (void)getGroupUserListUnSuccessfully:(id)arg1;
- (void)getGroupUserListSuccessfully:(id)arg1;
- (void)getGroupInfoFromCoreData;
- (void)getGroupInfoUnSuccessfully:(id)arg1;
- (void)getGroupInfoSuccessfully:(id)arg1;
- (void)refreshData;
- (void)pagingGetGroupUserListUnsuccessfully:(id)arg1;
- (void)pagingGetGroupUserListSuccessfully:(id)arg1;
- (void)loadData;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

