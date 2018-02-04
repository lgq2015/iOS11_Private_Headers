/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsFeedback : PBCodable <NSCopying> {
    NSMutableArray * _alightNotificationFeedbacks;
    NSData * _directionResponseID;
    NSMutableArray * _guidanceFeedbacks;
    NSMutableArray * _stepFeedbacks;
    NSMutableArray * _trafficRerouteFeedbacks;
}

@property (nonatomic, retain) NSMutableArray *alightNotificationFeedbacks;
@property (nonatomic, retain) NSData *directionResponseID;
@property (nonatomic, retain) NSMutableArray *guidanceFeedbacks;
@property (nonatomic, readonly) bool hasDirectionResponseID;
@property (nonatomic, retain) NSMutableArray *stepFeedbacks;
@property (nonatomic, retain) NSMutableArray *trafficRerouteFeedbacks;

+ (Class)alightNotificationFeedbackType;
+ (Class)guidanceFeedbackType;
+ (Class)stepFeedbackType;
+ (Class)trafficRerouteFeedbackType;

- (void).cxx_destruct;
- (void)addAlightNotificationFeedback:(id)arg1;
- (void)addGuidanceFeedback:(id)arg1;
- (void)addStepFeedback:(id)arg1;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (id)alightNotificationFeedbackAtIndex:(unsigned long long)arg1;
- (id)alightNotificationFeedbacks;
- (unsigned long long)alightNotificationFeedbacksCount;
- (void)clearAlightNotificationFeedbacks;
- (void)clearGuidanceFeedbacks;
- (void)clearStepFeedbacks;
- (void)clearTrafficRerouteFeedbacks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionResponseID;
- (id)guidanceFeedbackAtIndex:(unsigned long long)arg1;
- (id)guidanceFeedbacks;
- (unsigned long long)guidanceFeedbacksCount;
- (bool)hasDirectionResponseID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlightNotificationFeedbacks:(id)arg1;
- (void)setDirectionResponseID:(id)arg1;
- (void)setGuidanceFeedbacks:(id)arg1;
- (void)setStepFeedbacks:(id)arg1;
- (void)setTrafficRerouteFeedbacks:(id)arg1;
- (id)stepFeedbackAtIndex:(unsigned long long)arg1;
- (id)stepFeedbacks;
- (unsigned long long)stepFeedbacksCount;
- (id)trafficRerouteFeedbackAtIndex:(unsigned long long)arg1;
- (id)trafficRerouteFeedbacks;
- (unsigned long long)trafficRerouteFeedbacksCount;
- (void)writeTo:(id)arg1;

@end
