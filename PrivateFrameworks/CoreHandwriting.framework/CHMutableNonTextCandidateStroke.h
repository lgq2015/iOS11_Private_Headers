/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke

@property (nonatomic) bool active;
@property (nonatomic) double support;
@property (nonatomic, retain) NSDictionary *supportByStrokeIdentifier;

- (bool)_adjustSupportForContainerClassificationWithStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;
- (bool)_adjustSupportForLineClassificationWithStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;
- (bool)adjustSupportWithStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;
- (void)setActive:(bool)arg1;
- (void)setSupport:(double)arg1;
- (void)setSupportByStrokeIdentifier:(id)arg1;
- (bool)updateByRemovingStrokeIdentifier:(id)arg1;

@end
