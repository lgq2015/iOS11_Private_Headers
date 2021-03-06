/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNTextObservation : VNDetectedObjectObservation {
    NSArray * _characterBoxes;
    NSString * _text;
}

@property (nonatomic, readonly, copy) NSArray *characterBoxes;
@property (nonatomic, readonly, copy) NSString *text;

+ (bool)supportsSecureCoding;
+ (id)textObservationWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (id)characterBoxes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCharacterBoxes:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
