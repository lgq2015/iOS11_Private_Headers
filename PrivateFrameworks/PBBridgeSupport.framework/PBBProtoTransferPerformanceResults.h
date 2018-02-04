/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoTransferPerformanceResults : PBCodable <NSCopying> {
    NSMutableArray * _macroActivites;
    NSMutableArray * _measures;
    NSMutableArray * _milestones;
}

@property (nonatomic, retain) NSMutableArray *macroActivites;
@property (nonatomic, retain) NSMutableArray *measures;
@property (nonatomic, retain) NSMutableArray *milestones;

+ (Class)macroActivitesType;
+ (Class)measuresType;
+ (Class)milestonesType;

- (void).cxx_destruct;
- (void)addMacroActivites:(id)arg1;
- (void)addMeasures:(id)arg1;
- (void)addMilestones:(id)arg1;
- (void)clearMacroActivites;
- (void)clearMeasures;
- (void)clearMilestones;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)macroActivites;
- (id)macroActivitesAtIndex:(unsigned long long)arg1;
- (unsigned long long)macroActivitesCount;
- (id)measures;
- (id)measuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)measuresCount;
- (void)mergeFrom:(id)arg1;
- (id)milestones;
- (id)milestonesAtIndex:(unsigned long long)arg1;
- (unsigned long long)milestonesCount;
- (bool)readFrom:(id)arg1;
- (void)setMacroActivites:(id)arg1;
- (void)setMeasures:(id)arg1;
- (void)setMilestones:(id)arg1;
- (void)writeTo:(id)arg1;

@end
