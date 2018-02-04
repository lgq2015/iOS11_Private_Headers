/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMSharedUtilitiesProtoCloudKitEncryptedParticipantChange : PBCodable <NSCopying> {
    struct { 
        unsigned int participantChangeType : 1; 
        unsigned int version : 1; 
    }  _has;
    NSString * _otherHandle;
    NSData * _padding;
    long long  _participantChangeType;
    unsigned int  _version;
}

@property (nonatomic, readonly) bool hasOtherHandle;
@property (nonatomic, readonly) bool hasPadding;
@property (nonatomic) bool hasParticipantChangeType;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *otherHandle;
@property (nonatomic, retain) NSData *padding;
@property (nonatomic) long long participantChangeType;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOtherHandle;
- (bool)hasPadding;
- (bool)hasParticipantChangeType;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)otherHandle;
- (id)padding;
- (long long)participantChangeType;
- (bool)readFrom:(id)arg1;
- (void)setHasParticipantChangeType:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setOtherHandle:(id)arg1;
- (void)setPadding:(id)arg1;
- (void)setParticipantChangeType:(long long)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
