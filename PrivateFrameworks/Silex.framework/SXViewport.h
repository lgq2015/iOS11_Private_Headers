/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXViewport : NSObject {
    unsigned long long  _appearState;
    NSHashTable * _appearStateListeners;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    NSHashTable * _boundsListeners;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    NSHashTable * _contentFrameListeners;
    struct CGSize { 
        double width; 
        double height; 
    }  _documentSize;
    NSHashTable * _documentSizeListeners;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _dynamicBounds;
    NSHashTable * _dynamicBoundsListeners;
    bool  _groupChanges;
    long long  _interfaceOrientation;
    NSHashTable * _interfaceOrientationListeners;
    UIScrollView * _view;
    SXViewport * _viewportBeforeUpdates;
}

@property (nonatomic) unsigned long long appearState;
@property (nonatomic, retain) NSHashTable *appearStateListeners;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, retain) NSHashTable *boundsListeners;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, retain) NSHashTable *contentFrameListeners;
@property (nonatomic) struct CGSize { double x1; double x2; } documentSize;
@property (nonatomic, retain) NSHashTable *documentSizeListeners;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } dynamicBounds;
@property (nonatomic, retain) NSHashTable *dynamicBoundsListeners;
@property (nonatomic) bool groupChanges;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, retain) NSHashTable *interfaceOrientationListeners;
@property (nonatomic, readonly) bool isPopulated;
@property (nonatomic, readonly) UIScrollView *view;
@property (nonatomic, retain) SXViewport *viewportBeforeUpdates;

- (void).cxx_destruct;
- (void)addViewportChangeListener:(id)arg1 forOptions:(unsigned long long)arg2;
- (unsigned long long)appearState;
- (void)appearStateChangedFromState:(unsigned long long)arg1;
- (id)appearStateListeners;
- (void)beginUpdates;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)boundsListeners;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (void)contentFrameDidChangeFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)contentFrameListeners;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToViewportCoordinateSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (id)debugDescriptionForViewport:(id)arg1;
- (id)description;
- (struct CGSize { double x1; double x2; })documentSize;
- (void)documentSizeDidChangeFromSize:(struct CGSize { double x1; double x2; })arg1;
- (id)documentSizeListeners;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dynamicBounds;
- (void)dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)dynamicBoundsListeners;
- (void)endUpdates;
- (bool)groupChanges;
- (id)initWithView:(id)arg1;
- (long long)interfaceOrientation;
- (void)interfaceOrientationChangedFromOrientation:(long long)arg1;
- (id)interfaceOrientationListeners;
- (bool)isPopulated;
- (void)removeViewportChangeListener:(id)arg1 forOptions:(unsigned long long)arg2;
- (void)reset;
- (void)setAppearState:(unsigned long long)arg1;
- (void)setAppearStateListeners:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBoundsListeners:(id)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentFrameListeners:(id)arg1;
- (void)setDocumentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDocumentSizeListeners:(id)arg1;
- (void)setDynamicBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDynamicBoundsListeners:(id)arg1;
- (void)setGroupChanges:(bool)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setInterfaceOrientationListeners:(id)arg1;
- (void)setViewportBeforeUpdates:(id)arg1;
- (id)stringForAppearState:(unsigned long long)arg1;
- (id)stringFroInterfaceOrientation:(long long)arg1;
- (id)view;
- (id)viewportBeforeUpdates;

@end
