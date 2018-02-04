/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSSendTextMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    int  _sessionIdentifier;
    NSString * _text;
}

@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic) int sessionIdentifier;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionIdentifier;
- (bool)hasText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)writeTo:(id)arg1;

@end
