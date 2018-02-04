/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXSearchResult : SFSearchResult <NSSecureCoding> {
    ATXResponse * _response;
    ATXScoredBundleId * _scoredBundleId;
}

@property (nonatomic, readonly) ATXResponse *response;
@property (nonatomic, readonly) ATXScoredBundleId *scoredBundleId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScoredBundleId:(id)arg1 response:(id)arg2;
- (id)response;
- (id)scoredBundleId;

@end
