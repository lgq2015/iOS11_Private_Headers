/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAppBundleInfo : PBCodable <NSCopying> {
    _INPBAppId * _appId;
    _INPBBuildId * _buildId;
    NSMutableArray * _intentSupports;
    NSMutableArray * _localizedProjects;
    NSMutableArray * _supportedPlatforms;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBAppId *appId;
@property (nonatomic, retain) _INPBBuildId *buildId;
@property (nonatomic, readonly) bool hasAppId;
@property (nonatomic, readonly) bool hasBuildId;
@property (nonatomic, retain) NSMutableArray *intentSupports;
@property (nonatomic, retain) NSMutableArray *localizedProjects;
@property (nonatomic, retain) NSMutableArray *supportedPlatforms;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)intentSupportType;
+ (Class)localizedProjectsType;
+ (Class)supportedPlatformsType;

- (void).cxx_destruct;
- (void)addIntentSupport:(id)arg1;
- (void)addLocalizedProjects:(id)arg1;
- (void)addSupportedPlatforms:(id)arg1;
- (id)appId;
- (id)buildId;
- (void)clearIntentSupports;
- (void)clearLocalizedProjects;
- (void)clearSupportedPlatforms;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppId;
- (bool)hasBuildId;
- (unsigned long long)hash;
- (id)intentSupportAtIndex:(unsigned long long)arg1;
- (id)intentSupports;
- (unsigned long long)intentSupportsCount;
- (bool)isEqual:(id)arg1;
- (id)localizedProjects;
- (id)localizedProjectsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedProjectsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppId:(id)arg1;
- (void)setBuildId:(id)arg1;
- (void)setIntentSupports:(id)arg1;
- (void)setLocalizedProjects:(id)arg1;
- (void)setSupportedPlatforms:(id)arg1;
- (id)supportedPlatforms;
- (id)supportedPlatformsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedPlatformsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
