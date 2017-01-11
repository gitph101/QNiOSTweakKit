//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface ENPreferencesStore : NSObject
{
    NSString *_pathname;
    NSMutableDictionary *_store;
}

+ (id)pathnameForStoreFilename:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *store; // @synthesize store=_store;
@property(retain, nonatomic) NSString *pathname; // @synthesize pathname=_pathname;
- (void).cxx_destruct;
- (void)load;
- (void)removeAllItems;
- (void)save;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)decodedObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)init;
- (id)initWithStoreFilename:(id)arg1;

@end

