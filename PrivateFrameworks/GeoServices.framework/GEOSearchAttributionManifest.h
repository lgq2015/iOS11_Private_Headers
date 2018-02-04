/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttributionManifest : PBCodable <NSCopying> {
    NSMutableArray * _actionComponentMapEntries;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSMutableArray * _searchAttributionSources;
    NSString * _sourceURL;
    double  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *actionComponentMapEntries;
@property (nonatomic, readonly) bool hasSourceURL;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *searchAttributionSources;
@property (nonatomic, retain) NSString *sourceURL;
@property (nonatomic) double timestamp;

+ (Class)actionComponentMapEntriesType;
+ (Class)searchAttributionSourcesType;

- (void).cxx_destruct;
- (id)actionComponentMapEntries;
- (id)actionComponentMapEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionComponentMapEntriesCount;
- (void)addActionComponentMapEntries:(id)arg1;
- (void)addSearchAttributionSources:(id)arg1;
- (void)clearActionComponentMapEntries;
- (void)clearSearchAttributionSources;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSourceURL;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchAttributionSources;
- (id)searchAttributionSourcesAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchAttributionSourcesCount;
- (void)setActionComponentMapEntries:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSearchAttributionSources:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)sourceURL;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
