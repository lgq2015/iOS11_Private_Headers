/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNManipulator : NSObject {
    unsigned short  _action;
    union { 
        struct { 
            unsigned short selectedAxis; 
            /* Warning: Unrecognized filer type: '"' using 'void*' */ void*originalPosition; 
        } axisMove; 
        struct { 
            unsigned short selectedPlane; 
            void*originalPosition; 
        } planeMove; 
        struct { 
            unsigned short selectedAxis; 
            struct CGPoint { 
                double x; 
                double y; 
            } originalMouseLocation; 
            float rotationSign; 
            void*originalRotation; 
        } axisRotate; 
    }  _actionData;
    SCNAuthoringEnvironment * _authoringEnvironment;
    NSOrderedSet * _cloneSet;
    bool  _cloning;
    bool  _isMouseDown;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void**positions; 
    }  _originalData;
    unsigned int  _originalDataCount;
    bool  _readonly;
    long long  _snapToAlignCount;
    struct { float x1; void *x2; float x3; } * _snapToAlignOnX;
    struct { float x1; void *x2; float x3; } * _snapToAlignOnY;
    struct { float x1; void *x2; float x3; } * _snapToAlignOnZ;
    NSMutableIndexSet * _snapXIndexes;
    NSMutableIndexSet * _snapYIndexes;
    NSMutableIndexSet * _snapZIndexes;
    NSOrderedSet * _targets;
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _worldInitialMatrix;
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _worldMatrix;
    long long  _xAlignment;
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _xAxisToZAxisTransform;
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _xyPlaneToXZPlaneTransform;
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _xyPlaneToYZPlaneTransform;
    long long  _yAlignment;
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _yAxisToZAxisTransform;
    long long  _zAlignment;
}

@property (readonly) SCNAuthoringEnvironment *authoringEnvironment;
@property (nonatomic) bool readonly;
@property (nonatomic, retain) SCNNode *target;
@property (nonatomic, retain) NSOrderedSet *targets;
@property (readonly) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } transform;
@property (nonatomic) long long xAlignment;
@property (nonatomic) long long yAlignment;
@property (nonatomic) long long zAlignment;

- (bool)_applyWithEvent:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; double x8; double x9; })arg1;
- (void)_deleteOriginalData;
- (void)_prepareSnapToAlignData:(void *)arg1 minOffset:(void *)arg2 maxOffset:(void *)arg3; // needs 3 arg types, found 1: unsigned short
- (void)_saveOriginalData;
- (void)_setAuthoringEnvironment:(id)arg1;
- (void)_snapPositionToAlign:(void *)arg1 original:(void *)arg2 unit:(void *)arg3 axisMove:(void *)arg4 rayStart:(void *)arg5 rayDir:(void *)arg6 didSnap:(void *)arg7 snapIndexes:(void *)arg8; // needs 8 arg types, found 5: struct SCNVector3 { float x1; float x2; float x3; }, double, bool, bool*, long long*
- (void)_updateActionWithEvent:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; double x8; double x9; })arg1;
- (void)_updateCloneStateWithEvent:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; double x8; double x9; })arg1;
- (void)addClonesToScene;
- (id)authoringEnvironment;
- (void)clearSnapIndexes;
- (id)copy;
- (void)dealloc;
- (void)draw;
- (long long)effectiveEditingSpace;
- (id)init;
- (bool)isDragging;
- (bool)mouseDown:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; double x8; double x9; })arg1;
- (bool)mouseDragged:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; double x8; double x9; })arg1;
- (bool)mouseMoved:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; double x8; double x9; })arg1;
- (bool)mouseUp:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; double x8; double x9; })arg1;
- (void)prepareSnapToAlignData;
- (void)prepareSnapToAlignDataIfNeeded;
- (bool)readonly;
- (void)removeClonesFromScene;
- (id)scene;
- (void)setReadonly:(bool)arg1;
- (void)setTarget:(id)arg1;
- (void)setTargets:(id)arg1;
- (void)setXAlignment:(long long)arg1;
- (void)setYAlignment:(long long)arg1;
- (void)setZAlignment:(long long)arg1;
- (id)setupClones;
- (id)snapGuideIndexesOnAxis:(unsigned long long)arg1;
- (const struct { float x1; void *x2; float x3; }*)snapInfoAtIndex:(unsigned long long)arg1 axis:(unsigned long long)arg2;
- (id)target;
- (id)targets;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transform;
- (void)updateItemsPosition;
- (void)updateItemsRotation;
- (void)validateClones;
- (long long)xAlignment;
- (long long)yAlignment;
- (long long)zAlignment;

@end
