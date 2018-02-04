/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIDataCollector : NSObject {
    CNUIDataCollectorAggDLogger * _aggDLogger;
    NSString * _appIdentifier;
    CNUIDataCollectorSGLogger * _sgLogger;
}

@property (nonatomic, readonly) CNUIDataCollectorAggDLogger *aggDLogger;
@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, readonly) CNUIDataCollectorSGLogger *sgLogger;

+ (bool)isEnabled;
+ (id)sharedCollector;

- (void).cxx_destruct;
- (void)_reallyLogIndexUsage;
- (id)aggDLogger;
- (id)appIdentifier;
- (id)init;
- (id)initWithEnvironment:(id)arg1;
- (void)logAddProperty:(id)arg1 contact:(id)arg2;
- (void)logContactActionType:(id)arg1 attributes:(id)arg2;
- (void)logContactCreated:(id)arg1 originalContact:(id)arg2;
- (void)logContactShown:(id)arg1;
- (void)logGroupsShown:(long long)arg1 totalGroups:(long long)arg2;
- (void)logIndexUsage;
- (void)logPresentation;
- (void)logRefreshUsage;
- (void)logSearchResultSelected:(id)arg1;
- (void)logSearchResultsFetchedSuggested:(bool)arg1;
- (void)logSearchUsage;
- (id)sgLogger;

@end
