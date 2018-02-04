/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutDimension : NSLayoutAnchor

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (id)anchorByAddingConstant:(double)arg1;
- (id)anchorByAddingDimension:(id)arg1;
- (id)anchorByMultiplyingByConstant:(double)arg1;
- (id)anchorBySubtractingDimension:(id)arg1;
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)constraintEqualToConstant:(double)arg1;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)constraintGreaterThanOrEqualToConstant:(double)arg1;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)constraintLessThanOrEqualToConstant:(double)arg1;
- (bool)isCompatibleWithAnchor:(id)arg1;
- (id)minusDimension:(id)arg1;
- (id)plus:(double)arg1;
- (id)plusDimension:(id)arg1;
- (id)ruleEqualToConstant:(double)arg1;
- (id)ruleEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)ruleGreaterThanOrEqualToConstant:(double)arg1;
- (id)ruleGreaterThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)ruleLessThanOrEqualToConstant:(double)arg1;
- (id)ruleLessThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)times:(double)arg1;
- (bool)validateOtherAttribute:(long long)arg1;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

- (id)avkit_constraintEqualToConstant:(double)arg1 priority:(float)arg2;
- (id)avkit_constraintGreaterThanOrEqualToConstant:(double)arg1 priority:(float)arg2;
- (id)avkit_constraintLessThanOrEqualToConstant:(double)arg1 priority:(float)arg2;

@end
