/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleActivityManagerFactory : NSObject <NUArticleActivityFactory> {
    <NUURLHandler> * _URLHandler;
    FCReadingHistory * _readingHistory;
    FCReadingList * _readingList;
    FCSubscriptionList * _subscriptionList;
}

@property (nonatomic, readonly) <NUURLHandler> *URLHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FCReadingHistory *readingHistory;
@property (nonatomic, readonly) FCReadingList *readingList;
@property (nonatomic, readonly) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLHandler;
- (id)activityProviderForHeadline:(id)arg1;
- (id)initWithReadingHistory:(id)arg1 readingList:(id)arg2 subscriptionList:(id)arg3 URLHandler:(id)arg4;
- (id)readingHistory;
- (id)readingList;
- (id)subscriptionList;

@end
