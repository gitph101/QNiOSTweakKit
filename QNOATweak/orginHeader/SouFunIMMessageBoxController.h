//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AsyncImageViewDelegate.h"
#import "SFMenuControllerDelegate.h"
#import "SouFunNoticeTipViewControllertrendDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AsyncImageView, DXPopover, NSMutableArray, NSString, SFBindingOfAcountViewController, SouFunIMContactsTableView, SouFunNoticeTipViewController, UIButton, UIImageView, UILabel, UISearchBar, UISearchDisplayController, UITableView, UIView;

@interface SouFunIMMessageBoxController : UIViewController <SouFunNoticeTipViewControllertrendDelegate, AsyncImageViewDelegate, UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, SFMenuControllerDelegate, UISearchBarDelegate>
{
    _Bool isShowBack;
    UITableView *tableV;
    UILabel *nullNoticeLabel;
    AsyncImageView *reloadImage;
    long long cslistcount;
    long long csPageIndex;
    NSMutableArray *csListArray;
    UIView *nullView;
    SouFunIMContactsTableView *contactsTableView;
    UIButton *addFriendsBtn;
    UIImageView *messageImgView;
    UILabel *messageLabel;
    UIImageView *contactsImageView;
    UILabel *contactsLabel;
    NSMutableArray *searchContactsResults;
    NSMutableArray *contactsArr;
    NSMutableArray *contactsGroupArr;
    NSMutableArray *chatDetailInfoArr;
    struct CGSize screenSize;
    UIButton *_noticeBtn;
    UIButton *_groupChatBtn;
    UIButton *_scanBtn;
    UIButton *_helpBtn;
    _Bool _messageBtnIsSelected;
    _Bool _isShowRemind;
    _Bool _isShowNotice;
    _Bool _isTap;
    _Bool _isDisMiss;
    NSString *ownerRepNum;
    NSString *barMessageNum;
    UIView *_loadingView;
    UISearchBar *_mySearchBar;
    UISearchDisplayController *_mySearchDisplayController;
    UIView *_searchBackView;
    NSMutableArray *_dataItems;
    NSString *_keyword;
    long long _start;
    UITableView *_mainTableView;
    NSMutableArray *_searchLeader;
    NSMutableArray *_leaderArr;
    NSMutableArray *_searchColleagueArr;
    NSMutableArray *_colleagueArr;
    UIView *_failHeadView;
    DXPopover *_rightPopover;
    UIView *_selectView;
    SouFunNoticeTipViewController *_tipViewVC;
    SFBindingOfAcountViewController *_sfBindingFinanceVC;
    UIView *_noHeadImgView;
}

