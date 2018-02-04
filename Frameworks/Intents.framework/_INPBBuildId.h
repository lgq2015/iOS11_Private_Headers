/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBBuildId : PBCodable <NSCopying> {
    NSString * _buildNumber;
    PBUnknownFields * _unknownFields;
    NSString * _versionNumber;
}

@property (nonatomic, retain) NSString *buildNumber;
@property (nonatomic, readonly) bool hasBuildNumber;
@property (nonatomic, readonly) bool hasVersionNumber;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *versionNumber;

- (void).cxx_destruct;
- (id)buildNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBuildNumber;
- (bool)hasVersionNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuildNumber:(id)arg1;
- (void)setVersionNumber:(id)arg1;
- (id)unknownFields;
- (id)versionNumber;
- (void)writeTo:(id)arg1;

@end
