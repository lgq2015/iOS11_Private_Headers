/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableActivityDataPreview : PBCodable <NSCopying> {
    NSMutableArray * _achievements;
    ASCodableCloudKitActivitySnapshot * _activitySnapshot;
    double  _date;
    struct { 
        unsigned int date : 1; 
    }  _has;
    NSMutableArray * _workouts;
}

@property (nonatomic, retain) NSMutableArray *achievements;
@property (nonatomic, retain) ASCodableCloudKitActivitySnapshot *activitySnapshot;
@property (nonatomic) double date;
@property (nonatomic, readonly) bool hasActivitySnapshot;
@property (nonatomic) bool hasDate;
@property (nonatomic, retain) NSMutableArray *workouts;

+ (Class)achievementsType;
+ (Class)workoutsType;

- (void).cxx_destruct;
- (id)achievements;
- (id)achievementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)achievementsCount;
- (id)activitySnapshot;
- (void)addAchievements:(id)arg1;
- (void)addWorkouts:(id)arg1;
- (void)clearAchievements;
- (void)clearWorkouts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivitySnapshot;
- (bool)hasDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAchievements:(id)arg1;
- (void)setActivitySnapshot:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setWorkouts:(id)arg1;
- (id)workouts;
- (id)workoutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)workoutsCount;
- (void)writeTo:(id)arg1;

@end
