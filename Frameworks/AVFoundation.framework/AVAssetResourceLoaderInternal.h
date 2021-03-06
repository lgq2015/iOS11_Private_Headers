/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoaderInternal : NSObject {
    AVAssetClientURLRequestHelper * URLRequestHelper;
    NSURLSession * URLSession;
    <NSURLSessionDataDelegate> * URLSessionDataDelegate;
    NSOperationQueue * URLSessionOperationQueue;
    struct OpaqueFigCustomURLHandler { } * authHandler;
    AVAssetCustomURLBridgeForNSURLSession * bridgeBetweenHandlerAndSession;
    NSMutableDictionary * contentInformationCache;
    NSObject<OS_dispatch_queue> * contentInformationCachingQueue;
    struct OpaqueFigCustomURLHandler { } * contentKeySessionCustomURLHandler;
    struct OpaqueFigCustomURLHandler { } * customURLHandler;
    struct OpaqueFigCustomURLLoader { } * customURLLoader;
    NSObject<OS_dispatch_queue> * delegateQueue;
    int  loadingCancelled;
    long long  makeResourceLoaderURLSessionSupportStuffOnlyOnce;
    NSMutableDictionary * pendingRequests;
    bool  preloadsEligibleContentKeys;
    <NSURLSessionDataDelegate> * shimURLSessionDataDelegate;
    NSObject<OS_dispatch_queue> * stateQueue;
    NSOperation * waitForAssetURLSessionStuffOperation;
    AVWeakReference * weakReferenceToAsset;
    AVWeakReference * weakReferenceToDelegate;
}

@end
