//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DIDBTaskComment : NSObject
{
}

+ (id)findTaskComment:(id)arg1 inDB1_0:(id)arg2;
- (id)findById:(id)arg1;
- (id)findByTaskId:(id)arg1 andRepeatNo:(id)arg2;
- (id)queryComments:(id)arg1 args:(id)arg2;
- (_Bool)destroy:(id)arg1;
- (_Bool)save:(id)arg1 fromServer:(_Bool)arg2;
- (_Bool)isIdExist:(id)arg1;
- (id)sqlParametersDictionaryOfComment:(id)arg1 fromServer:(_Bool)arg2;

@end

