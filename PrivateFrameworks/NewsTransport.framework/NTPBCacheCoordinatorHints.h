/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBCacheCoordinatorHints : PBCodable <FCKeyValueStoreCoding, NSCopying> {
    NSMutableArray * _cacheHints;
    struct { 
        unsigned int version : 1; 
    }  _has;
    long long  _version;
}

@property (nonatomic, retain) NSMutableArray *cacheHints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long version;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)cacheHintsType;

- (void)addCacheHints:(id)arg1;
- (id)cacheHints;
- (id)cacheHintsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cacheHintsCount;
- (void)clearCacheHints;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCacheHints:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (void)writeToKeyValuePair:(id)arg1;

@end
