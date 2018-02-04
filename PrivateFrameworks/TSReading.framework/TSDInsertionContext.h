/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDInsertionContext : NSObject

@property (nonatomic, readonly) bool fromDragToInsertController;
@property (nonatomic, readonly) bool hasPreferredCenter;
@property (nonatomic, readonly) bool insertFloating;
@property (nonatomic, readonly) bool insertFromDrag;
@property (nonatomic, readonly) bool insertWillBeDiscarded;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } preferredCenter;
@property (getter=isPreferredCenterRequired, nonatomic, readonly) bool preferredCenterRequired;
@property (nonatomic, readonly) bool shouldEndEditing;

+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint { double x1; double x2; })arg1 required:(bool)arg2 fromDragToInsertController:(bool)arg3 insertWillBeDiscarded:(bool)arg4;
+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint { double x1; double x2; })arg1 required:(bool)arg2 shouldEndEditing:(bool)arg3 fromDragToInsertController:(bool)arg4 insertWillBeDiscarded:(bool)arg5;
+ (id)nonInteractiveFloatingInsertionContext;
+ (id)nonInteractiveInsertionContext;

- (bool)fromDragToInsertController;
- (bool)hasPreferredCenter;
- (id)init;
- (bool)insertFloating;
- (bool)insertFromDrag;
- (bool)insertWillBeDiscarded;
- (bool)isInteractive;
- (bool)isPreferredCenterRequired;
- (struct CGPoint { double x1; double x2; })preferredCenter;
- (bool)shouldEndEditing;

@end
