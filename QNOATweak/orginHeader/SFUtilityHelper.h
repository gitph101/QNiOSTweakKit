//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SFUtilityHelper : NSObject
{
}

+ (void)uploadeDataBaseMessageSuccess:(CDUnknownBlockType)arg1 Failure:(CDUnknownBlockType)arg2;
+ (void)uploadeSaveMessageSuccess:(CDUnknownBlockType)arg1 Failure:(CDUnknownBlockType)arg2;
+ (void)cleanSaveMessageTxtSuccess:(CDUnknownBlockType)arg1 Failure:(CDUnknownBlockType)arg2;
+ (void)saveMessageWithString:(id)arg1;
+ (id)transferUrlParaToDicttionaryWithUrlStr:(id)arg1;
+ (id)exchangeToDictionaryWithInputJsonData:(id)arg1;
+ (id)encrypt:(id)arg1 encryptOrDecrypt:(unsigned int)arg2 key:(id)arg3 andiv:(id)arg4;
+ (id)DESdecryptWithText:(id)arg1;
+ (id)DESencryptKey:(id)arg1 andIV:(id)arg2 WithText:(id)arg3;
+ (id)dictionaryWithJsonString:(id)arg1;
+ (id)dataToJsonString:(id)arg1;
+ (id)getTimeDateWithResponseStr:(id)arg1;
+ (id)getLocalDeviceTimeStr;
+ (_Bool)validateValidityOfText:(id)arg1 regularExpressionStr:(id)arg2;
+ (id)getUTF8StringWithText:(id)arg1;
+ (id)getUrlSuggfixWithStr:(id)arg1;
+ (id)isLoginForChat;
+ (id)colorWithHexString:(id)arg1;

@end

