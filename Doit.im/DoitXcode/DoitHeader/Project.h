//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DIObject.h"

@class NSArray, NSDate, NSString;

@interface Project : DIObject
{
    _Bool _activeNotice;
    _Bool _hasKVObserver;
    int _status;
    NSString *_title;
    NSString *_notes;
    NSString *_fromTask;
    NSString *_repeatNo;
    NSString *_groupBy;
    NSDate *_startAt;
    NSDate *_endAt;
    NSString *_contextId;
    NSString *_contextTitle;
    NSString *_goalId;
    NSString *_goalTitle;
    long long _priority;
    NSString *_comparableGroupName;
    NSString *_comparableSubgroupName;
    long long _contextPosition;
    NSArray *_localAttachments;
    NSString *_localAttachmentsJsonString;
    NSArray *_medias;
}

@property(retain, nonatomic) NSArray *medias; // @synthesize medias=_medias;
@property(retain, nonatomic) NSString *localAttachmentsJsonString; // @synthesize localAttachmentsJsonString=_localAttachmentsJsonString;
@property(retain, nonatomic) NSArray *localAttachments; // @synthesize localAttachments=_localAttachments;
@property(nonatomic) _Bool hasKVObserver; // @synthesize hasKVObserver=_hasKVObserver;
@property(nonatomic) long long contextPosition; // @synthesize contextPosition=_contextPosition;
@property(copy, nonatomic) NSString *comparableSubgroupName; // @synthesize comparableSubgroupName=_comparableSubgroupName;
@property(copy, nonatomic) NSString *comparableGroupName; // @synthesize comparableGroupName=_comparableGroupName;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool activeNotice; // @synthesize activeNotice=_activeNotice;
@property(retain, nonatomic) NSString *goalTitle; // @synthesize goalTitle=_goalTitle;
@property(retain, nonatomic) NSString *goalId; // @synthesize goalId=_goalId;
@property(retain, nonatomic) NSString *contextTitle; // @synthesize contextTitle=_contextTitle;
@property(retain, nonatomic) NSString *contextId; // @synthesize contextId=_contextId;
@property(retain, nonatomic) NSDate *endAt; // @synthesize endAt=_endAt;
@property(retain, nonatomic) NSDate *startAt; // @synthesize startAt=_startAt;
@property(retain, nonatomic) NSString *groupBy; // @synthesize groupBy=_groupBy;
@property(retain, nonatomic) NSString *repeatNo; // @synthesize repeatNo=_repeatNo;
@property(retain, nonatomic) NSString *fromTask; // @synthesize fromTask=_fromTask;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeSelfObservers;
- (void)addSelfObservers;
- (void)startAtUpdated:(id)arg1 current:(id)arg2;
- (void)updateEndAfterStart;
- (void)adjustAfterMove;
- (void)updatelocalAttachmentsJsonString;
- (void)reloadPosition;
- (int)getBoxType:(_Bool)arg1;
- (_Bool)canDeactivate;
- (_Bool)canActivate;
- (_Bool)isActive;
- (id)toDictionary;
- (id)initWithDictionay:(id)arg1;
- (id)init;
- (void)initDefaultValue;
- (_Bool)isMatchObj:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) int comparableRepeater;
@property(readonly, nonatomic) NSDate *comparableUpdated;
@property(readonly, nonatomic) NSString *comparableStatus;
@property(readonly, nonatomic) NSDate *comparableEndAt;
@property(readonly, nonatomic) NSDate *comparableStartAt;
- (_Bool)isProject;
- (_Bool)isBelongTo:(id)arg1;
- (_Bool)isEditable;

@end

