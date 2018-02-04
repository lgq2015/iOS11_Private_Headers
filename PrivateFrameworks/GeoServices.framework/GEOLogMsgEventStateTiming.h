/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventStateTiming : PBCodable <NSCopying> {
    double  _durationInOldState;
    struct { 
        unsigned int durationInOldState : 1; 
    }  _has;
    NSMutableArray * _stateTransitionFeedbacks;
}

@property (nonatomic) double durationInOldState;
@property (nonatomic) bool hasDurationInOldState;
@property (nonatomic, retain) NSMutableArray *stateTransitionFeedbacks;

+ (Class)stateTransitionFeedbackType;

- (void).cxx_destruct;
- (void)addStateTransitionFeedback:(id)arg1;
- (void)clearStateTransitionFeedbacks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)durationInOldState;
- (bool)hasDurationInOldState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDurationInOldState:(double)arg1;
- (void)setHasDurationInOldState:(bool)arg1;
- (void)setStateTransitionFeedbacks:(id)arg1;
- (id)stateTransitionFeedbackAtIndex:(unsigned long long)arg1;
- (id)stateTransitionFeedbacks;
- (unsigned long long)stateTransitionFeedbacksCount;
- (void)writeTo:(id)arg1;

@end
