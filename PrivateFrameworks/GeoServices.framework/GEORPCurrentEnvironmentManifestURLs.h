/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPCurrentEnvironmentManifestURLs : PBCodable <NSCopying> {
    NSString * _environmentDisplayName;
    NSString * _environmentReleaseName;
    NSMutableArray * _urls;
}

@property (nonatomic, retain) NSString *environmentDisplayName;
@property (nonatomic, retain) NSString *environmentReleaseName;
@property (nonatomic, readonly) bool hasEnvironmentDisplayName;
@property (nonatomic, readonly) bool hasEnvironmentReleaseName;
@property (nonatomic, retain) NSMutableArray *urls;

+ (Class)urlType;

- (void).cxx_destruct;
- (void)addUrl:(id)arg1;
- (void)clearUrls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)environmentDisplayName;
- (id)environmentReleaseName;
- (bool)hasEnvironmentDisplayName;
- (bool)hasEnvironmentReleaseName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnvironmentDisplayName:(id)arg1;
- (void)setEnvironmentReleaseName:(id)arg1;
- (void)setUrls:(id)arg1;
- (id)urlAtIndex:(unsigned long long)arg1;
- (id)urls;
- (unsigned long long)urlsCount;
- (void)writeTo:(id)arg1;

@end
