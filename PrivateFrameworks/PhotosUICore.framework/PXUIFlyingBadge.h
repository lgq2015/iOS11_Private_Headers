/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIFlyingBadge : NSObject {
    NSArray * _badges;
    unsigned long long  _mainBadge;
}

@property (nonatomic, readonly, copy) NSArray *badges;
@property (nonatomic, readonly) unsigned long long mainBadge;

- (void).cxx_destruct;
- (id)badges;
- (id)initWithBadges:(id)arg1 mainBadge:(unsigned long long)arg2;
- (unsigned long long)mainBadge;

@end
