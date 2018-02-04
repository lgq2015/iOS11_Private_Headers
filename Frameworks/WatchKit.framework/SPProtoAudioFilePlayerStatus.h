/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoAudioFilePlayerStatus : PBCodable <NSCopying> {
    long long  _errorCode;
    NSData * _errorDict;
    NSString * _errorDomain;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int status : 1; 
    }  _has;
    NSString * _identifier;
    int  _status;
}

@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSData *errorDict;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDict;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDict;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDict;
- (bool)hasErrorDomain;
- (bool)hasIdentifier;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDict:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStatus:(int)arg1;
- (id)sockPuppetMessageForPlayerItemSetStatus;
- (id)sockPuppetMessageForQueuePlayerSetStatus;
- (int)status;
- (void)writeTo:(id)arg1;

@end
