/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRPlaybackQueueCapabilitiesProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int requestByIdentifiers : 1; 
        unsigned int requestByRange : 1; 
        unsigned int requestByRequest : 1; 
    }  _has;
    bool  _requestByIdentifiers;
    bool  _requestByRange;
    bool  _requestByRequest;
}

@property (nonatomic) bool hasRequestByIdentifiers;
@property (nonatomic) bool hasRequestByRange;
@property (nonatomic) bool hasRequestByRequest;
@property (nonatomic) bool requestByIdentifiers;
@property (nonatomic) bool requestByRange;
@property (nonatomic) bool requestByRequest;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestByIdentifiers;
- (bool)hasRequestByRange;
- (bool)hasRequestByRequest;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)requestByIdentifiers;
- (bool)requestByRange;
- (bool)requestByRequest;
- (void)setHasRequestByIdentifiers:(bool)arg1;
- (void)setHasRequestByRange:(bool)arg1;
- (void)setHasRequestByRequest:(bool)arg1;
- (void)setRequestByIdentifiers:(bool)arg1;
- (void)setRequestByRange:(bool)arg1;
- (void)setRequestByRequest:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
