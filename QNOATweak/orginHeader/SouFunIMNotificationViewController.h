//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ChatVoiceRecorderVCDelegate.h"
#import "NSURLConnectionDataDelegate.h"
#import "TZImagePickerControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class ChatVoiceRecorderVC, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSTimer, SouFunIMNotificationViewFlowLayout, SouFunIMRecordAnimationView, UIActivityIndicatorView, UIButton, UICollectionView, UIImagePickerController, UILabel, UIScrollView, UISwitch, UITextField, UITextView, UIView;

@interface SouFunIMNotificationViewController : UIViewController <UIGestureRecognizerDelegate, ChatVoiceRecorderVCDelegate, UIAlertViewDelegate, UIScrollViewDelegate, UITextFieldDelegate, UITextViewDelegate, NSURLConnectionDataDelegate, TZImagePickerControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    UIScrollView *_backgroundScrollView;
    UIView *_reciverView;
    UIButton *_addReciverBtn;
    UIView *_reciverNamesView;
    UILabel *_reciverNameMoreLabel;
    UIView *_titleView;
    UITextField *_titleTextField;
    UIView *_mustReadView;
    UIView *_textAndVoiceChangeView;
    UIView *_textTongzhiContentView;
    UITextView *_textView;
    UILabel *_textViewPlacehoderLabel;
    UILabel *_textLengthCountLabel;
    UIView *_voiceTongzhiContentView;
    UIButton *_recordBtn;
    UILabel *_recordLabel;
    UIView *_playVoiceView;
    UIButton *_playButton;
    UIButton *_deleteButton;
    SouFunIMRecordAnimationView *_recordAnimationView;
    ChatVoiceRecorderVC *_chatVoiceRecorder;
    NSTimer *_recordTimer;
    NSTimer *_playTimer;
    UIActivityIndicatorView *_activityView;
    NSMutableArray *_selectedPhotos;
    NSMutableArray *_selectedAssets;
    _Bool _isSelectOriginalPhoto;
    double _itemWH;
    double _margin;
    SouFunIMNotificationViewFlowLayout *_layout;
    NSMutableArray *_pictureArr;
    long long currentUpLoadIndex;
    _Bool _isRecording;
    _Bool _isPlay;
    _Bool _isRequesting;
    _Bool _isTitleInputing;
    _Bool _isVoiceTongzhi;
    _Bool _isMove;
    double _MaxTime;
    double _playTime;
    NSString *_recordWavFilePath;
    NSString *_recordAmrFilePath;
    NSString *_recordFileName;
    double _recordFileDuration;
    NSString *_recordUrl;
    NSMutableArray *_receiversArr;
    NSString *_sendtoNamesStr;
    NSMutableDictionary *_sendIdDic;
    NSString *_noticeId;
    NSDate *_pressSendBtnDate;
    UIImagePickerController *_imagePickerVc;
    UICollectionView *_imageCollectionView;
    UILabel *_imageLabel;
    NSString *_message;
    UIButton *_sendButton;
    NSString *_linkJson;
    UISwitch *_pushSwitch;
    UIButton *_receiverBtn;
}

