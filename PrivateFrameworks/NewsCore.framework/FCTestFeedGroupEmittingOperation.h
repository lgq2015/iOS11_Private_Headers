/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTestFeedGroupEmittingOperation : FCSingleTagFeedGroupEmittingOperation {
    bool  _disableFiltering;
}

@property (nonatomic) bool disableFiltering;

- (bool)disableFiltering;
- (unsigned long long)feedItemsToFetchForDesiredHeadlineCount:(unsigned long long)arg1;
- (id)feedTransformations;
- (void)setDisableFiltering:(bool)arg1;

@end
