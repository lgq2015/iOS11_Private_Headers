/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionConfiguration : NSObject {
    unsigned long long  _maxRemoteParticipants;
    long long  _sessionType;
}

@property (nonatomic, readonly) bool isContinuity;
@property (nonatomic) unsigned long long maxRemoteParticipants;
@property (nonatomic) long long sessionType;

- (bool)applyConfigurationUsingClientDict:(id)arg1;
- (id)initWithClientDictionary:(id)arg1;
- (bool)isContinuity;
- (unsigned long long)maxRemoteParticipants;
- (long long)sessionType;
- (void)setMaxRemoteParticipants:(unsigned long long)arg1;
- (void)setSessionType:(long long)arg1;
- (bool)updateWithClientDictionary:(id)arg1;

@end
