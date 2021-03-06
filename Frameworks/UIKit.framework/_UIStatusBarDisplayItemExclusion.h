/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarDisplayItemExclusion : NSObject {
    _UIStatusBarDisplayItemState * _itemState;
    _UIStatusBarDisplayItemPlacement * _placement;
}

@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, retain) _UIStatusBarDisplayItemState *itemState;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *placement;

+ (id)exclusionWithDisplayItemState:(id)arg1 placement:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (bool)isEnabled;
- (id)itemState;
- (id)placement;
- (void)setItemState:(id)arg1;
- (void)setPlacement:(id)arg1;

@end
