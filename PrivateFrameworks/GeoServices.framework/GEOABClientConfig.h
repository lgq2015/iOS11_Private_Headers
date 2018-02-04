/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABClientConfig : PBCodable <NSCopying> {
    NSString * _assignedAbBranchId;
    NSMutableArray * _configKeyValues;
    NSMutableArray * _debugExperimentBranchs;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *assignedAbBranchId;
@property (nonatomic, retain) NSMutableArray *configKeyValues;
@property (nonatomic, retain) NSMutableArray *debugExperimentBranchs;
@property (nonatomic, readonly) bool hasAssignedAbBranchId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)configKeyValueType;
+ (Class)debugExperimentBranchType;

- (void).cxx_destruct;
- (void)addConfigKeyValue:(id)arg1;
- (void)addDebugExperimentBranch:(id)arg1;
- (id)assignedAbBranchId;
- (void)clearConfigKeyValues;
- (void)clearDebugExperimentBranchs;
- (id)configKeyValueAtIndex:(unsigned long long)arg1;
- (id)configKeyValues;
- (unsigned long long)configKeyValuesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugExperimentBranchAtIndex:(unsigned long long)arg1;
- (id)debugExperimentBranchs;
- (unsigned long long)debugExperimentBranchsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssignedAbBranchId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssignedAbBranchId:(id)arg1;
- (void)setConfigKeyValues:(id)arg1;
- (void)setDebugExperimentBranchs:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
