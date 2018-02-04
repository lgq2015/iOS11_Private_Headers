/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVPropFindTaskDelegate, CoreDAVTaskDelegate> {
    NSSet * _collections;
    NSString * _displayName;
    NSSet * _emailAddresses;
    bool  _fetchPrincipalSearchProperties;
    bool  _isExpandPropertyReportSupported;
    NSSet * _principalSearchProperties;
    NSURL * _principalURL;
    NSMutableSet * _redirectHistory;
    NSURL * _resourceID;
    bool  _shouldIgnoreHomeSetOnDifferentHost;
}

@property (nonatomic, readonly) NSSet *collections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CoreDAVGetAccountPropertiesTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSSet *emailAddresses;
@property (nonatomic) bool fetchPrincipalSearchProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isExpandPropertyReportSupported;
@property (nonatomic, readonly) NSSet *principalSearchProperties;
@property (nonatomic, readonly) NSURL *principalURL;
@property (nonatomic, readonly) NSURL *resourceID;
@property (nonatomic) bool shouldIgnoreHomeSetOnDifferentHost;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (void)_taskCompleted:(id)arg1 withError:(id)arg2;
- (void)coaxServerForPrincipalHeaders;
- (id)collections;
- (id)description;
- (id)displayName;
- (id)emailAddresses;
- (bool)fetchPrincipalSearchProperties;
- (bool)forceOptionsRequest;
- (id)homeSet;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (bool)isExpandPropertyReportSupported;
- (id)principalSearchProperties;
- (id)principalURL;
- (void)processPrincipalHeaders:(id)arg1;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (id)resourceID;
- (void)searchPropertySetTask:(id)arg1 completetWithPropertySearchSet:(id)arg2 error:(id)arg3;
- (void)setFetchPrincipalSearchProperties:(bool)arg1;
- (void)setShouldIgnoreHomeSetOnDifferentHost:(bool)arg1;
- (bool)shouldIgnoreHomeSetOnDifferentHost;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;

@end
