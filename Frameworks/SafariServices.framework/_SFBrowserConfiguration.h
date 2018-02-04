/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBrowserConfiguration : NSObject {
    long long  _configuration;
}

@property (nonatomic, readonly) bool allowsAutoFill;
@property (nonatomic, readonly) bool allowsClosingLastTab;
@property (nonatomic, readonly) bool allowsKeyboardCorrectionLearning;
@property (nonatomic, readonly) bool allowsPersistingTabState;
@property (nonatomic, readonly) bool allowsReopeningClosedTabs;
@property (nonatomic, readonly) bool allowsRestoringEducationTabs;
@property (nonatomic, readonly) bool allowsSearchFeedback;
@property (nonatomic, readonly) bool allowsSearchSuggestions;
@property (nonatomic, readonly) bool allowsSiteSpecificSearch;
@property (nonatomic, readonly) bool allowsSpeculativeLoading;
@property (nonatomic, readonly) bool allowsUserActivityFeedback;
@property (nonatomic, readonly) bool forcesDoNotTrack;
@property (nonatomic, readonly) unsigned long long navigationBarTintStyle;
@property (getter=isPrivateBrowsingEnabled, nonatomic, readonly) bool privateBrowsingEnabled;
@property (nonatomic, readonly) unsigned long long toolbarTintStyle;
@property (nonatomic, readonly) bool usesDarkTheme;
@property (nonatomic, readonly) bool usesExtraBarGradients;
@property (nonatomic, readonly) bool usesPersistentDataStore;

- (bool)allowsAutoFill;
- (bool)allowsClosingLastTab;
- (bool)allowsKeyboardCorrectionLearning;
- (bool)allowsPersistingTabState;
- (bool)allowsReopeningClosedTabs;
- (bool)allowsRestoringEducationTabs;
- (bool)allowsSearchFeedback;
- (bool)allowsSearchSuggestions;
- (bool)allowsSiteSpecificSearch;
- (bool)allowsSpeculativeLoading;
- (bool)allowsUserActivityFeedback;
- (id)description;
- (bool)forcesDoNotTrack;
- (unsigned long long)hash;
- (id)initWithPrivateBrowsingEnabled:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPrivateBrowsingEnabled;
- (unsigned long long)navigationBarTintStyle;
- (unsigned long long)toolbarTintStyle;
- (bool)usesDarkTheme;
- (bool)usesExtraBarGradients;
- (bool)usesPersistentDataStore;

@end
