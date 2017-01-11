//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GSUserInfo : NSObject
{
    _Bool _hasMicrophone;
    _Bool _hasCamera;
    _Bool _isMicrophoneOpen;
    _Bool _isMicrophoneMute;
    _Bool _isCameraOpen;
    _Bool _isVideoActivated;
    _Bool _isHandup;
    _Bool _isChatForbidden;
    _Bool _isOrganizer;
    _Bool _isPresentor;
    _Bool _isAttendee;
    unsigned int _status;
    long long _userID;
    NSString *_userName;
    long long _role;
    long long _userType;
}

@property(nonatomic) _Bool isAttendee; // @synthesize isAttendee=_isAttendee;
@property(nonatomic) _Bool isPresentor; // @synthesize isPresentor=_isPresentor;
@property(nonatomic) _Bool isOrganizer; // @synthesize isOrganizer=_isOrganizer;
@property(nonatomic) _Bool isChatForbidden; // @synthesize isChatForbidden=_isChatForbidden;
@property(nonatomic) _Bool isHandup; // @synthesize isHandup=_isHandup;
@property(nonatomic) _Bool isVideoActivated; // @synthesize isVideoActivated=_isVideoActivated;
@property(nonatomic) _Bool isCameraOpen; // @synthesize isCameraOpen=_isCameraOpen;
@property(nonatomic) _Bool isMicrophoneMute; // @synthesize isMicrophoneMute=_isMicrophoneMute;
@property(nonatomic) _Bool isMicrophoneOpen; // @synthesize isMicrophoneOpen=_isMicrophoneOpen;
@property(nonatomic) _Bool hasCamera; // @synthesize hasCamera=_hasCamera;
@property(nonatomic) _Bool hasMicrophone; // @synthesize hasMicrophone=_hasMicrophone;
@property(nonatomic) long long userType; // @synthesize userType=_userType;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) long long userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)init;

@end
