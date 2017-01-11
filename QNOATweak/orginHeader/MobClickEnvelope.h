//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, UMEnvelope;

@interface MobClickEnvelope : NSObject
{
    NSData *_identityMD5;
    char *_entityMD5;
    NSString *_signatureString;
    NSString *_guidString;
    NSString *_checksum;
    NSString *_version;
    NSString *_address;
    int _timestamp;
    int _serialNum;
    int _length;
    UMEnvelope *_enveloper;
    NSData *_signature;
    NSData *_guid;
    NSData *_envelopeData;
}

+ (id)sharedInstance;
@property(nonatomic) int length; // @synthesize length=_length;
@property(nonatomic) int serialNum; // @synthesize serialNum=_serialNum;
@property(nonatomic) int timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSData *envelopeData; // @synthesize envelopeData=_envelopeData;
@property(nonatomic) char *entityMD5; // @synthesize entityMD5=_entityMD5;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property(retain, nonatomic) NSData *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSData *identityMD5; // @synthesize identityMD5=_identityMD5;
- (void)dealloc;
- (id)makeEnvelopeData;
- (_Bool)verifyChecksum;
- (_Bool)verifyTimestamp;
- (void)buildSerialNum;
- (id)toDataWithEntity:(id)arg1;
- (void)generateChecksum;
- (void)printBytes:(char *)arg1 length:(int)arg2;
- (id)mergeEntityAndIdentity;
- (void)setSignatureWithData:(id)arg1;
- (void)buildGUIDWithData:(unsigned char [32])arg1;
- (void)buildGUIDWithSignature:(unsigned char [32])arg1;
- (void)buildIdentity;
- (void)fetchSignature;
- (id)init;

@end

