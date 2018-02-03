/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPublicDraggingSessionDestination : NSObject <_UIDraggingInfo> {
    _UIInternalDraggingSessionDestination * _internalSessionDestination;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long draggingSourceOperationMask;
@property (readonly) unsigned long long hash;
@property (getter=_internalSessionDestination, nonatomic, readonly) _UIInternalDraggingSessionDestination *internalSessionDestination;
@property (nonatomic, readonly) _UIDraggingSession *localDraggingSession;
@property (nonatomic) long long numberOfValidItemsForDrop;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_internalSessionDestination;
- (struct CGPoint { double x1; double x2; })draggingLocationInCoordinateSpace:(id)arg1;
- (unsigned long long)draggingSourceOperationMask;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 acceptableTypeIdentifiers:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithInternalSessionDestination:(id)arg1;
- (id)localDraggingSession;
- (long long)numberOfValidItemsForDrop;
- (id)progress;
- (void)setNumberOfValidItemsForDrop:(long long)arg1;

@end