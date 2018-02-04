/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
 */

@interface _QPQueryRankScore : NSObject <NSSecureCoding> {
    NSString * _contactID;
    double  _delta;
    double  _deltaTimeOfDay;
    double  _deltaTimeOfWeek;
    double  _durationScore;
    double  _engagedScore;
    double  _offset;
    double  _renderedScore;
    unsigned long long  _suggestionType;
    double  _timeOfDayScore;
    double  _timeOfWeekScore;
    double  _timeScore;
    double  _weekPeriodScore;
}

@property (copy) NSString *contactID;
@property double delta;
@property double deltaTimeOfDay;
@property double deltaTimeOfWeek;
@property (readonly) double durationScore;
@property (readonly) double engagedScore;
@property (readonly) double offset;
@property (readonly, copy) NSSet *reasons;
@property (readonly) double renderedScore;
@property (readonly) double score;
@property unsigned long long suggestionType;
@property (readonly) double timeOfDayScore;
@property (readonly) double timeOfWeekScore;
@property (readonly) double timeScore;
@property (readonly) double weekPeriodScore;

+ (bool)_isDateInWeekend:(id)arg1;
+ (id)scoreFromQueryEvent:(id)arg1 parameters:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactID;
- (id)debugDescription;
- (double)delta;
- (double)deltaTimeOfDay;
- (double)deltaTimeOfWeek;
- (id)description;
- (double)durationScore;
- (void)encodeWithCoder:(id)arg1;
- (double)engagedScore;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryEvent:(id)arg1 parameters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRankScore:(id)arg1;
- (double)offset;
- (id)reasons;
- (double)renderedScore;
- (double)score;
- (void)setContactID:(id)arg1;
- (void)setDelta:(double)arg1;
- (void)setDeltaTimeOfDay:(double)arg1;
- (void)setDeltaTimeOfWeek:(double)arg1;
- (void)setSuggestionType:(unsigned long long)arg1;
- (unsigned long long)suggestionType;
- (double)timeOfDayScore;
- (double)timeOfWeekScore;
- (double)timeScore;
- (double)weekPeriodScore;

@end
