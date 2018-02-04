/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying> {
    long long  _businessID;
    int  _feedbackType;
    struct { 
        unsigned int sessionGUID : 1; 
        unsigned int businessID : 1; 
        unsigned int timestamp : 1; 
        unsigned int feedbackType : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int numberOfResults : 1; 
        unsigned int positionInResults : 1; 
        unsigned int sequenceNumber : 1; 
    }  _has;
    int  _localSearchProviderID;
    int  _numberOfResults;
    int  _positionInResults;
    int  _sequenceNumber;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionGUID;
    double  _timestamp;
}

@property (nonatomic) long long businessID;
@property (nonatomic) int feedbackType;
@property (nonatomic) bool hasBusinessID;
@property (nonatomic) bool hasFeedbackType;
@property (nonatomic) bool hasLocalSearchProviderID;
@property (nonatomic) bool hasNumberOfResults;
@property (nonatomic) bool hasPositionInResults;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic) bool hasSessionGUID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) int numberOfResults;
@property (nonatomic) int positionInResults;
@property (nonatomic) int sequenceNumber;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property (nonatomic) double timestamp;

- (int)StringAsFeedbackType:(id)arg1;
- (long long)businessID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedbackType;
- (id)feedbackTypeAsString:(int)arg1;
- (bool)hasBusinessID;
- (bool)hasFeedbackType;
- (bool)hasLocalSearchProviderID;
- (bool)hasNumberOfResults;
- (bool)hasPositionInResults;
- (bool)hasSequenceNumber;
- (bool)hasSessionGUID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)localSearchProviderID;
- (void)mergeFrom:(id)arg1;
- (int)numberOfResults;
- (int)positionInResults;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (int)sequenceNumber;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionGUID;
- (void)setBusinessID:(long long)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setHasBusinessID:(bool)arg1;
- (void)setHasFeedbackType:(bool)arg1;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setHasNumberOfResults:(bool)arg1;
- (void)setHasPositionInResults:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasSessionGUID:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setNumberOfResults:(int)arg1;
- (void)setPositionInResults:(int)arg1;
- (void)setSequenceNumber:(int)arg1;
- (void)setSessionGUID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
