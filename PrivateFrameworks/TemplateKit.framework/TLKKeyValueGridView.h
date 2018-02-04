/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKKeyValueGridView : NUIContainerGridView {
    NSMutableArray * _keyLabels;
    unsigned long long  _style;
    NSMutableArray * _valueLabels;
}

@property (retain) NSMutableArray *keyLabels;
@property (nonatomic) unsigned long long style;
@property (retain) NSMutableArray *valueLabels;

+ (void)setStylesOnLabels:(id)arg1 withStyle:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)generateLabelForGridWithBold:(bool)arg1;
- (id)init;
- (id)keyLabels;
- (void)setKeyLabels:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setValueLabels:(id)arg1;
- (unsigned long long)style;
- (void)updateWithTuples:(id)arg1 valueColumnIsTrailing:(bool)arg2;
- (id)valueLabels;

@end
