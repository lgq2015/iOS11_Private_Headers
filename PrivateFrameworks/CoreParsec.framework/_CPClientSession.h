/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPClientSession : PBCodable <NSSecureCoding, _CPClientSession> {
    NSString * _agent;
    NSArray * _feedbacks;
    double  _firstUseDate;
    bool  _firstUseOfTheDay;
    struct { 
        unsigned int sessionStart : 1; 
        unsigned int previousSessionEndReason : 1; 
        unsigned int firstUseOfTheDay : 1; 
        unsigned int firstUseDate : 1; 
        unsigned int removeTimestamps : 1; 
    }  _has;
    int  _previousSessionEndReason;
    bool  _removeTimestamps;
    NSDictionary * _resourceVersions;
    double  _sessionStart;
    NSString * _userGuidString;
    NSString * _version;
}

@property (nonatomic, copy) NSString *agent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *feedbacks;
@property (nonatomic) double firstUseDate;
@property (nonatomic) bool firstUseOfTheDay;
@property (nonatomic, readonly) bool hasAgent;
@property (nonatomic, readonly) bool hasFirstUseDate;
@property (nonatomic, readonly) bool hasFirstUseOfTheDay;
@property (nonatomic, readonly) bool hasPreviousSessionEndReason;
@property (nonatomic, readonly) bool hasRemoveTimestamps;
@property (nonatomic, readonly) bool hasSessionStart;
@property (nonatomic, readonly) bool hasUserGuidString;
@property (nonatomic, readonly) bool hasVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int previousSessionEndReason;
@property (nonatomic) bool removeTimestamps;
@property (nonatomic, copy) NSDictionary *resourceVersions;
@property (nonatomic) double sessionStart;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userGuidString;
@property (nonatomic, copy) NSString *version;

- (void).cxx_destruct;
- (void)addFeedback:(id)arg1;
- (id)agent;
- (void)clearFeedback;
- (id)dictionaryRepresentation;
- (id)feedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackCount;
- (id)feedbacks;
- (double)firstUseDate;
- (bool)firstUseOfTheDay;
- (bool)getResourceVersions:(id*)arg1 forKey:(id)arg2;
- (bool)hasAgent;
- (bool)hasFirstUseDate;
- (bool)hasFirstUseOfTheDay;
- (bool)hasPreviousSessionEndReason;
- (bool)hasRemoveTimestamps;
- (bool)hasSessionStart;
- (bool)hasUserGuidString;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)previousSessionEndReason;
- (bool)readFrom:(id)arg1;
- (bool)removeTimestamps;
- (bool)requiresQueryId;
- (id)resourceVersions;
- (double)sessionStart;
- (void)setAgent:(id)arg1;
- (void)setFeedback:(id)arg1;
- (void)setFeedbacks:(id)arg1;
- (void)setFirstUseDate:(double)arg1;
- (void)setFirstUseOfTheDay:(bool)arg1;
- (void)setPreviousSessionEndReason:(int)arg1;
- (void)setRemoveTimestamps:(bool)arg1;
- (void)setResourceVersions:(id)arg1;
- (void)setResourceVersions:(id)arg1 forKey:(id)arg2;
- (void)setSessionStart:(double)arg1;
- (void)setUserGuidString:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)userGuidString;
- (id)version;
- (void)writeTo:(id)arg1;

@end
