/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilyDetailsCache : NSObject

@property (nonatomic, readonly) unsigned long long pendingInviteCount;

+ (id)sharedCache;

- (void)invalidate;
- (unsigned long long)pendingInviteCount;

@end
