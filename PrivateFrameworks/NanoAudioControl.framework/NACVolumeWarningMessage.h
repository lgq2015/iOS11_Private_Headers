/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACVolumeWarningMessage : PBCodable <NSCopying> {
    NSString * _category;
    struct { 
        unsigned int volumeWarningEnabled : 1; 
    }  _has;
    bool  _volumeWarningEnabled;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic) bool hasVolumeWarningEnabled;
@property (nonatomic) bool volumeWarningEnabled;

- (void).cxx_destruct;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (bool)hasVolumeWarningEnabled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setHasVolumeWarningEnabled:(bool)arg1;
- (void)setVolumeWarningEnabled:(bool)arg1;
- (bool)volumeWarningEnabled;
- (void)writeTo:(id)arg1;

@end
