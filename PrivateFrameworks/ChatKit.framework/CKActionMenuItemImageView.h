/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKActionMenuItemImageView : UIImageView <CKActionMenuItemView> {
    bool  _enabled;
    UIColor * _highlightedTintColor;
    UIColor * _unhighlightedTintColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 tintColor:(id)arg2 highlightedTintColor:(id)arg3;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)updateTintColor;

@end
