/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoAudioFilePlayerItem : PBCodable <NSCopying> {
    SPProtoObjectMessage * _destroy;
    SPProtoObjectMessage * _getCurrentTime;
    SPProtoObjectMessage * _notifyDidPlayToEndTime;
    SPProtoObjectMessage * _notifyFailedToPlayToEndTime;
    SPProtoObjectMessage * _notifyTimeJumped;
    SPProtoAudioFilePlayerItemSetCurrentTime * _setItemCurrentTime;
    SPProtoAudioFilePlayerStatus * _setStatus;
    SPProtoAudioFilePlayerUpdateContainedIdentifier * _upsertWithAsset;
}

@property (nonatomic, retain) SPProtoObjectMessage *destroy;
@property (nonatomic, retain) SPProtoObjectMessage *getCurrentTime;
@property (nonatomic, readonly) bool hasDestroy;
@property (nonatomic, readonly) bool hasGetCurrentTime;
@property (nonatomic, readonly) bool hasNotifyDidPlayToEndTime;
@property (nonatomic, readonly) bool hasNotifyFailedToPlayToEndTime;
@property (nonatomic, readonly) bool hasNotifyTimeJumped;
@property (nonatomic, readonly) bool hasSetItemCurrentTime;
@property (nonatomic, readonly) bool hasSetStatus;
@property (nonatomic, readonly) bool hasUpsertWithAsset;
@property (nonatomic, retain) SPProtoObjectMessage *notifyDidPlayToEndTime;
@property (nonatomic, retain) SPProtoObjectMessage *notifyFailedToPlayToEndTime;
@property (nonatomic, retain) SPProtoObjectMessage *notifyTimeJumped;
@property (nonatomic, retain) SPProtoAudioFilePlayerItemSetCurrentTime *setItemCurrentTime;
@property (nonatomic, retain) SPProtoAudioFilePlayerStatus *setStatus;
@property (nonatomic, retain) SPProtoAudioFilePlayerUpdateContainedIdentifier *upsertWithAsset;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destroy;
- (id)dictionaryRepresentation;
- (id)getCurrentTime;
- (bool)hasDestroy;
- (bool)hasGetCurrentTime;
- (bool)hasNotifyDidPlayToEndTime;
- (bool)hasNotifyFailedToPlayToEndTime;
- (bool)hasNotifyTimeJumped;
- (bool)hasSetItemCurrentTime;
- (bool)hasSetStatus;
- (bool)hasUpsertWithAsset;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notifyDidPlayToEndTime;
- (id)notifyFailedToPlayToEndTime;
- (id)notifyTimeJumped;
- (bool)readFrom:(id)arg1;
- (void)setDestroy:(id)arg1;
- (void)setGetCurrentTime:(id)arg1;
- (id)setItemCurrentTime;
- (void)setNotifyDidPlayToEndTime:(id)arg1;
- (void)setNotifyFailedToPlayToEndTime:(id)arg1;
- (void)setNotifyTimeJumped:(id)arg1;
- (void)setSetItemCurrentTime:(id)arg1;
- (void)setSetStatus:(id)arg1;
- (id)setStatus;
- (void)setUpsertWithAsset:(id)arg1;
- (id)sockPuppetMessage;
- (id)upsertWithAsset;
- (void)writeTo:(id)arg1;

@end
