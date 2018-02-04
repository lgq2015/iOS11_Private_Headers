/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPreferenceClient.framework/AppPreferenceClient
 */

@interface APRAppPreferenceResponse : NSObject <NSSecureCoding> {
    NSString * _ABGroup;
    ATXResponse * _atxResponse;
    NSString * _engagedBundleId;
    unsigned long long  _engagementType;
    unsigned long long  _experience;
    unsigned long long  _feedbackSource;
    NSString * _intentType;
}

@property (nonatomic, readonly) NSString *ABGroup;
@property (nonatomic, readonly) ATXResponse *atxResponse;
@property (nonatomic, readonly) NSArray *bundleIds;
@property (nonatomic, readonly) NSString *engagedBundleId;
@property (nonatomic, readonly) unsigned long long engagementType;
@property (nonatomic) unsigned long long experience;
@property (nonatomic, readonly) unsigned long long feedbackSource;
@property (nonatomic, retain) NSString *intentType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ABGroup;
- (id)atxResponse;
- (id)bundleIds;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)engagedBundleId;
- (unsigned long long)engagementType;
- (unsigned long long)experience;
- (unsigned long long)feedbackSource;
- (id)initWithAtxResponse:(id)arg1 abGroup:(id)arg2 experience:(unsigned long long)arg3 intentType:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)intentType;
- (bool)isEqual:(id)arg1;
- (id)json;
- (id)jsonData;
- (id)jsonDescription;
- (id)sessionId;
- (void)setExperience:(unsigned long long)arg1;
- (void)setIntentType:(id)arg1;
- (void)updateExperience:(unsigned long long)arg1;
- (void)updateFeedbackSource:(unsigned long long)arg1 engagementType:(unsigned long long)arg2 engagedBundleId:(id)arg3;

@end
