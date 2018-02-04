/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
 */

@interface _QPSearchFeedbackListenerParameters : _QPParameters {
    NSArray * _allowedDescriptionExpansionBundleIdentifiers;
    NSArray * _disallowedParsecDomains;
    NSString * _expansionRegularExpression;
    NSNumber * _minimumPrefixLengthToSuggest;
    NSNumber * _minimumPunctuationOnlyLengthForEngagement;
    NSNumber * _suggestApplications;
    NSNumber * _suggestExpandedPrefix;
    NSNumber * _suggestPrefixAlways;
    NSNumber * _suggestPrefixOnPunchout;
    NSNumber * _suggestPrefixWhenNoMatchFound;
    NSNumber * _suggestPrefixWithoutEngagement;
}

@property (nonatomic, readonly) NSArray *allowedDescriptionExpansionBundleIdentifiers;
@property (nonatomic, readonly) NSArray *disallowedParsecDomains;
@property (nonatomic, readonly) NSString *expansionRegularExpression;
@property (nonatomic, readonly) NSNumber *minimumPrefixLengthToSuggest;
@property (nonatomic, readonly) NSNumber *minimumPunctuationOnlyLengthForEngagement;
@property (nonatomic, readonly) NSNumber *suggestApplications;
@property (nonatomic, readonly) NSNumber *suggestExpandedPrefix;
@property (nonatomic, readonly) NSNumber *suggestPrefixAlways;
@property (nonatomic, readonly) NSNumber *suggestPrefixOnPunchout;
@property (nonatomic, readonly) NSNumber *suggestPrefixWhenNoMatchFound;
@property (nonatomic, readonly) NSNumber *suggestPrefixWithoutEngagement;

- (void).cxx_destruct;
- (id)allowedDescriptionExpansionBundleIdentifiers;
- (id)defaultValues;
- (id)disallowedParsecDomains;
- (id)expansionRegularExpression;
- (id)minimumPrefixLengthToSuggest;
- (id)minimumPunctuationOnlyLengthForEngagement;
- (id)suggestApplications;
- (id)suggestExpandedPrefix;
- (id)suggestPrefixAlways;
- (id)suggestPrefixOnPunchout;
- (id)suggestPrefixWhenNoMatchFound;
- (id)suggestPrefixWithoutEngagement;

@end