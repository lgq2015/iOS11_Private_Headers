/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORating : PBCodable <NSCopying> {
    struct { 
        unsigned int maxScore : 1; 
        unsigned int score : 1; 
        unsigned int numberOfRatings : 1; 
        unsigned int numberOfReviews : 1; 
    }  _has;
    double  _maxScore;
    int  _numberOfRatings;
    int  _numberOfReviews;
    NSString * _provider;
    NSMutableArray * _reviews;
    double  _score;
    NSString * _uRL;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasMaxScore;
@property (nonatomic) bool hasNumberOfRatings;
@property (nonatomic) bool hasNumberOfReviews;
@property (nonatomic, readonly) bool hasProvider;
@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) bool hasURL;
@property (nonatomic) double maxScore;
@property (nonatomic) int numberOfRatings;
@property (nonatomic) int numberOfReviews;
@property (nonatomic, retain) NSString *provider;
@property (nonatomic, retain) NSMutableArray *reviews;
@property (nonatomic) double score;
@property (nonatomic, retain) NSString *uRL;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)reviewType;

- (void).cxx_destruct;
- (void)addReview:(id)arg1;
- (void)clearReviews;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxScore;
- (bool)hasNumberOfRatings;
- (bool)hasNumberOfReviews;
- (bool)hasProvider;
- (bool)hasScore;
- (bool)hasURL;
- (unsigned long long)hash;
- (id)initWithSampleSizeForUserRatingScore:(unsigned int)arg1 normalizedUserRatingScore:(float)arg2;
- (bool)isEqual:(id)arg1;
- (double)maxScore;
- (void)mergeFrom:(id)arg1;
- (int)numberOfRatings;
- (int)numberOfReviews;
- (id)provider;
- (bool)readFrom:(id)arg1;
- (id)reviewAtIndex:(unsigned long long)arg1;
- (id)reviews;
- (unsigned long long)reviewsCount;
- (double)score;
- (void)setHasMaxScore:(bool)arg1;
- (void)setHasNumberOfRatings:(bool)arg1;
- (void)setHasNumberOfReviews:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setMaxScore:(double)arg1;
- (void)setNumberOfRatings:(int)arg1;
- (void)setNumberOfReviews:(int)arg1;
- (void)setProvider:(id)arg1;
- (void)setReviews:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setURL:(id)arg1;
- (id)uRL;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
