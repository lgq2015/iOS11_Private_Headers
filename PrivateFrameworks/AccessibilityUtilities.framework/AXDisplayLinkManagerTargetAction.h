/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXDisplayLinkManagerTargetAction : NSObject {
    SEL  _actionSelector;
    unsigned long long  _displayDidRefreshCount;
    id  _target;
}

@property (nonatomic) SEL actionSelector;
@property (nonatomic) unsigned long long displayDidRefreshCount;
@property (nonatomic, retain) id target;

- (void).cxx_destruct;
- (SEL)actionSelector;
- (void)displayDidRefresh:(id)arg1;
- (unsigned long long)displayDidRefreshCount;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2;
- (bool)isEqual:(id)arg1;
- (void)setActionSelector:(SEL)arg1;
- (void)setDisplayDidRefreshCount:(unsigned long long)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
