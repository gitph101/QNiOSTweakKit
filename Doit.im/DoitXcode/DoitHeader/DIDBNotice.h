//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DIDBNotice : NSObject
{
}

+ (_Bool)validateNotice:(id)arg1;
+ (id)bodyContentsFromJson:(id)arg1;
- (id)findWithUnread;
- (long long)countOfUnreadNotice;
- (id)findAllAfter:(id)arg1 forcePopup:(_Bool)arg2;
- (id)findUnreadAfterUSN:(unsigned long long)arg1 forcePopup:(_Bool)arg2;
- (id)findWithMaxCount:(long long)arg1;
- (id)findById:(id)arg1;
- (void)localFormat:(id)arg1;
- (id)queryNotices:(id)arg1 args:(id)arg2;
- (id)jsonStringForContents:(id)arg1;
- (_Bool)destroy:(id)arg1;
- (_Bool)save:(id)arg1 fromServer:(_Bool)arg2;
- (_Bool)deleteNotice:(id)arg1;
- (_Bool)updateReadStatus:(id)arg1;
- (_Bool)updateContactApplicationResult:(id)arg1;
- (_Bool)isIdExist:(id)arg1;
- (id)sqlParametersDictionaryOfNotice:(id)arg1 fromServer:(_Bool)arg2;

@end

