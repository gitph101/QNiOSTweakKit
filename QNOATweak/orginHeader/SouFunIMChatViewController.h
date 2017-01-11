//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AsyncImageViewDelegate.h"
#import "ChatVoiceRecorderVCDelegate.h"
#import "HPGrowingTextViewDelegate.h"
#import "IMMoreButtonViewDelegate.h"
#import "MLEmojiLabelDelegate.h"
#import "PictureOrMapControllerDelegate.h"
#import "SelectAtGroupMemberDelegate.h"
#import "SouFunIMEmojiViewInputDelegate.h"
#import "SouFunIMSelectCardDelegate.h"
#import "SouFunIMSelectFileDelegate.h"
#import "SouFunUpLoadImageViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "countFinishDelegate.h"

@class AsyncImageView, ChatVoiceRecorderVC, FPPopoverController, HPGrowingTextView, IMContactFriendInfoModel, LocateAndReverseGeoderService, MBProgressHUD, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NSURL, SRWebSocket, SouFunIMChatGroupMemeber, SouFunIMPictureOrMapController, SouFunIMPlayVoiceAnimationView, SouFunIMRecordAnimationView, SouFunIMRecorderCountView, SouFunIMShowXiangceView, UIAlertView, UIButton, UIImage, UILabel, UIMenuController, UIPanGestureRecognizer, UITableView, UIView;

@interface SouFunIMChatViewController : UIViewController <IMMoreButtonViewDelegate, UITableViewDataSource, UITableViewDelegate, HPGrowingTextViewDelegate, AsyncImageViewDelegate, PictureOrMapControllerDelegate, ChatVoiceRecorderVCDelegate, UIGestureRecognizerDelegate, SouFunUpLoadImageViewDelegate, UIActionSheetDelegate, countFinishDelegate, UINavigationControllerDelegate, SelectAtGroupMemberDelegate, SouFunIMEmojiViewInputDelegate, MLEmojiLabelDelegate, SouFunIMSelectCardDelegate, SouFunIMSelectFileDelegate>
{
    _Bool _reloading;
    NSURL *_videoURL;
    NSString *_mp4Path;
    _Bool _hasVideo;
    _Bool _hasMp4;
    UIAlertView *_alert;
    ChatVoiceRecorderVC *chatVoiceRecorder;
    NSString *_currentPlayVoiceUrl;
    NSTimer *_timer;
    long long currentRecorderTime;
    SouFunIMPlayVoiceAnimationView *currentVoiceAnimationView;
    UIPanGestureRecognizer *upPanGes;
    _Bool isRecording;
    _Bool isInputText;
    double addToNewCustomerViewHeight;
    double lastOffsetY;
    _Bool _isFromNewSMS;
    _Bool isVisiter;
    _Bool isCustomer;
    _Bool _showMore;
    _Bool _isHandleDraft;
    _Bool _scrollToBbottom;
    _Bool _groupIsDelete;
    _Bool _isGroupChat;
    _Bool _isHadLogin;
    _Bool _inBlacklist;
    _Bool _isXFT;
    _Bool _hasDraft;
    _Bool _isMoreInputing;
    _Bool _isEmojiInputing;
    _Bool _isNotKeyboardChangeTextView;
    _Bool _keyboardIsShow;
    _Bool _selectedGroupMemeberVCIsShow;
    _Bool _isSelectMoreMenuItemFlag;
    int _lastChatArrayCount;
    NSString *selfCustomer;
    NSString *currChatCustomer;
    UITableView *_chatTableView;
    NSString *_titleString;
    NSString *_phraseString;
    NSString *wsurl;
    NSString *publickey;
    SRWebSocket *_webSocket;
    NSMutableDictionary *_chatDictionary;
    NSString *_messageString;
    NSDate *_lastTime;
    FPPopoverController *popoverCon;
    NSMutableArray *statusCustomerList;
    UIView *containerView;
    HPGrowingTextView *textView;
    NSString *_messageID;
    NSString *_tempMessageID;
    NSMutableArray *customerlist;
    SouFunIMRecordAnimationView *my_recordvirew;
    NSString *chongfaUUID;
    SouFunIMPictureOrMapController *picOrMapContr;
    NSString *otherUserNickname;
    UILabel *titleLab;
    long long groupChatUserNumber;
    NSString *cardMessage;
    MBProgressHUD *hud;
    NSString *lastTextViewText;
    NSMutableArray *selectedAtGroupMembersArr;
    SouFunIMChatGroupMemeber *lastSelectedGroupMemeber;
    LocateAndReverseGeoderService *_locationService;
    NSString *_locationAdress;
    NSString *_nickName;
    NSString *_remark;
    NSString *_userName;
    UIImage *_resendImage;
    NSString *_msgContentSpell;
    NSString *_urlString;
    NSString *_imgString;
    NSString *_descString;
    SouFunIMRecorderCountView *_countView;
    long long _noReadChatMessageCount;
    UIButton *_btn;
    UIButton *_btn2;
    UIButton *_addFriendBtn;
    UIButton *_addFriendBtn2;
    UILabel *_onlineOrOfflineLab;
    UIView *_viewOfAgent;
    NSString *_sendToPortrait;
    IMContactFriendInfoModel *_friendInfoModel;
    UIView *_moreButtonView;
    UIView *_emojisView;
    NSString *_emojiInputRangeStr;
    UIMenuController *_menuOfLongPressQiPao;
    NSString *_firstNoReadMessageKey;
    NSString *_tempRecallMessageKey;
    NSString *_tempRecallMessage;
    NSDate *_tempRecallSendtime;
    NSString *_tempImageSendStatus;
    AsyncImageView *_shareDownloadimageView;
    NSString *_email;
    NSString *_cardInfo;
    NSMutableArray *_fileInfoArray;
    NSMutableArray *_selectedMessageKeyArr;
    NSString *_resendedMoreMessage;
    SouFunIMShowXiangceView *_showXiangce;
    NSString *_isGroupChatGotoWitchVC;
}

