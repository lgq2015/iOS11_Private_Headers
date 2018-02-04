/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemOptInRequest : PBRequest <NSCopying> {
    NSData * _devicePushToken;
    bool  _didOptIn;
    struct { 
        unsigned int didOptIn : 1; 
    }  _has;
    NSString * _problemId;
    GEORPUserCredentials * _userCredentials;
    NSString * _userEmail;
}

@property (nonatomic, retain) NSData *devicePushToken;
@property (nonatomic) bool didOptIn;
@property (nonatomic, readonly) bool hasDevicePushToken;
@property (nonatomic) bool hasDidOptIn;
@property (nonatomic, readonly) bool hasProblemId;
@property (nonatomic, readonly) bool hasUserCredentials;
@property (nonatomic, readonly) bool hasUserEmail;
@property (nonatomic, retain) NSString *problemId;
@property (nonatomic, retain) GEORPUserCredentials *userCredentials;
@property (nonatomic, retain) NSString *userEmail;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)devicePushToken;
- (id)dictionaryRepresentation;
- (bool)didOptIn;
- (bool)hasDevicePushToken;
- (bool)hasDidOptIn;
- (bool)hasProblemId;
- (bool)hasUserCredentials;
- (bool)hasUserEmail;
- (unsigned long long)hash;
- (id)initWithSubmissionID:(id)arg1 allowContactBackAtEmailAddress:(id)arg2 traits:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)problemId;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setDevicePushToken:(id)arg1;
- (void)setDidOptIn:(bool)arg1;
- (void)setHasDidOptIn:(bool)arg1;
- (void)setProblemId:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (void)setUserEmail:(id)arg1;
- (id)userCredentials;
- (id)userEmail;
- (void)writeTo:(id)arg1;

@end
