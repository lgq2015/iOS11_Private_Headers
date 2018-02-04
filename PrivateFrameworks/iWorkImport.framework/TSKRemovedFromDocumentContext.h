/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKRemovedFromDocumentContext : NSObject

+ (id)hidingContext;
+ (id)movingContext;

- (id)undoContext;
- (bool)wasHidden;
- (bool)wasMoved;

@end
