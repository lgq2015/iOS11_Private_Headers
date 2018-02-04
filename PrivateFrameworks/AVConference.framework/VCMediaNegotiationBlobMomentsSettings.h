/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiationBlobMomentsSettings : PBCodable <NSCopying> {
    unsigned int  _capabilities;
}

@property (nonatomic) unsigned int capabilities;

- (unsigned int)capabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCapabilities:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
