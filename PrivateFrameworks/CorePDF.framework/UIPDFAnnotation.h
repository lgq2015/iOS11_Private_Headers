/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFAnnotation : NSObject {
    UIPDFAnnotationController * _annotationController;
    NSString * _annotationID;
    UIPDFAnnotationView * _annotationView;
    void * _appearanceStream;
    NSString * _associatedAnnotationID;
    struct CGColor { } * _color;
    NSString * _contents;
    struct CGPDFDictionary { } * _dictionary;
    CALayer * _drawingLayer;
    bool  _hidden;
    long long  _index;
    UIPDFPage * _page;
    struct CGPDFString { } * _pdfContents;
    UIPDFPopupAnnotation * _popup;
    NSMutableArray * _quadPoints;
    UIPDFSelection * _selection;
    unsigned long long  _tag;
    id  data;
    bool  editable;
}

@property (nonatomic) UIPDFAnnotationController *annotationController;
@property (nonatomic, retain) UIPDFAnnotationView *annotationView;
@property (nonatomic, retain) NSString *associatedAnnotationID;
@property (nonatomic, retain) NSString *contents;
@property (nonatomic, retain) id data;
@property (nonatomic, retain) CALayer *drawingLayer;
@property (nonatomic) bool editable;
@property (nonatomic) long long index;
@property (nonatomic) UIPDFPage *page;
@property (nonatomic) UIPDFPopupAnnotation *popup;
@property (nonatomic, readonly) bool recognizeGestures;
@property (nonatomic) UIPDFSelection *selection;
@property (nonatomic) unsigned long long tag;

+ (id)newAnnotationWithPage:(id)arg1 fromArchive:(id)arg2;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })Rect;
- (id)annotationController;
- (id)annotationID;
- (int)annotationType;
- (id)annotationView;
- (id)archive;
- (id)associatedAnnotationID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGColor { }*)color;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)contents;
- (id)data;
- (void)dealloc;
- (id)descriptionHOLD;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)drawingLayer;
- (bool)editable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)getImageNamed:(id)arg1 ofType:(id)arg2;
- (bool)hasPopUp;
- (bool)hidden;
- (long long)index;
- (id)init;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1;
- (void)makeQuadpointsFrom:(id)arg1;
- (struct CGPath { }*)newPathFromQuadPoints;
- (id)newSelection;
- (id)page;
- (const char *)pdfContents;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popUpAnnotationRect;
- (id)popup;
- (bool)recognizeGestures;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectIn:(struct CGPDFArray { }*)arg1;
- (id)selection;
- (void)setAnnotationController:(id)arg1;
- (void)setAnnotationID:(id)arg1;
- (void)setAnnotationView:(id)arg1;
- (void)setAssociatedAnnotationID:(id)arg1;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setContents:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDrawingLayer:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setIndex:(long long)arg1;
- (void)setPage:(id)arg1;
- (void)setPageView:(id)arg1;
- (void)setPopup:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)setTag:(unsigned long long)arg1;
- (unsigned long long)tag;
- (Class)viewClass;

@end
