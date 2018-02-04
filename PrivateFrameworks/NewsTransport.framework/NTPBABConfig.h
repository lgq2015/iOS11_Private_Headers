/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBABConfig : PBCodable <NSCopying> {
    NSMutableArray * _configBuckets;
    NTPBConfig * _configControl;
    struct { 
        unsigned int populationCeiling : 1; 
        unsigned int populationFloor : 1; 
    }  _has;
    long long  _populationCeiling;
    long long  _populationFloor;
}

@property (nonatomic, retain) NSMutableArray *configBuckets;
@property (nonatomic, retain) NTPBConfig *configControl;
@property (nonatomic, readonly) bool hasConfigControl;
@property (nonatomic) bool hasPopulationCeiling;
@property (nonatomic) bool hasPopulationFloor;
@property (nonatomic) long long populationCeiling;
@property (nonatomic) long long populationFloor;

+ (Class)configBucketsType;

- (void).cxx_destruct;
- (void)addConfigBuckets:(id)arg1;
- (void)clearConfigBuckets;
- (id)configBuckets;
- (id)configBucketsAtIndex:(unsigned long long)arg1;
- (unsigned long long)configBucketsCount;
- (id)configControl;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfigControl;
- (bool)hasPopulationCeiling;
- (bool)hasPopulationFloor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)populationCeiling;
- (long long)populationFloor;
- (bool)readFrom:(id)arg1;
- (void)setConfigBuckets:(id)arg1;
- (void)setConfigControl:(id)arg1;
- (void)setHasPopulationCeiling:(bool)arg1;
- (void)setHasPopulationFloor:(bool)arg1;
- (void)setPopulationCeiling:(long long)arg1;
- (void)setPopulationFloor:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
