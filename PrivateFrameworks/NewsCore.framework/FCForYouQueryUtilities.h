/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouQueryUtilities : NSObject

+ (id)_filterTagsForQuerying:(id)arg1 withMutedTagIDs:(id)arg2;
+ (id)feedRequestsForTags:(id)arg1 tagBinProvider:(id /* block */)arg2 hiddenFeedIDs:(id)arg3 purchasedTagIDs:(id)arg4 appConfiguration:(id)arg5 maxCount:(unsigned long long)arg6 tagIDFeedRangeProvider:(id /* block */)arg7 isRunningPPT:(bool)arg8;
+ (void)fetchTagsForQueryingWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 contentContext:(id)arg4 fallbackToPresubscribedTagIDs:(bool)arg5 qualityOfService:(long long)arg6 completionHandler:(id /* block */)arg7;
+ (void)fetchTagsForQueryingWithSubscribedTags:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 contentContext:(id)arg4 fallbackToPresubscribedTagIDs:(bool)arg5 qualityOfService:(long long)arg6 completionHandler:(id /* block */)arg7;

@end
