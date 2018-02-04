/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebsiteDataStore : NSObject <NSCoding, WKObject> {
    struct ObjectStorage<API::WebsiteDataStore> { 
        struct type { 
            unsigned char __lx[32]; 
        } data; 
    }  _websiteDataStore;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (setter=_setResourceLoadStatisticsEnabled:, nonatomic) bool _resourceLoadStatisticsEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKHTTPCookieStore *httpCookieStore;
@property (getter=isPersistent, nonatomic, readonly) bool persistent;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)_allWebsiteDataTypesIncludingPrivate;
+ (id)allWebsiteDataTypes;
+ (id)defaultDataStore;
+ (id)nonPersistentDataStore;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)_fetchDataRecordsOfTypes:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_initWithConfiguration:(id)arg1;
- (void)_resourceLoadStatisticsClearInMemoryAndPersistentStore;
- (void)_resourceLoadStatisticsClearInMemoryAndPersistentStoreModifiedSinceHours:(unsigned int)arg1;
- (bool)_resourceLoadStatisticsEnabled;
- (void)_resourceLoadStatisticsHadUserInteraction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_resourceLoadStatisticsIsGrandfathered:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_resourceLoadStatisticsIsPrevalentResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_resourceLoadStatisticsProcessStatisticsAndDataRecords;
- (void)_resourceLoadStatisticsResetToConsistentState;
- (void)_resourceLoadStatisticsSetGrandfatheringTime:(double)arg1;
- (void)_resourceLoadStatisticsSetHadUserInteraction:(bool)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetIsGrandfathered:(bool)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetIsPrevalentResource:(bool)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetLastSeen:(double)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetMaxStatisticsEntries:(unsigned long long)arg1;
- (void)_resourceLoadStatisticsSetMinimumTimeBetweenDataRecordsRemoval:(double)arg1;
- (void)_resourceLoadStatisticsSetNotifyPagesWhenDataRecordsWereScanned:(bool)arg1;
- (void)_resourceLoadStatisticsSetNotifyPagesWhenTelemetryWasCaptured:(bool)arg1;
- (void)_resourceLoadStatisticsSetPruneEntriesDownTo:(unsigned long long)arg1;
- (void)_resourceLoadStatisticsSetShouldClassifyResourcesBeforeDataRecordsRemoval:(bool)arg1;
- (void)_resourceLoadStatisticsSetShouldPartitionCookies:(bool)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetShouldSubmitTelemetry:(bool)arg1;
- (void)_resourceLoadStatisticsSetSubframeUnderTopFrameOrigin:(id)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetSubresourceUnderTopFrameOrigin:(id)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetSubresourceUniqueRedirectTo:(id)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetTimeToLiveCookiePartitionFree:(double)arg1;
- (void)_resourceLoadStatisticsSetTimeToLiveUserInteraction:(double)arg1;
- (void)_resourceLoadStatisticsSubmitTelemetry;
- (void)_resourceLoadStatisticsUpdateCookiePartitioning;
- (void)_setResourceLoadStatisticsEnabled:(bool)arg1;
- (void)_setResourceLoadStatisticsTestingCallback:(id /* block */)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchDataRecordsOfTypes:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)httpCookieStore;
- (id)initWithCoder:(id)arg1;
- (bool)isPersistent;
- (void)removeDataOfTypes:(id)arg1 forDataRecords:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeDataOfTypes:(id)arg1 modifiedSince:(id)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_allDataTypes;

@end
