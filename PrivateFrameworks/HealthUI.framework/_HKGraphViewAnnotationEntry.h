/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKGraphViewAnnotationEntry : NSObject {
    NSString * _annotation;
    id  _modelCoordinate;
    UIColor * _textColor;
}

@property (nonatomic, retain) NSString *annotation;
@property (nonatomic, retain) id modelCoordinate;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (id)annotation;
- (id)modelCoordinate;
- (void)setAnnotation:(id)arg1;
- (void)setModelCoordinate:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)textColor;

@end
