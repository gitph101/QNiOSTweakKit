//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DIDBUserAvatar : NSObject
{
}

- (_Bool)invalidateAvatar:(id)arg1;
- (id)findByUserId:(id)arg1;
- (id)findAll;
- (id)queryAvatars:(id)arg1 args:(id)arg2;
- (_Bool)destroyWithUserId:(id)arg1;
- (_Bool)destroy:(id)arg1;
- (_Bool)save:(id)arg1;
- (id)sqlParametersDictionaryOfAvatar:(id)arg1;
- (_Bool)isUserIdExist:(id)arg1;

@end
