//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AsyncImageViewDelegate.h"
#import "SFMenuControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class DXPopover, IMContactFriendInfoModel, MBProgressHUD, NSIndexPath, NSMutableDictionary, NSString, SouFunIMSearchResultModel, SouFunIMUserInfoFooterView, UIBarButtonItem, UIButton, UIControl, UIImage, UILabel, UITableView, UIView;

@interface SouFunIMUserInfoViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, UITextFieldDelegate, SFMenuControllerDelegate, AsyncImageViewDelegate, UIActionSheetDelegate>
{
    UIButton *_deleteBtn;
    UIButton *_focusBtn;
    _Bool _isMyFriends;
    _Bool _textAlertShowAgain;
    _Bool _focus;
    NSString *_currIMusername;
    NSString *_nickname;
    NSString *_logoUrl;
    SouFunIMSearchResultModel *_resultModel;
    NSString *_remark;
    UITableView *_mainTableView;
    SouFunIMUserInfoFooterView *_footerView;
    UIBarButtonItem *_moreItem;
    UIButton *_deleteFriendsButton;
    UIControl *_backgroundView;
    NSMutableDictionary *_resultDic;
    long long _rowCount;
    MBProgressHUD *_hud;
    UILabel *_countLabel;
    NSIndexPath *_selectedIndexpath;
    NSIndexPath *_beizhuCellIndexpath;
    NSString *_alertLastInputStr;
    UIImage *_saveImage;
    UIView *_imageBackgroundView;
    DXPopover *_popover;
    UIView *_selectView;
    IMContactFriendInfoModel *_infoModel;
    struct CGRect _oldframe;
}

@property(retain, nonatomic) IMContactFriendInfoModel *infoModel; // @synthesize infoModel=_infoModel;
@property(nonatomic) _Bool focus; // @synthesize focus=_focus;
@property(retain, nonatomic) UIView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) DXPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) UIView *imageBackgroundView; // @synthesize imageBackgroundView=_imageBackgroundView;
@property(retain, nonatomic) UIImage *saveImage; // @synthesize saveImage=_saveImage;
@property(nonatomic) struct CGRect oldframe; // @synthesize oldframe=_oldframe;
@property(retain, nonatomic) NSString *alertLastInputStr; // @synthesize alertLastInputStr=_alertLastInputStr;
@property(nonatomic) _Bool textAlertShowAgain; // @synthesize textAlertShowAgain=_textAlertShowAgain;
@property(retain, nonatomic) NSIndexPath *beizhuCellIndexpath; // @synthesize beizhuCellIndexpath=_beizhuCellIndexpath;
@property(retain, nonatomic) NSIndexPath *selectedIndexpath; // @synthesize selectedIndexpath=_selectedIndexpath;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(nonatomic) _Bool isMyFriends; // @synthesize isMyFriends=_isMyFriends;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(retain, nonatomic) NSMutableDictionary *resultDic; // @synthesize resultDic=_resultDic;
@property(retain, nonatomic) UIControl *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *deleteFriendsButton; // @synthesize deleteFriendsButton=_deleteFriendsButton;
@property(retain, nonatomic) UIBarButtonItem *moreItem; // @synthesize moreItem=_moreItem;
@property(retain, nonatomic) SouFunIMUserInfoFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) SouFunIMSearchResultModel *resultModel; // @synthesize resultModel=_resultModel;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *currIMusername; // @synthesize currIMusername=_currIMusername;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)imageSavedToPhotosAlbum:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)btnAlert;
- (void)hideImage:(id)arg1;
- (void)showImage:(id)arg1;
- (void)touchAsyncImageView:(id)arg1;
- (id)getRemarkName;
- (_Bool)isZiji;
- (void)handelDeleteFriendSuccessWithNickName:(id)arg1;
- (void)handelSetRemarkSuccessWithNewRemark:(id)arg1;
- (void)setRemarkCellSelectedToNo;
- (void)sendEmail;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)addCellLineWithFrame:(struct CGRect)arg1 withSuperView:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)willPresentAlertView:(id)arg1;
- (void)setBeiZhu;
- (void)networkAccess;
- (void)setRemarkRequestWithStr:(id)arg1;
- (void)deleFriendFaile:(id)arg1;
- (void)popAction;
- (void)deleteFriendSuccess:(id)arg1;
- (void)deleteFriendsAction:(id)arg1;
- (void)toggleAction:(id)arg1;
- (void)focusFriendFaile:(id)arg1;
- (void)focusFriendSuccess:(id)arg1;
- (void)focusPeopleAction:(id)arg1;
- (void)selectBtnPress:(id)arg1;
- (void)moreAction:(id)arg1;
- (void)callActionWithPhone:(id)arg1;
- (void)callAction:(id)arg1;
- (void)messageAction:(id)arg1;
- (void)voiceChat:(id)arg1;
- (void)addFriendResultShow:(id)arg1;
- (void)resultAddNewFriend:(id)arg1;
- (void)addFriendsAction:(id)arg1;
- (id)getChatKeyWith:(id)arg1 withHouseId:(id)arg2;
- (void)getMyFriendList;
- (_Bool)isFocusPeople;
- (void)createMenu;
- (void)reLoadFriendListUnSuccessfully:(id)arg1;
- (void)getFocusStatua:(_Bool)arg1;
- (void)reLoadFriendListSuccessfully:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