@property(retain, nonatomic) UIView *noHeadImgView; // @synthesize noHeadImgView=_noHeadImgView;
@property(retain, nonatomic) SFBindingOfAcountViewController *sfBindingFinanceVC; // @synthesize sfBindingFinanceVC=_sfBindingFinanceVC;
@property(nonatomic) _Bool isDisMiss; // @synthesize isDisMiss=_isDisMiss;
@property(nonatomic) _Bool isTap; // @synthesize isTap=_isTap;
@property(retain, nonatomic) SouFunNoticeTipViewController *tipViewVC; // @synthesize tipViewVC=_tipViewVC;
@property(retain, nonatomic) UIView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) DXPopover *rightPopover; // @synthesize rightPopover=_rightPopover;
@property(nonatomic) _Bool isShowNotice; // @synthesize isShowNotice=_isShowNotice;
@property(retain, nonatomic) UIView *failHeadView; // @synthesize failHeadView=_failHeadView;
@property(retain, nonatomic) NSMutableArray *colleagueArr; // @synthesize colleagueArr=_colleagueArr;
@property(retain, nonatomic) NSMutableArray *searchColleagueArr; // @synthesize searchColleagueArr=_searchColleagueArr;
@property(retain, nonatomic) NSMutableArray *leaderArr; // @synthesize leaderArr=_leaderArr;
@property(retain, nonatomic) NSMutableArray *searchLeader; // @synthesize searchLeader=_searchLeader;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(nonatomic) long long start; // @synthesize start=_start;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(nonatomic) _Bool isShowRemind; // @synthesize isShowRemind=_isShowRemind;
@property(retain, nonatomic) UIView *searchBackView; // @synthesize searchBackView=_searchBackView;
@property(nonatomic) _Bool messageBtnIsSelected; // @synthesize messageBtnIsSelected=_messageBtnIsSelected;
@property(retain, nonatomic) UISearchDisplayController *mySearchDisplayController; // @synthesize mySearchDisplayController=_mySearchDisplayController;
@property(retain, nonatomic) UISearchBar *mySearchBar; // @synthesize mySearchBar=_mySearchBar;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMutableArray *chatDetailInfoArr; // @synthesize chatDetailInfoArr;
@property(retain, nonatomic) NSMutableArray *contactsGroupArr; // @synthesize contactsGroupArr;
@property(retain, nonatomic) NSMutableArray *contactsArr; // @synthesize contactsArr;
@property(retain, nonatomic) NSMutableArray *searchContactsResults; // @synthesize searchContactsResults;
@property(retain, nonatomic) UILabel *contactsLabel; // @synthesize contactsLabel;
@property(retain, nonatomic) UIImageView *contactsImageView; // @synthesize contactsImageView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel;
@property(retain, nonatomic) SouFunIMContactsTableView *contactsTableView; // @synthesize contactsTableView;
@property(retain, nonatomic) UIButton *addFriendsBtn; // @synthesize addFriendsBtn;
@property(retain, nonatomic) UIImageView *messageImgView; // @synthesize messageImgView;
@property(retain, nonatomic) UIView *nullView; // @synthesize nullView;
@property(nonatomic) long long csPageIndex; // @synthesize csPageIndex;
@property(retain, nonatomic) NSMutableArray *csListArray; // @synthesize csListArray;
@property(nonatomic) long long cslistcount; // @synthesize cslistcount;
@property(retain, nonatomic) AsyncImageView *reloadImage; // @synthesize reloadImage;
@property(retain, nonatomic) UILabel *nullNoticeLabel; // @synthesize nullNoticeLabel;
@property(retain, nonatomic) NSString *barMessageNum; // @synthesize barMessageNum;
@property(retain, nonatomic) NSString *ownerRepNum; // @synthesize ownerRepNum;
@property(nonatomic) _Bool isShowBack; // @synthesize isShowBack;
@property(retain, nonatomic) UITableView *tableV; // @synthesize tableV;
- (void).cxx_destruct;
- (void)clearIMCache;
- (void)gotoGroupChatVCWithGroupID:(id)arg1 withGroupName:(id)arg2;
- (void)scanQRCodeJoinGroupSuccessGotoChatVCWithResult:(id)arg1;
- (void)refreshTipView;
- (void)dissMissTipView;
- (void)popLogin;
- (void)removeFinanceBangdingView;
- (void)createFinanceingBangdingView;
- (void)showFinanceBandingView;
- (void)removeTipView;
- (void)passTrendValues:(id)arg1;
- (void)showTipViewController;
- (void)createTipViewController;
- (void)loadColleagueData;
- (void)loadLeaderData;
- (void)reloadMessageList;
- (id)getCustomListModelByMessageType:(unsigned long long)arg1 withMessageID:(id)arg2;
- (void)clearUnReadMessageCountWithMessageID:(id)arg1;
- (long long)getUnReadMessageCountWithMessageType:(unsigned long long)arg1;
- (void)updateCustomListModel:(id)arg1;
- (void)decressTongzhiUnReadCount;
- (void)deleteAllChat;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)refreshPage;
- (void)searchBarResignAndChangeUI;
- (void)clearSearchResultData;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)dataItems:(id)arg1 addDailishangSeachResultsRemoveduplicate:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)searchModelInArray:(id)arg1 andText:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (id)getChatKeyWith:(id)arg1 withHouseId:(id)arg2;
- (void)deleteCurRowInTable:(id)arg1;
- (void)checkListArray:(id)arg1;
- (int)getMessageBoxAllCount;
- (void)removeMessageFromListPage:(id)arg1;
- (void)sortMessageList;
- (int)refreshListPage:(id)arg1;
- (void)loadlistData;
- (void)initData;
- (void)gotoChatView:(id)arg1 animated:(_Bool)arg2;
- (void)gointoDetail:(id)arg1 index:(long long)arg2;
- (void)loadlistCellItemData:(id)arg1;
- (void)popToLastPage;
- (void)showLoadingView;
- (void)creatNullNoticeView;
- (void)hideErrorView;
- (void)handleSingleTap:(id)arg1;
- (void)showErrorView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)createSearchBar;
- (void)tableHeaderViewIsFailTip:(_Bool)arg1;
- (void)createTableViewForMessageBoxList;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)removePortraitSetView;
- (void)gotoSetPortrait;
- (void)createPortraitImageView;
- (void)removeMustReadVCNotice;
- (void)showNoPortraitImageView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reLoadFriendListUnSuccessfully:(id)arg1;
- (void)reLoadFriendListSuccessfully:(id)arg1;
- (void)changeButtonStatu;
- (void)refreshFriendList;
- (void)changeBtnWithIndex:(long long)arg1;
- (void)changeVC:(id)arg1;
- (void)addButtonWithRect:(struct CGRect)arg1 buttonTag:(long long)arg2 title:(id)arg3 imageName:(id)arg4 textColor:(id)arg5 inParentView:(id)arg6 isLeft:(_Bool)arg7;
- (void)addSeperateLineWithRect:(struct CGRect)arg1 andColor:(id)arg2 inParentView:(id)arg3;
- (void)createBottomView;
- (void)getNotificationRightResultWithResponseItem:(id)arg1;
- (void)selectBtnPress:(id)arg1;
- (void)showMenu:(id)arg1;
- (void)searchFriend:(id)arg1;
- (void)backWard;
- (void)createBackFowardButton;
- (void)createLeftButtonItem;
- (void)addNotification;
- (void)createRequestFailView;
- (void)initNeedData;
- (void)reLoadFriendsList:(id)arg1;
- (void)viewDidLoad;
- (void)createMenu;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
