//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSData, NSDictionary, NSString, SouFunIMChatQiPaoView, SouFunUploadPicture, UIImageView, UIViewController;

@interface SouFunIMUpLoadImageView : UIView
{
    UIImageView *imageView;
    UIViewController *parentController;
    NSString *messageID;
    NSString *messageUUID;
    NSDictionary *duiHuaZheDict;
    _Bool isSuccessedUpLoad;
    id <SouFunUpLoadImageViewDelegate> delegate;
    SouFunUploadPicture *upload;
    _Bool _isGroupChat;
    NSString *groupID;
    NSData *_uploadImageData;
    SouFunIMChatQiPaoView *_parentQiPaoView;
}

@property(retain, nonatomic) SouFunIMChatQiPaoView *parentQiPaoView; // @synthesize parentQiPaoView=_parentQiPaoView;
@property(nonatomic) _Bool isGroupChat; // @synthesize isGroupChat=_isGroupChat;
@property(retain, nonatomic) NSData *uploadImageData; // @synthesize uploadImageData=_uploadImageData;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID;
@property(retain, nonatomic) SouFunUploadPicture *upload; // @synthesize upload;
@property(nonatomic) __weak id <SouFunUpLoadImageViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool isSuccessedUpLoad; // @synthesize isSuccessedUpLoad;
@property(retain, nonatomic) NSDictionary *duiHuaZheDict; // @synthesize duiHuaZheDict;
@property(retain, nonatomic) NSString *messageUUID; // @synthesize messageUUID;
@property(retain, nonatomic) NSString *messageID; // @synthesize messageID;
@property(nonatomic) __weak UIViewController *parentController; // @synthesize parentController;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView;
- (void).cxx_destruct;
- (void)UploadNotifictionWithURLString:(id)arg1 response:(id)arg2 andWidth:(id)arg3 andHeight:(id)arg4 error:(id)arg5;
- (void)setGroupImage:(id)arg1;
- (void)editGroupImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleTouch;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAndUpLoadImage:(id)arg1;
- (void)upLoadPictureRequestWithImage:(id)arg1;
- (void)funUploadNotifictionWithURLString:(id)arg1 response:(id)arg2 andWidth:(id)arg3 andHeight:(id)arg4 error:(id)arg5;
- (void)setUploadFileRequest:(id)arg1 andWidth:(id)arg2 andHeight:(id)arg3;

@end

