/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthWrapCodableMessageHeader : PBCodable <NSCopying> {
    bool  _compressed;
    NSData * _encryptedHMACKey;
    NSData * _encryptedMessageKey;
    NSData * _encryptionIdentity;
    struct { 
        unsigned int version : 1; 
        unsigned int trailingHMACLength : 1; 
        unsigned int trailingSHALength : 1; 
        unsigned int compressed : 1; 
    }  _has;
    NSString * _studyIdentifier;
    NSData * _studyUUID;
    int  _trailingHMACLength;
    int  _trailingSHALength;
    NSData * _uploadUUID;
    long long  _version;
}

@property (nonatomic) bool compressed;
@property (nonatomic, retain) NSData *encryptedHMACKey;
@property (nonatomic, retain) NSData *encryptedMessageKey;
@property (nonatomic, retain) NSData *encryptionIdentity;
@property (nonatomic) bool hasCompressed;
@property (nonatomic, readonly) bool hasEncryptedHMACKey;
@property (nonatomic, readonly) bool hasEncryptedMessageKey;
@property (nonatomic, readonly) bool hasEncryptionIdentity;
@property (nonatomic, readonly) bool hasStudyIdentifier;
@property (nonatomic, readonly) bool hasStudyUUID;
@property (nonatomic) bool hasTrailingHMACLength;
@property (nonatomic) bool hasTrailingSHALength;
@property (nonatomic, readonly) bool hasUploadUUID;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *studyIdentifier;
@property (nonatomic, retain) NSData *studyUUID;
@property (nonatomic) int trailingHMACLength;
@property (nonatomic) int trailingSHALength;
@property (nonatomic, retain) NSData *uploadUUID;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (bool)compressed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedHMACKey;
- (id)encryptedMessageKey;
- (id)encryptionIdentity;
- (bool)hasCompressed;
- (bool)hasEncryptedHMACKey;
- (bool)hasEncryptedMessageKey;
- (bool)hasEncryptionIdentity;
- (bool)hasStudyIdentifier;
- (bool)hasStudyUUID;
- (bool)hasTrailingHMACLength;
- (bool)hasTrailingSHALength;
- (bool)hasUploadUUID;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setEncryptedHMACKey:(id)arg1;
- (void)setEncryptedMessageKey:(id)arg1;
- (void)setEncryptionIdentity:(id)arg1;
- (void)setHasCompressed:(bool)arg1;
- (void)setHasTrailingHMACLength:(bool)arg1;
- (void)setHasTrailingSHALength:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setStudyIdentifier:(id)arg1;
- (void)setStudyUUID:(id)arg1;
- (void)setTrailingHMACLength:(int)arg1;
- (void)setTrailingSHALength:(int)arg1;
- (void)setUploadUUID:(id)arg1;
- (void)setVersion:(long long)arg1;
- (id)studyIdentifier;
- (id)studyUUID;
- (int)trailingHMACLength;
- (int)trailingSHALength;
- (id)uploadUUID;
- (long long)version;
- (void)writeTo:(id)arg1;

@end
