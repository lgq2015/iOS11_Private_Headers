/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBUrlMappingMiss : PBCodable <NSCopying> {
    NSString * _host;
    NSMutableArray * _paths;
    NSString * _url;
}

@property (nonatomic, readonly) bool hasHost;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic, retain) NSString *host;
@property (nonatomic, retain) NSMutableArray *paths;
@property (nonatomic, retain) NSString *url;

+ (Class)pathsType;

- (void).cxx_destruct;
- (void)addPaths:(id)arg1;
- (void)clearPaths;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHost;
- (bool)hasUrl;
- (unsigned long long)hash;
- (id)host;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paths;
- (id)pathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pathsCount;
- (bool)readFrom:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setPaths:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)writeTo:(id)arg1;

@end
