/* made by EzioChiu.
 */

@protocol MusicVerticalScrollingContainerItemContextDelegate <NSObject>

@optional

- (long long)contentOffsetProxyingPolicyForVerticalScrollingContainerItemContext:(MusicVerticalScrollingContainerItemContext *)arg1;
- (void)verticalScrollingContainerItemContextRequestsContentSizeUpdate:(MusicVerticalScrollingContainerItemContext *)arg1;

@end
