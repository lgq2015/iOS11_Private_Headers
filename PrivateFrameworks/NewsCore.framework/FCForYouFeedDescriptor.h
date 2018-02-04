/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouFeedDescriptor : FCFeedDescriptor <FCFeedPaginating> {
    FCAppConfigurationManager * _appConfigurationManager;
    FCSubscriptionList * _subscriptionList;
    unsigned long long  _trendingAndSavedStoriesCount;
}

@property (nonatomic, retain) FCAppConfigurationManager *appConfigurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long trendingAndSavedStoriesCount;

- (void).cxx_destruct;
- (id)appConfigurationManager;
- (void)d_fetchAllHeadlinesWithCloudContext:(id)arg1 sinceDate:(id)arg2 filter:(bool)arg3 personalize:(bool)arg4 completionHandler:(id /* block */)arg5;
- (bool)derivesContentsFromExplicitSubscriptions;
- (id)editionAtDate:(id)arg1;
- (id)editionFollowingEdition:(id)arg1;
- (long long)feedFilterOptions;
- (id)feedGroupEmitters;
- (id)feedPaginator;
- (long long)feedSortMethod;
- (id)iAdFeedID;
- (id)initWithIdentifier:(id)arg1 trendingAndSavedStoriesCount:(long long)arg2 appConfigurationManager:(id)arg3 subscriptionList:(id)arg4;
- (id)name;
- (id)offlineFeedGroupEmitters;
- (void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAppConfigurationManager:(id)arg1;
- (void)setSubscriptionList:(id)arg1;
- (void)setTrendingAndSavedStoriesCount:(unsigned long long)arg1;
- (bool)shouldFilterFeedGroupEmitter:(id)arg1;
- (id)subscriptionList;
- (unsigned long long)trendingAndSavedStoriesCount;

@end
