/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSPlaylistEndAction : IKJSObject <IKJSPlaylistEndAction>

@property (readonly) long long PAUSE;
@property (readonly) long long STOP;
@property (readonly) long long WAIT_FOR_MORE_ITEMS;

- (long long)PAUSE;
- (long long)STOP;
- (long long)WAIT_FOR_MORE_ITEMS;
- (id)init;

@end
