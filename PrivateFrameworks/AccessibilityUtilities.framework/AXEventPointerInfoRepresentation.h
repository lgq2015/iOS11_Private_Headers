/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventPointerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSCopying, NSSecureCoding> {
    double  _pointerButtonClickCount;
    double  _pointerButtonMask;
    double  _pointerButtonNumber;
    double  _pointerButtonPressure;
    double  _pointerX;
    double  _pointerY;
    double  _pointerZ;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double pointerButtonClickCount;
@property (nonatomic) double pointerButtonMask;
@property (nonatomic) double pointerButtonNumber;
@property (nonatomic) double pointerButtonPressure;
@property (nonatomic) double pointerX;
@property (nonatomic) double pointerY;
@property (nonatomic) double pointerZ;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)accessibilityEventRepresentationTabularDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)pointerButtonClickCount;
- (double)pointerButtonMask;
- (double)pointerButtonNumber;
- (double)pointerButtonPressure;
- (double)pointerX;
- (double)pointerY;
- (double)pointerZ;
- (void)setPointerButtonClickCount:(double)arg1;
- (void)setPointerButtonMask:(double)arg1;
- (void)setPointerButtonNumber:(double)arg1;
- (void)setPointerButtonPressure:(double)arg1;
- (void)setPointerX:(double)arg1;
- (void)setPointerY:(double)arg1;
- (void)setPointerZ:(double)arg1;

@end
