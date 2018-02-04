/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCContentSizeLayoutConstraint : NSLayoutConstraint {
    double  _additionalConstant;
    bool  _autoUpdatingConstantShrinks;
    id  _autoitem;
    id /* block */  _constantLoadingBlock;
    double  _defaultConstant;
    bool  _isConstantUpdatingConstraint;
    id  _preferredContentSizeDidChangeObserver;
    NSString * _textStyle;
    double  _textStyleDefaultBodyLeading;
}

@property (nonatomic) double additionalConstant;
@property (nonatomic) bool autoUpdatingConstantShrinks;
@property (nonatomic, copy) id /* block */ constantLoadingBlock;
@property (nonatomic) double defaultConstant;
@property (nonatomic, copy) NSString *textStyle;

+ (id)_constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(long long)arg3 relatedBy:(long long)arg4 toItem:(id)arg5 attribute:(long long)arg6 multiplier:(double)arg7 defaultConstant:(double)arg8 additionalConstant:(double)arg9 initialize:(bool)arg10;
+ (double)_maximumWidthOfStrings:(id)arg1 withFont:(id)arg2;
+ (id)baselineConstraintForAutoitem:(id)arg1 relation:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 defaultConstant:(double)arg5;
+ (id)baselineConstraintForView:(id)arg1 attribute:(long long)arg2 relation:(long long)arg3 toAutoitem:(id)arg4 defaultConstant:(double)arg5;
+ (id)constraintForAutoitem:(id)arg1 additionalConstant:(double)arg2 constantLoadingBlock:(id /* block */)arg3;
+ (id)constraintForAutoitem:(id)arg1 additionalConstant:(double)arg2 constantWidthSizingStringsLoadingBlock:(id /* block */)arg3;
+ (id)constraintForAutoitem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 defaultConstant:(double)arg7;
+ (id)constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(long long)arg3 relatedBy:(long long)arg4 toItem:(id)arg5 attribute:(long long)arg6 multiplier:(double)arg7 defaultConstant:(double)arg8;

- (void).cxx_destruct;
- (double)_defaultConstantByFixingUpDefaultConstant:(double)arg1;
- (void)_forceUpdatePreferredContentSize;
- (void)_reloadPreferredContentSize:(bool)arg1;
- (void)_updatePreferredContentSize;
- (double)additionalConstant;
- (bool)autoUpdatingConstantShrinks;
- (id /* block */)constantLoadingBlock;
- (void)dealloc;
- (double)defaultConstant;
- (void)setAdditionalConstant:(double)arg1;
- (void)setAutoUpdatingConstantShrinks:(bool)arg1;
- (void)setConstantLoadingBlock:(id /* block */)arg1;
- (void)setDefaultConstant:(double)arg1;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;

@end
