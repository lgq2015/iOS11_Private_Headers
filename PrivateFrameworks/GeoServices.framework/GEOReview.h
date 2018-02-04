/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOReview : PBCodable <NSCopying> {
    struct { 
        unsigned int reviewTime : 1; 
        unsigned int score : 1; 
    }  _has;
    NSString * _languageCode;
    double  _reviewTime;
    GEOUser * _reviewer;
    double  _score;
    NSString * _snippet;
    NSString * _uid;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic) bool hasReviewTime;
@property (nonatomic, readonly) bool hasReviewer;
@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) bool hasSnippet;
@property (nonatomic, readonly) bool hasUid;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic) double reviewTime;
@property (nonatomic, retain) GEOUser *reviewer;
@property (nonatomic) double score;
@property (nonatomic, retain) NSString *snippet;
@property (nonatomic, retain) NSString *uid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLanguageCode;
- (bool)hasReviewTime;
- (bool)hasReviewer;
- (bool)hasScore;
- (bool)hasSnippet;
- (bool)hasUid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)reviewTime;
- (id)reviewer;
- (double)score;
- (void)setHasReviewTime:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setReviewTime:(double)arg1;
- (void)setReviewer:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSnippet:(id)arg1;
- (void)setUid:(id)arg1;
- (id)snippet;
- (id)uid;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
