/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDraggingItem : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    <_UIDraggingItemVisualTarget> * _destinationVisualTarget;
    unsigned long long  _dirtyReasons;
    NSItemProvider * _dropItemProvider;
    UIView * _droppedSnapshotView;
    id /* block */  _droppedSnapshotViewProvider;
    NSArray * _imageComponents;
    id /* block */  _imageComponentsProvider;
    id  _localObject;
    long long  _mutability;
    unsigned long long  _options;
    _DUIPreview * _preview;
    id /* block */  _previewProvider;
    id  _privateLocalContext;
    NSItemProvider * _provider;
    double  _rotationAngle;
    double  _scale;
    <_UIDraggingItemVisualTarget> * _sourceVisualTarget;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic) <_UIDraggingItemVisualTarget> *destinationVisualTarget;
@property (getter=_isDirty, nonatomic, readonly) bool dirty;
@property (getter=_dirtyReasons, setter=_setDirtyReasons:, nonatomic) unsigned long long dirtyReasons;
@property (getter=_dropItemProvider, setter=_setDropItemProvider:, nonatomic, retain) NSItemProvider *dropItemProvider;
@property (nonatomic, retain) UIView *droppedSnapshotView;
@property (getter=_droppedSnapshotViewProvider, setter=_setDroppedSnapshotViewProvider:, nonatomic, copy) id /* block */ droppedSnapshotViewProvider;
@property (nonatomic, readonly, copy) NSArray *imageComponents;
@property (nonatomic, copy) id /* block */ imageComponentsProvider;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageFrame;
@property (nonatomic, retain) id localObject;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (getter=_mutability, setter=_setMutability:, nonatomic) long long mutability;
@property (nonatomic) unsigned long long options;
@property (nonatomic, readonly) NSItemProvider *provider;
@property (nonatomic) double rotationAngle;
@property (nonatomic) double scale;
@property (nonatomic) <_UIDraggingItemVisualTarget> *sourceVisualTarget;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (void)_clearDirty;
- (unsigned long long)_dirtyReasons;
- (id)_dropItemProvider;
- (id /* block */)_droppedSnapshotViewProvider;
- (id)_imageComponents;
- (id)_initWithInternalItem:(id)arg1;
- (bool)_isDirty;
- (long long)_mutability;
- (id)_preview;
- (id /* block */)_previewProvider;
- (id)_privateLocalContext;
- (void)_setDirtyForReason:(unsigned long long)arg1;
- (void)_setDirtyReasons:(unsigned long long)arg1;
- (void)_setDropItemProvider:(id)arg1;
- (void)_setDroppedSnapshotViewProvider:(id /* block */)arg1;
- (void)_setMutability:(long long)arg1;
- (void)_setPreviewProvider:(id /* block */)arg1;
- (void)_setPrivateLocalContext:(id)arg1;
- (void)_updateFromInternalItem:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (id)description;
- (id)destinationVisualTarget;
- (id)droppedSnapshotView;
- (id)imageComponents;
- (id /* block */)imageComponentsProvider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (id)initWithProvider:(id)arg1 metadata:(id)arg2;
- (id)initWithProvider:(id)arg1 sourceVisualTarget:(id)arg2 metadata:(id)arg3;
- (id)localObject;
- (id)metadata;
- (unsigned long long)options;
- (id)provider;
- (double)rotationAngle;
- (double)scale;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDestinationVisualTarget:(id)arg1;
- (void)setDroppedSnapshotView:(id)arg1;
- (void)setImageComponentsProvider:(id /* block */)arg1;
- (void)setImageContents:(id)arg1;
- (void)setLocalObject:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setSourceVisualTarget:(id)arg1;
- (id)sourceVisualTarget;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_draggingItemForAsset:(id)arg1 sourceVisualTarget:(id)arg2 hintIndexPath:(id)arg3 imageComponentsProvider:(id /* block */)arg4;

@end
