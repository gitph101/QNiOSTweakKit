//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "UMTBase.h"

@class NSMutableArray, NSString, UMTActivateMsg, UMTActiveUser, UMTAppInfo, UMTClientStats, UMTControlPolicy, UMTDeviceInfo, UMTIdTracking, UMTImprint, UMTMiscInfo;

@interface UMTUALogEntry : NSObject <UMTBase, NSCoding>
{
    UMTClientStats *__client_stats;
    UMTAppInfo *__app_info;
    UMTDeviceInfo *__device_info;
    UMTMiscInfo *__misc_info;
    UMTActivateMsg *__activate_msg;
    NSMutableArray *__instant_msgs;
    NSMutableArray *__sessions;
    UMTImprint *__imprint;
    UMTIdTracking *__id_tracking;
    UMTActiveUser *__active_user;
    UMTControlPolicy *__control_policy;
    _Bool __client_stats_isset;
    _Bool __app_info_isset;
    _Bool __device_info_isset;
    _Bool __misc_info_isset;
    _Bool __activate_msg_isset;
    _Bool __instant_msgs_isset;
    _Bool __sessions_isset;
    _Bool __imprint_isset;
    _Bool __id_tracking_isset;
    _Bool __active_user_isset;
    _Bool __control_policy_isset;
}

@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetControl_policy;
- (_Bool)control_policyIsSet;
@property(retain, nonatomic, getter=control_policy, setter=setControl_policy:) UMTControlPolicy *control_policy;
- (void)unsetActive_user;
- (_Bool)active_userIsSet;
@property(retain, nonatomic, getter=active_user, setter=setActive_user:) UMTActiveUser *active_user;
- (void)unsetId_tracking;
- (_Bool)id_trackingIsSet;
@property(retain, nonatomic, getter=id_tracking, setter=setId_tracking:) UMTIdTracking *id_tracking;
- (void)unsetImprint;
- (_Bool)imprintIsSet;
@property(retain, nonatomic, getter=imprint, setter=setImprint:) UMTImprint *imprint;
- (void)unsetSessions;
- (_Bool)sessionsIsSet;
@property(retain, nonatomic, getter=sessions, setter=setSessions:) NSMutableArray *sessions;
- (void)unsetInstant_msgs;
- (_Bool)instant_msgsIsSet;
@property(retain, nonatomic, getter=instant_msgs, setter=setInstant_msgs:) NSMutableArray *instant_msgs;
- (void)unsetActivate_msg;
- (_Bool)activate_msgIsSet;
@property(retain, nonatomic, getter=activate_msg, setter=setActivate_msg:) UMTActivateMsg *activate_msg;
- (void)unsetMisc_info;
- (_Bool)misc_infoIsSet;
@property(retain, nonatomic, getter=misc_info, setter=setMisc_info:) UMTMiscInfo *misc_info;
- (void)unsetDevice_info;
- (_Bool)device_infoIsSet;
@property(retain, nonatomic, getter=device_info, setter=setDevice_info:) UMTDeviceInfo *device_info;
- (void)unsetApp_info;
- (_Bool)app_infoIsSet;
@property(retain, nonatomic, getter=app_info, setter=setApp_info:) UMTAppInfo *app_info;
- (void)unsetClient_stats;
- (_Bool)client_statsIsSet;
@property(retain, nonatomic, getter=client_stats, setter=setClient_stats:) UMTClientStats *client_stats;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClient_stats:(id)arg1 app_info:(id)arg2 device_info:(id)arg3 misc_info:(id)arg4 activate_msg:(id)arg5 instant_msgs:(id)arg6 sessions:(id)arg7 imprint:(id)arg8 id_tracking:(id)arg9 active_user:(id)arg10 control_policy:(id)arg11;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

