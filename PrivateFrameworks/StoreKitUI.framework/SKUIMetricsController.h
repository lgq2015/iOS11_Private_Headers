/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMetricsController : NSObject {
    SKUIMetricsImpressionSession * _activeImpressionsSession;
    NSString * _applicationIdentifier;
    SSMetricsController * _controller;
    bool  _flushesImmediately;
    SSMetricsConfiguration * _globalConfiguration;
    NSString * _hostApplicationIdentifier;
    bool  _impressionsEnabled;
    NSObject<OS_dispatch_source> * _impressionsTimer;
    bool  _loggingEnabled;
    SSMetricsConfiguration * _pageConfiguration;
    NSString * _pageContext;
    NSString * _pageURL;
    NSString * _topic;
    NSString * _userAgent;
    NSString * _windowOrientation;
}

@property (nonatomic, readonly) NSNumber *accountIdentifier;
@property (nonatomic, readonly) SKUIMetricsImpressionSession *activeImpressionsSession;
@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly) double flushInterval;
@property (nonatomic, readonly) SSMetricsConfiguration *globalConfiguration;
@property (nonatomic, copy) NSString *hostApplicationIdentifier;
@property (nonatomic, retain) SSMetricsConfiguration *pageConfiguration;
@property (nonatomic, copy) NSString *pageContext;
@property (nonatomic, copy) NSString *pageURL;
@property (nonatomic, copy) NSString *topic;
@property (nonatomic, copy) NSString *userAgent;
@property (nonatomic, copy) NSString *windowOrientation;

+ (void)flushImmediately;

- (void).cxx_destruct;
- (void)_insertEvent:(id)arg1;
- (void)_recordActiveImpressions;
- (void)_waitUntilRecordingComplete;
- (id)accountIdentifier;
- (id)activeImpressionsSession;
- (id)applicationIdentifier;
- (bool)canRecordEventWithType:(id)arg1;
- (id)clickEventWithItem:(id)arg1 locationPosition:(long long)arg2;
- (void)closeImpressionsSession;
- (id)compoundStringWithElements:(id)arg1;
- (void)dealloc;
- (void)flushImmediately;
- (double)flushInterval;
- (id)globalConfiguration;
- (id)hostApplicationIdentifier;
- (id)initWithGlobalConfiguration:(id)arg1;
- (id)itemOfferClickEventWithItem:(id)arg1 locationPosition:(long long)arg2;
- (id)locationWithPageComponent:(id)arg1;
- (id)locationWithPosition:(long long)arg1 type:(id)arg2 fieldData:(id)arg3;
- (id)pageConfiguration;
- (id)pageContext;
- (id)pageURL;
- (id)performActionForItem:(id)arg1;
- (id)performActionForItem:(id)arg1 clientContext:(id)arg2;
- (id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3;
- (id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)performActionForSoftwareItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)pingURLs:(id)arg1;
- (void)pingURLs:(id)arg1 withClientContext:(id)arg2;
- (void)recordBuyConfirmedEventsForItems:(id)arg1 purchaseResponses:(id)arg2;
- (void)recordEvent:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setHostApplicationIdentifier:(id)arg1;
- (void)setPageConfiguration:(id)arg1;
- (void)setPageContext:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setWindowOrientation:(id)arg1;
- (id)tokenStringWithElements:(id)arg1;
- (id)topic;
- (id)userAgent;
- (id)windowOrientation;

@end
