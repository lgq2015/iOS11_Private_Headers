/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassFieldTemplate : NSObject {
    NSNumber * _boxedSuppressesEmptyLabel;
    NSNumber * _boxedSuppressesLabel;
    NSNumber * _boxedTextAlignment;
    NSNumber * _boxedValueCanWrap;
    NSNumber * _boxedVerticalPadding;
    UIFont * _labelFont;
    UIFont * _valueFont;
    Class  _viewSubclass;
}

@property (nonatomic, retain) NSNumber *boxedSuppressesEmptyLabel;
@property (nonatomic, retain) NSNumber *boxedSuppressesLabel;
@property (nonatomic, retain) NSNumber *boxedTextAlignment;
@property (nonatomic, retain) NSNumber *boxedValueCanWrap;
@property (nonatomic, retain) NSNumber *boxedVerticalPadding;
@property (nonatomic, retain) UIFont *labelFont;
@property (nonatomic) bool suppressesEmptyLabel;
@property (nonatomic) bool suppressesLabel;
@property (nonatomic) long long textAlignment;
@property (nonatomic) bool valueCanWrap;
@property (nonatomic, retain) UIFont *valueFont;
@property (nonatomic) double verticalPadding;
@property (nonatomic, retain) Class viewSubclass;

+ (id)_templateByResolvingTemplate:(id)arg1 withDefault:(id)arg2;
+ (id)fieldTemplateWithTextAlignment:(long long)arg1;
+ (id)fieldTemplateWithVerticalPadding:(double)arg1;
+ (id)fieldTemplateWithViewSubclass:(Class)arg1;

- (void).cxx_destruct;
- (id)boxedSuppressesEmptyLabel;
- (id)boxedSuppressesLabel;
- (id)boxedTextAlignment;
- (id)boxedValueCanWrap;
- (id)boxedVerticalPadding;
- (id)labelFont;
- (void)setBoxedSuppressesEmptyLabel:(id)arg1;
- (void)setBoxedSuppressesLabel:(id)arg1;
- (void)setBoxedTextAlignment:(id)arg1;
- (void)setBoxedValueCanWrap:(id)arg1;
- (void)setBoxedVerticalPadding:(id)arg1;
- (void)setLabelFont:(id)arg1;
- (void)setSuppressesEmptyLabel:(bool)arg1;
- (void)setSuppressesLabel:(bool)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setValueCanWrap:(bool)arg1;
- (void)setValueFont:(id)arg1;
- (void)setVerticalPadding:(double)arg1;
- (void)setViewSubclass:(Class)arg1;
- (bool)suppressesEmptyLabel;
- (bool)suppressesLabel;
- (long long)textAlignment;
- (bool)valueCanWrap;
- (id)valueFont;
- (double)verticalPadding;
- (Class)viewSubclass;

@end
