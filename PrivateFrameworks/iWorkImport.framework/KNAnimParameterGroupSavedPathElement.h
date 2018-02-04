/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimParameterGroupSavedPathElement : NSObject <NSCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _cp1;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cp2;
    unsigned long long  _elementType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _toPoint;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } cp1;
@property (nonatomic) struct CGPoint { double x1; double x2; } cp2;
@property (nonatomic) unsigned long long elementType;
@property (nonatomic) struct CGPoint { double x1; double x2; } toPoint;

- (struct CGPoint { double x1; double x2; })cp1;
- (struct CGPoint { double x1; double x2; })cp2;
- (unsigned long long)elementType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCp1:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCp2:(struct CGPoint { double x1; double x2; })arg1;
- (void)setElementType:(unsigned long long)arg1;
- (void)setToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })toPoint;

@end