@property(retain, nonatomic) UIButton *receiverBtn; // @synthesize receiverBtn=_receiverBtn;
@property(retain, nonatomic) UISwitch *pushSwitch; // @synthesize pushSwitch=_pushSwitch;
@property(retain, nonatomic) NSString *linkJson; // @synthesize linkJson=_linkJson;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) UILabel *imageLabel; // @synthesize imageLabel=_imageLabel;
@property(retain, nonatomic) UICollectionView *imageCollectionView; // @synthesize imageCollectionView=_imageCollectionView;
@property(retain, nonatomic) UIImagePickerController *imagePickerVc; // @synthesize imagePickerVc=_imagePickerVc;
@property(nonatomic) _Bool isMove; // @synthesize isMove=_isMove;
@property(nonatomic) _Bool isVoiceTongzhi; // @synthesize isVoiceTongzhi=_isVoiceTongzhi;
@property(nonatomic) _Bool isTitleInputing; // @synthesize isTitleInputing=_isTitleInputing;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) NSDate *pressSendBtnDate; // @synthesize pressSendBtnDate=_pressSendBtnDate;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(retain, nonatomic) NSMutableDictionary *sendIdDic; // @synthesize sendIdDic=_sendIdDic;
@property(retain, nonatomic) NSString *sendtoNamesStr; // @synthesize sendtoNamesStr=_sendtoNamesStr;
@property(retain, nonatomic) NSMutableArray *receiversArr; // @synthesize receiversArr=_receiversArr;
@property(retain, nonatomic) NSString *recordUrl; // @synthesize recordUrl=_recordUrl;
@property(nonatomic) double recordFileDuration; // @synthesize recordFileDuration=_recordFileDuration;
@property(retain, nonatomic) NSString *recordFileName; // @synthesize recordFileName=_recordFileName;
@property(retain, nonatomic) NSString *recordAmrFilePath; // @synthesize recordAmrFilePath=_recordAmrFilePath;
@property(retain, nonatomic) NSString *recordWavFilePath; // @synthesize recordWavFilePath=_recordWavFilePath;
@property(nonatomic) double playTime; // @synthesize playTime=_playTime;
@property(nonatomic) _Bool isPlay; // @synthesize isPlay=_isPlay;
@property(nonatomic) double MaxTime; // @synthesize MaxTime=_MaxTime;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
- (void).cxx_destruct;
- (struct CGSize)calculateHeightAndWidth:(id)arg1 fontNumber:(float)arg2 maxHeight:(float)arg3 maxWidth:(float)arg4;
- (void)hideHudWithTitle:(id)arg1;
- (void)createActivityView;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)emojiRangeArrAddObjectWithArr:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)substringToIndexWithIndex:(unsigned long long)arg1 withStr:(id)arg2;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textFiledEditChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)timerCount;
- (void)recordBtnLongPressed:(id)arg1;
- (void)hiddenRecordAnimationView;
- (void)recordBtnPress:(id)arg1;
- (void)createvVoiceTongzhiContentView;
- (void)createTextTongzhiContentView;
- (void)changeNoticeType:(id)arg1;
- (void)createTextAndVoiceChangeView;
- (void)createTongzhiTitleView;
- (void)getNotiRightResultWithItem:(id)arg1;
- (void)gotoSelectTongZhiReceiverVC:(id)arg1;
- (void)createReceiverView;
- (void)backForword;
- (void)hideAndBack:(id)arg1;
- (void)hideAlertViewAuto:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)backForward;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tap:(id)arg1;
- (void)createTongZhiReadView;
- (void)createUI;
- (void)deleteRecord:(id)arg1;
- (void)updateMetersWithAvgPower:(float)arg1 remainderTime:(int)arg2;
- (void)recordorPlayError:(id)arg1;
- (void)playCountTime;
- (void)playRecord:(id)arg1;
- (void)creatPlayViewithLength:(id)arg1;
- (void)ChatVoiceRecorderVCRecordFinish:(id)arg1 fileName:(id)arg2 fileSize:(int)arg3 fileDuration:(float)arg4;
- (void)selectSendObjsWithArr:(id)arg1;
- (_Bool)checkInput;
- (void)updateNoticeConacts;
- (void)saveMessageboxDatabase:(id)arg1;
- (void)handleCustomMessageList;
- (void)saveTongzhiToCoreData;
- (void)sendNotiToIM:(id)arg1;
- (void)sendNoticeWithLink:(id)arg1;
- (void)sendNoti;
- (void)uploadNextPicture:(id)arg1;
- (void)sendNotification;
- (void)handleView;
- (void)deleteBtnClik:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingVideo:(id)arg2 sourceAssets:(id)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingPhotos:(id)arg2 sourceAssets:(id)arg3 isSelectOriginalPhoto:(_Bool)arg4;
- (void)showAlertWithTitle:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)takePhoto;
- (void)pushImagePickerController;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configCollectionView;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

