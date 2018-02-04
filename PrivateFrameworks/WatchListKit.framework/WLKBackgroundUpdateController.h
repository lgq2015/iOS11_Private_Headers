/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKBackgroundUpdateController : NSObject {
    int  _notifyToken;
    bool  _notifyTokenIsValid;
}

+ (id)sharedInstance;

- (id)_init;
- (void)dealloc;
- (id)init;

@end
