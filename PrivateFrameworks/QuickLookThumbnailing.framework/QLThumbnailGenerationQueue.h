/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailGenerationQueue : NSObject {
    NSOperationQueue * _queue;
    NSMutableDictionary * _queuedURLs;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:(id)arg1 atBackgroundPriority:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:(id)arg1;

@end