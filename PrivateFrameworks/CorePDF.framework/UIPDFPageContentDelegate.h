/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPageContentDelegate : NSObject {
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
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _box;
    UIPDFDocument * _document;
    struct CGColor { } * _highlightColor;
    bool  _isCancelled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    CALayer * _owner;
    unsigned long long  _pageIndex;
    unsigned long long  _pageRotation;
    unsigned long long  _threadCount;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    UIPDFPageView * _view;
    struct CGColor { } * _white;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } box;
@property (retain) UIPDFDocument *document;
@property struct CGColor { }*highlightColor;
@property bool isCancelled;
@property CALayer *owner;
@property unsigned long long pageIndex;
@property unsigned long long pageRotation;
@property (readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property UIPDFPageView *view;

- (void)addRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toPath:(struct CGPath { }*)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg3 view:(id)arg4 owner:(id)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })box;
- (void)computeTransform;
- (void)dealloc;
- (id)document;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawSelectionLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawSelectionLayerBlockMode:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (struct CGColor { }*)highlightColor;
- (id)init;
- (bool)isCancelled;
- (id)owner;
- (bool)pageHasSelection;
- (unsigned long long)pageIndex;
- (unsigned long long)pageRotation;
- (void)setBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDocument:(id)arg1;
- (void)setHighlightColor:(struct CGColor { }*)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setOwner:(id)arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setPageRotation:(unsigned long long)arg1;
- (void)setView:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (id)view;

@end
