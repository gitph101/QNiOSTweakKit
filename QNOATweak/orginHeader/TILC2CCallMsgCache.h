//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TILC2CCallMsgCache : NSObject
{
    struct set<TIMMessage *, TILC2CMsgCompare, std::__1::allocator<TIMMessage *>> _cache;
    struct mutex _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)resizeCache:(unsigned int)arg1;
- (unsigned int)getMsgCount;
- (id)getMessages:(id)arg1 count:(unsigned int)arg2;
- (_Bool)addMsg:(id)arg1;

@end

