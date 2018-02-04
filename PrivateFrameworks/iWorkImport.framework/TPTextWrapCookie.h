/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPTextWrapCookie : NSObject {
    TSWPColumn * _column;
    NSMutableArray * _floatingWrappables;
    TSDWrapSegments * _interiorWrapSegments;
    TSDLayout<TSWPLayoutTarget> * _target;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _targetInverseTransformInRoot;
    TSUPointerKeyDictionary * _wrapSegmentsInverseTransformInRootDictionary;
}

@property (nonatomic, retain) TSWPColumn *column;
@property (nonatomic, readonly) NSArray *floatingWrappables;
@property (nonatomic, retain) TSDWrapSegments *interiorWrapSegments;
@property (nonatomic) TSDLayout<TSWPLayoutTarget> *target;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } targetInverseTransformInRoot;

+ (id)textWrapCookieForColumn:(id)arg1 targetLayout:(id)arg2;

- (void).cxx_destruct;
- (void)addFloatingWrappable:(id)arg1;
- (id)column;
- (id)floatingWrappables;
- (id)initWithColumn:(id)arg1 targetLayout:(id)arg2;
- (id)interiorWrapSegments;
- (void)setColumn:(id)arg1;
- (void)setInteriorWrapSegments:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetInverseTransformInRoot;
- (id)transformedWrapSegmentsForWrappable:(id)arg1 canvasSpaceToWrapSpaceTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;

@end
