/* made by EzioChiu.
 */

@protocol IKJSPlaylistEndAction <JSExport>

@required

- (long long)PAUSE;
- (long long)STOP;
- (long long)WAIT_FOR_MORE_ITEMS;

@end
