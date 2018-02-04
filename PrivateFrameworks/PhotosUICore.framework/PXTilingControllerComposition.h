/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTilingControllerComposition : NSObject {
    <PXTilingScrollController> * __scrollController;
    bool  _active;
    <PXTilingControllerCompositionInput> * _input;
    <PXTilingControllerCompositionObserver> * _observer;
    <PXTilingControllerCompositionOutput> * _output;
    NSSet * _tilingControllers;
}

@property (setter=_setScrollController:, nonatomic) <PXTilingScrollController> *_scrollController;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <PXTilingControllerCompositionInput> *input;
@property (nonatomic) <PXTilingControllerCompositionObserver> *observer;
@property (nonatomic) <PXTilingControllerCompositionOutput> *output;
@property (nonatomic, readonly, copy) NSSet *tilingControllers;

- (void).cxx_destruct;
- (id)_scrollController;
- (void)_setScrollController:(id)arg1;
- (id)input;
- (void)invalidateComposition;
- (void)invalidateCompositionWithContext:(id)arg1;
- (bool)isActive;
- (id)observer;
- (id)output;
- (void)setActive:(bool)arg1;
- (void)setInput:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setOutput:(id)arg1;
- (id)tilingControllers;
- (void)updateComposition;

@end