@property(retain, nonatomic) NSString *isGroupChatGotoWitchVC; // @synthesize isGroupChatGotoWitchVC=_isGroupChatGotoWitchVC;
@property(retain, nonatomic) SouFunIMShowXiangceView *showXiangce; // @synthesize showXiangce=_showXiangce;
@property(retain, nonatomic) NSString *resendedMoreMessage; // @synthesize resendedMoreMessage=_resendedMoreMessage;
@property(retain, nonatomic) NSMutableArray *selectedMessageKeyArr; // @synthesize selectedMessageKeyArr=_selectedMessageKeyArr;
@property(nonatomic) _Bool isSelectMoreMenuItemFlag; // @synthesize isSelectMoreMenuItemFlag=_isSelectMoreMenuItemFlag;
@property(retain, nonatomic) NSMutableArray *fileInfoArray; // @synthesize fileInfoArray=_fileInfoArray;
@property(copy, nonatomic) NSString *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) AsyncImageView *shareDownloadimageView; // @synthesize shareDownloadimageView=_shareDownloadimageView;
@property(retain, nonatomic) NSString *tempImageSendStatus; // @synthesize tempImageSendStatus=_tempImageSendStatus;
@property(retain, nonatomic) NSDate *tempRecallSendtime; // @synthesize tempRecallSendtime=_tempRecallSendtime;
@property(retain, nonatomic) NSString *tempRecallMessage; // @synthesize tempRecallMessage=_tempRecallMessage;
@property(retain, nonatomic) NSString *tempRecallMessageKey; // @synthesize tempRecallMessageKey=_tempRecallMessageKey;
@property(retain, nonatomic) NSString *firstNoReadMessageKey; // @synthesize firstNoReadMessageKey=_firstNoReadMessageKey;
@property(retain, nonatomic) UIMenuController *menuOfLongPressQiPao; // @synthesize menuOfLongPressQiPao=_menuOfLongPressQiPao;
@property(nonatomic) _Bool selectedGroupMemeberVCIsShow; // @synthesize selectedGroupMemeberVCIsShow=_selectedGroupMemeberVCIsShow;
@property(nonatomic) _Bool keyboardIsShow; // @synthesize keyboardIsShow=_keyboardIsShow;
@property(nonatomic) _Bool isNotKeyboardChangeTextView; // @synthesize isNotKeyboardChangeTextView=_isNotKeyboardChangeTextView;
@property(nonatomic) int lastChatArrayCount; // @synthesize lastChatArrayCount=_lastChatArrayCount;
@property(retain, nonatomic) NSString *emojiInputRangeStr; // @synthesize emojiInputRangeStr=_emojiInputRangeStr;
@property(nonatomic) _Bool isEmojiInputing; // @synthesize isEmojiInputing=_isEmojiInputing;
@property(nonatomic) _Bool isMoreInputing; // @synthesize isMoreInputing=_isMoreInputing;
@property(retain, nonatomic) UIView *emojisView; // @synthesize emojisView=_emojisView;
@property(retain, nonatomic) UIView *moreButtonView; // @synthesize moreButtonView=_moreButtonView;
@property(nonatomic) _Bool hasDraft; // @synthesize hasDraft=_hasDraft;
@property(nonatomic) _Bool isXFT; // @synthesize isXFT=_isXFT;
@property(nonatomic) _Bool inBlacklist; // @synthesize inBlacklist=_inBlacklist;
@property(retain, nonatomic) IMContactFriendInfoModel *friendInfoModel; // @synthesize friendInfoModel=_friendInfoModel;
@property(retain, nonatomic) NSString *sendToPortrait; // @synthesize sendToPortrait=_sendToPortrait;
@property(retain, nonatomic) UIView *viewOfAgent; // @synthesize viewOfAgent=_viewOfAgent;
@property(retain, nonatomic) UILabel *onlineOrOfflineLab; // @synthesize onlineOrOfflineLab=_onlineOrOfflineLab;
@property(retain, nonatomic) UIButton *addFriendBtn2; // @synthesize addFriendBtn2=_addFriendBtn2;
@property(retain, nonatomic) UIButton *addFriendBtn; // @synthesize addFriendBtn=_addFriendBtn;
@property(retain, nonatomic) UIButton *btn2; // @synthesize btn2=_btn2;
@property(retain, nonatomic) UIButton *btn; // @synthesize btn=_btn;
@property(nonatomic) long long noReadChatMessageCount; // @synthesize noReadChatMessageCount=_noReadChatMessageCount;
@property(retain, nonatomic) SouFunIMRecorderCountView *countView; // @synthesize countView=_countView;
@property(retain, nonatomic) NSString *descString; // @synthesize descString=_descString;
@property(retain, nonatomic) NSString *imgString; // @synthesize imgString=_imgString;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) NSString *msgContentSpell; // @synthesize msgContentSpell=_msgContentSpell;
@property(retain, nonatomic) UIImage *resendImage; // @synthesize resendImage=_resendImage;
@property(nonatomic) _Bool isHadLogin; // @synthesize isHadLogin=_isHadLogin;
@property(nonatomic) _Bool isGroupChat; // @synthesize isGroupChat=_isGroupChat;
@property(nonatomic) _Bool groupIsDelete; // @synthesize groupIsDelete=_groupIsDelete;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) _Bool scrollToBbottom; // @synthesize scrollToBbottom=_scrollToBbottom;
@property(nonatomic) _Bool isHandleDraft; // @synthesize isHandleDraft=_isHandleDraft;
@property(retain, nonatomic) NSString *locationAdress; // @synthesize locationAdress=_locationAdress;
@property(nonatomic) _Bool showMore; // @synthesize showMore=_showMore;
@property(retain, nonatomic) LocateAndReverseGeoderService *locationService; // @synthesize locationService=_locationService;
@property(retain, nonatomic) SouFunIMChatGroupMemeber *lastSelectedGroupMemeber; // @synthesize lastSelectedGroupMemeber;
@property(retain, nonatomic) NSMutableArray *selectedAtGroupMembersArr; // @synthesize selectedAtGroupMembersArr;
@property(retain, nonatomic) NSString *lastTextViewText; // @synthesize lastTextViewText;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud;
@property(retain, nonatomic) NSString *cardMessage; // @synthesize cardMessage;
@property(nonatomic) long long groupChatUserNumber; // @synthesize groupChatUserNumber;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab;
@property(retain, nonatomic) NSString *otherUserNickname; // @synthesize otherUserNickname;
@property(nonatomic) _Bool isCustomer; // @synthesize isCustomer;
@property(retain, nonatomic) NSString *currentPlayVoiceUrl; // @synthesize currentPlayVoiceUrl=_currentPlayVoiceUrl;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) SouFunIMPictureOrMapController *picOrMapContr; // @synthesize picOrMapContr;
@property(retain, nonatomic) NSString *chongfaUUID; // @synthesize chongfaUUID;
@property(retain, nonatomic) SouFunIMRecordAnimationView *my_recordvirew; // @synthesize my_recordvirew;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording;
@property(retain, nonatomic) UIPanGestureRecognizer *upPanGes; // @synthesize upPanGes;
@property(nonatomic) long long currentRecorderTime; // @synthesize currentRecorderTime;
@property(retain, nonatomic) SouFunIMPlayVoiceAnimationView *currentVoiceAnimationView; // @synthesize currentVoiceAnimationView;
@property(retain, nonatomic) ChatVoiceRecorderVC *chatVoiceRecorder; // @synthesize chatVoiceRecorder;
@property(retain, nonatomic) NSMutableArray *customerlist; // @synthesize customerlist;
@property(retain, nonatomic) NSString *tempMessageID; // @synthesize tempMessageID=_tempMessageID;
@property(retain, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) HPGrowingTextView *textView; // @synthesize textView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView;
@property(retain, nonatomic) NSMutableArray *statusCustomerList; // @synthesize statusCustomerList;
@property(nonatomic) _Bool isVisiter; // @synthesize isVisiter;
@property(retain, nonatomic) FPPopoverController *popoverCon; // @synthesize popoverCon;
@property(retain, nonatomic) NSDate *lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
@property(retain, nonatomic) NSMutableDictionary *chatDictionary; // @synthesize chatDictionary=_chatDictionary;
@property(retain, nonatomic) SRWebSocket *webSocket; // @synthesize webSocket=_webSocket;
@property(retain, nonatomic) NSString *publickey; // @synthesize publickey;
@property(retain, nonatomic) NSString *wsurl; // @synthesize wsurl;
@property(nonatomic) _Bool isFromNewSMS; // @synthesize isFromNewSMS=_isFromNewSMS;
@property(retain, nonatomic) NSString *phraseString; // @synthesize phraseString=_phraseString;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) UITableView *chatTableView; // @synthesize chatTableView=_chatTableView;
@property(nonatomic) _Bool isInputText; // @synthesize isInputText;
@property(retain, nonatomic) NSString *currChatCustomer; // @synthesize currChatCustomer;
@property(retain, nonatomic) NSString *selfCustomer; // @synthesize selfCustomer;
- (void).cxx_destruct;
- (void)noReadAboutRecallWithMessageID:(id)arg1 withRecallMessageKey:(id)arg2 withNewMessageKey:(id)arg3;
- (void)chatTableViewScrollToNotReadTipView;
- (void)doneLoadNoReadMessage;
- (void)noReadButtonPress;
- (void)removeNoReadButtonAndAllMessageSetRead;
- (void)removeNotReadTipView;
- (void)addNoReadButtonView;
- (id)notReadTipView;
- (void)insertNotReadTipViewToChatArr;
- (_Bool)firstNoReadIsVisible;
- (void)initNoRead;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)menuWillHidden;
- (void)ifSelectMoreMenuItemSetAllQiPaoViewUserInteractionEnabled;
- (id)parseMoreMessageWithMoreMessagesStr:(id)arg1;
- (void)selectMoreMessageFinishGotoResendVCWithMessage:(id)arg1 sendType:(int)arg2;
- (void)showMoreMessageDeleteActionSheet;
- (void)moreMessageDelete:(id)arg1;
- (void)moreMessageResend:(id)arg1;
- (id)handleSelectedMessages:(id)arg1;
- (void)moreCancel:(id)arg1;
- (void)moreMenuItemAction:(id)arg1;
- (void)updateMessageKeyWithQipaoView:(id)arg1;
- (void)messageBoxShowLastMessage;
- (void)deleteAllTypeMessage:(id)arg1;
- (void)showDeleteMessageActionSheet;
- (void)recallAllTypeMessage:(id)arg1;
- (void)gotoResendVCWithType:(int)arg1;
- (void)shareLink:(id)arg1;
- (void)reSendLink:(id)arg1;
- (void)copyLink:(id)arg1;
- (void)longPressLink:(id)arg1;
- (void)longPressVideoView:(id)arg1;
- (void)reSendMoreMessage:(id)arg1;
- (void)longPressMoreMessageView:(id)arg1;
- (void)longPressCardView:(id)arg1;
- (void)longPressRedView:(id)arg1;
- (void)removVoicePlayModelToastView;
- (void)showVoicePlayModelToastViewWithImageName:(id)arg1 withText:(id)arg2;
- (void)setVoicePlayModel:(id)arg1;
- (void)longPressVoiceView:(id)arg1;
- (void)shareImage:(id)arg1;
- (void)ReSendImage:(id)arg1;
- (void)imageSavedToPhotosAlbum:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveImage:(id)arg1;
- (void)longPressImage:(id)arg1;
- (void)shareText:(id)arg1;
- (void)reSendText:(id)arg1;
- (void)copyText:(id)arg1;
- (void)longPressEmojiLabel:(id)arg1;
- (void)longPressLivechat:(id)arg1;
- (void)reSendPosition:(id)arg1;
- (void)longPressPosition:(id)arg1;
- (void)reSendFile:(id)arg1;
- (void)longPressFile:(id)arg1;
- (void)tapPositionToDo:(id)arg1;
- (id)bubblePositionViewWithMessage:(id)arg1 from:(_Bool)arg2 withError:(id)arg3 withUsername:(id)arg4;
- (void)sendPositionWithImage:(id)arg1 withName:(id)arg2 withAddress:(id)arg3 withCoordinate2D:(struct CLLocationCoordinate2D)arg4 withIsSharePosition:(_Bool)arg5;
- (void)gotoMoreMessageDetailVC:(id)arg1;
- (id)chatMoreMessageViewWithMessage:(id)arg1 isSelf:(_Bool)arg2;
- (void)gotoUserInfoView:(id)arg1;
- (id)chatCardViewMessage:(id)arg1;
- (void)gotowebViewURL:(id)arg1 withUrlStr:(id)arg2 withUrlTitle:(id)arg3 withUrlDesc:(id)arg4 withUrlImage:(id)arg5;
- (void)linkQiPaoClick:(id)arg1;
- (void)addLabel:(id *)arg1 superView:(id)arg2 frame:(struct CGRect)arg3 text:(id)arg4 font:(double)arg5 textColor:(id)arg6 tag:(long long)arg7;
- (id)chatLinkViewText:(id)arg1 message:(id)arg2 from:(_Bool)arg3;
- (void)tapLiveChatView:(id)arg1;
- (id)livechatViewWithMessage:(id)arg1 from:(_Bool)arg2 purposeDic:(id)arg3 withView:(id)arg4 withReadStatus:(id)arg5;
- (id)assembleMessageAtIndex:(id)arg1 from:(_Bool)arg2 title:(id)arg3;
- (void)refreshFileSendStatus:(id)arg1 isSuccess:(id)arg2;
- (void)refreshFileDownLoadStatus:(id)arg1;
- (void)changeFileSendStatus:(id)arg1;
- (void)gotoFileInfoView:(id)arg1;
- (id)chatFileViewWithMessage:(id)arg1 from:(_Bool)arg2 fileErrorStatus:(id)arg3;
- (void)gotoRedBagWebView:(id)arg1;
- (id)chatRedBagMessage:(id)arg1 isSelf:(_Bool)arg2;
- (void)gotoRedBagWebViewControllerWithUrl:(id)arg1;
- (id)createGroupRedBagUrlWithArray:(id)arg1 withGroupID:(id)arg2;
- (void)sendRedBag;
- (id)createURL:(id)arg1 withParameters:(id)arg2;
- (id)createRedBagUrl;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadPhotoView:(id)arg1 andNickNameLabel:(id)arg2;
- (void)reloadPhotoView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)shake;
- (void)playSound;
- (void)receiveMessage:(id)arg1 withTotalCount:(int)arg2;
- (void)asyncImageViewCallBack:(id)arg1;
- (void)updataTmpAndLogic:(id)arg1;
- (void)imageChongFa:(id)arg1;
- (void)imageChongXiaZai:(id)arg1;
- (id)showFailureUpLoadPicture:(id)arg1 from:(_Bool)arg2 withError:(id)arg3 userName:(id)arg4 andWidth:(id)arg5 andHeight:(id)arg6;
- (void)touchUpLoadImageView:(id)arg1;
- (void)getDataResourceForXiangce:(id)arg1 withView:(id)arg2;
- (void)reloadQipaoImageViewWithView:(id)arg1 withUrl:(id)arg2;
- (void)TapPressImage:(id)arg1;
- (id)bubbleAsynImageView:(id)arg1 from:(_Bool)arg2 withError:(id)arg3 withUsername:(id)arg4 andWidth:(id)arg5 andHeight:(id)arg6;
- (void)xiuGaiFaSongZhuangTai:(id)arg1 status:(id)arg2 andWidth:(id)arg3 andHeight:(id)arg4 withMessageID:(id)arg5;
- (void)didSelectPictureWithImage:(id)arg1 withMessageID:(id)arg2 withIsGroupChat:(_Bool)arg3;
- (void)addNickeNameWithRect:(struct CGRect)arg1 andNickeName:(id)arg2 from:(_Bool)arg3 andView:(id)arg4;
- (double)getVoicelength:(double)arg1;
- (id)getNickName;
- (id)splicingString:(id)arg1 otherString:(id)arg2;
- (void)tapHeadToDo:(id)arg1;
- (void)addRecognizerToHeadImageView:(id)arg1;
- (id)getLogoUrlWithUsename:(id)arg1;
- (void)addImageWithRect:(struct CGRect)arg1 andUsername:(id)arg2 andTag:(long long)arg3 andView:(id)arg4;
- (id)bubbleView:(id)arg1 from:(_Bool)arg2 withError:(id)arg3 withMessageType:(id)arg4 withSaveType:(id)arg5 withMessageKey:(id)arg6 withUsername:(id)arg7 withUrlTitle:(id)arg8 withVoiceRead:(id)arg9;
- (id)bubbleView:(id)arg1 from:(_Bool)arg2 withError:(id)arg3 withUsername:(id)arg4 withUrlinfoDic:(id)arg5;
- (void)chongFa:(id)arg1;
- (void)sendMassage:(id)arg1 withUUID:(id)arg2 withMessageType:(id)arg3 isChongfa:(_Bool)arg4 isWeizao:(_Bool)arg5;
- (void)sendMassage:(id)arg1 withUUID:(id)arg2 withMessageType:(id)arg3 isChongfa:(_Bool)arg4;
- (void)sendMassage:(id)arg1 withUUID:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sendFileWithArr:(id)arg1;
- (void)sendCardWithDic:(id)arg1;
- (void)didSelectVideo:(id)arg1;
- (void)inputButtonPressed:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (void)emojiViewChatTextSend;
- (void)emojiViewChatTextDelete;
- (void)emojiViewChatTextInput:(id)arg1;
- (void)callActionWithPhoneNumStr:(id)arg1;
- (void)sendEmail:(id)arg1;
- (void)mlEmojiLabel:(id)arg1 didSelectLink:(id)arg2 withType:(unsigned long long)arg3;
- (_Bool)longPressSelectedAtGroupMembersArrAddItemWithMemeber:(id)arg1;
- (void)longPressHeadPhotoToAtGroupMember:(id)arg1;
- (void)handleDraftWithStr:(id)arg1;
- (void)selectedAtGroupMembersArrAddItemWithMemeber:(id)arg1;
- (void)getAtSelectAtGroupMember:(id)arg1;
- (void)ChatAudioPlayerDidFinishSuccessfully:(_Bool)arg1;
- (void)ChatVoiceRecorderVCRecordFinish:(id)arg1 fileName:(id)arg2 fileSize:(int)arg3 fileDuration:(float)arg4;
- (void)updateMetersWithAvgPower:(float)arg1 remainderTime:(int)arg2;
- (void)changeVoiceInputStateToOver;
- (void)recordorPlayError:(id)arg1;
- (void)recordBtnLongPressed:(id)arg1;
- (void)dismissTimeAlert;
- (void)pressInputBtn:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)upPanGes:(id)arg1;
- (void)countTime;
- (void)dismissAniView:(id)arg1;
- (void)countDownDidFinish;
- (void)showCountLabel;
- (void)removeCountLable;
- (id)getVoiceInputBtn;
- (void)emojiInputViewToStartStatus:(_Bool)arg1 withMoreViewToStartStatus:(_Bool)arg2;
- (void)shoujianpan;
- (void)inputChangeBtnPress;
- (void)voiceChangeBtnPress:(id)arg1;
- (void)autoMovekeyBoard:(float)arg1 withTime:(double)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showMore:(id)arg1;
- (void)showEmoji:(id)arg1;
- (void)IMMoreButtonViewIndexButton:(id)arg1;
- (void)createMoreButtonViewAndEmojiView;
- (_Bool)checkChatGroupList;
- (void)gotoGroupDetailVC;
- (void)selfIsOrNotGroupmember:(id)arg1;
- (void)groupErr:(id)arg1;
- (void)checkSelfIsGroupMember;
- (void)refreshContactInformation:(id)arg1;
- (void)getUserInfo:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)clearLastChatVCNoNeedDataWhenEnter;
- (void)getMessageListFromDataBaseWithFetchLimit:(long long)arg1;
- (void)doneLoadingTableViewData;
- (void)reloadTableViewDataSource;
- (void)headRefreshing;
- (void)backForward;
- (void)jumpToChatDetail:(id)arg1;
- (void)callAction:(id)arg1;
- (void)createRightBarItem;
- (void)createLeftNavCancelItem;
- (void)createLeftNavBackItem;
- (void)getOnlineOrOfflineState:(id)arg1;
- (void)handlecurrChatCustomer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
