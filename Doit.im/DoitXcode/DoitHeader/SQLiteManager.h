//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabase, NSString;

@interface SQLiteManager : NSObject
{
    NSString *_databaseFilepath;
    FMDatabase *_dbInstance;
}

+ (id)sqlForUpdateOfTaskWithTablename:(id)arg1 parametersDictionary:(id)arg2 identifierKey:(id)arg3 isRepeatInstance:(_Bool)arg4;
+ (id)sqlForUpdateOfTable:(id)arg1 parametersDictionary:(id)arg2 identifierKey:(id)arg3;
+ (id)sqlForInsertOfTable:(id)arg1 parametersDictionary:(id)arg2;
+ (long long)countWithSql:(id)arg1 parameters:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) FMDatabase *dbInstance; // @synthesize dbInstance=_dbInstance;
@property(retain, nonatomic) NSString *databaseFilepath; // @synthesize databaseFilepath=_databaseFilepath;
- (void).cxx_destruct;
- (_Bool)databaseAddAndNotifiyColumn:(id)arg1 type:(id)arg2 toTable:(id)arg3;
- (_Bool)databaseAddColumn:(id)arg1 type:(id)arg2 toTable:(id)arg3;
- (_Bool)databaseHasColumn:(id)arg1 inTable:(id)arg2;
- (unsigned long long)rowCountInTable:(id)arg1;
- (id)db;
- (void)reset;

@end
