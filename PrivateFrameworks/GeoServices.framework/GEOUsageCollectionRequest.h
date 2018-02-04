/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUsageCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray * _abExperimentAssignments;
    GEOABExperimentAssignment * _tilesAbExperimentAssignment;
    NSMutableArray * _timeToLeaveHypothesisFeedbackCollections;
    NSMutableArray * _timeToLeaveInitialTravelTimeFeedbackCollections;
}

@property (nonatomic, retain) NSMutableArray *abExperimentAssignments;
@property (nonatomic, readonly) bool hasTilesAbExperimentAssignment;
@property (nonatomic, retain) GEOABExperimentAssignment *tilesAbExperimentAssignment;
@property (nonatomic, retain) NSMutableArray *timeToLeaveHypothesisFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *timeToLeaveInitialTravelTimeFeedbackCollections;

+ (Class)abExperimentAssignmentType;
+ (Class)timeToLeaveHypothesisFeedbackCollectionType;
+ (Class)timeToLeaveInitialTravelTimeFeedbackCollectionType;

- (void).cxx_destruct;
- (id)abExperimentAssignmentAtIndex:(unsigned long long)arg1;
- (id)abExperimentAssignments;
- (unsigned long long)abExperimentAssignmentsCount;
- (void)addAbExperimentAssignment:(id)arg1;
- (void)addTimeToLeaveHypothesisFeedbackCollection:(id)arg1;
- (void)addTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1;
- (void)clearAbExperimentAssignments;
- (void)clearTimeToLeaveHypothesisFeedbackCollections;
- (void)clearTimeToLeaveInitialTravelTimeFeedbackCollections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTilesAbExperimentAssignment;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAbExperimentAssignments:(id)arg1;
- (void)setTilesAbExperimentAssignment:(id)arg1;
- (void)setTimeToLeaveHypothesisFeedbackCollections:(id)arg1;
- (void)setTimeToLeaveInitialTravelTimeFeedbackCollections:(id)arg1;
- (id)tilesAbExperimentAssignment;
- (id)timeToLeaveHypothesisFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (id)timeToLeaveHypothesisFeedbackCollections;
- (unsigned long long)timeToLeaveHypothesisFeedbackCollectionsCount;
- (id)timeToLeaveInitialTravelTimeFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (id)timeToLeaveInitialTravelTimeFeedbackCollections;
- (unsigned long long)timeToLeaveInitialTravelTimeFeedbackCollectionsCount;
- (void)writeTo:(id)arg1;

@end
