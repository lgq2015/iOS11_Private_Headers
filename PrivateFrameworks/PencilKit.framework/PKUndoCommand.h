/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKUndoCommand : NSObject {
    NSString * _actionName;
    NSUUID * _drawingUUID;
}

@property (nonatomic, readonly) NSString *actionName;
@property (nonatomic, readonly) NSUUID *drawingUUID;

- (void).cxx_destruct;
- (id)actionName;
- (void)applyToDrawing:(id)arg1;
- (id)drawingUUID;
- (id)initWithDrawingUUID:(id)arg1 actionName:(id)arg2;
- (id)inverted;
- (void)registerWithUndoManager:(id)arg1 target:(id)arg2 selector:(SEL)arg3;

@end
