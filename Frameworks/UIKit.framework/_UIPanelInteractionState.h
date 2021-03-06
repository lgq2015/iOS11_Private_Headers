/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPanelInteractionState : NSObject <NSCopying> {
    long long  _affectedSides;
    long long  _interactingSide;
    double  _maxLeading;
    double  _maxTrailing;
    double  _minLeading;
    double  _minTrailing;
    UISlidingBarState * _originalState;
    UISlidingBarStateRequest * _stateRequest;
}

@property (nonatomic) long long affectedSides;
@property (nonatomic) long long interactingSide;
@property (nonatomic) double maxLeading;
@property (nonatomic) double maxTrailing;
@property (nonatomic) double minLeading;
@property (nonatomic) double minTrailing;
@property (nonatomic, copy) UISlidingBarState *originalState;
@property (nonatomic, copy) UISlidingBarStateRequest *stateRequest;

- (void).cxx_destruct;
- (long long)affectedSides;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)interactingSide;
- (double)maxLeading;
- (double)maxTrailing;
- (double)minLeading;
- (double)minTrailing;
- (id)originalState;
- (void)setAffectedSides:(long long)arg1;
- (void)setInteractingSide:(long long)arg1;
- (void)setMaxLeading:(double)arg1;
- (void)setMaxTrailing:(double)arg1;
- (void)setMinLeading:(double)arg1;
- (void)setMinTrailing:(double)arg1;
- (void)setOriginalState:(id)arg1;
- (void)setStateRequest:(id)arg1;
- (void)sideWasAffected:(long long)arg1;
- (id)stateRequest;

@end
