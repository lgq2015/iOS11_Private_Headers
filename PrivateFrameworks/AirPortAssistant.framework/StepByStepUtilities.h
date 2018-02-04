/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface StepByStepUtilities : NSObject

+ (long long)autoGuessRecommendationToMatrixTag:(id)arg1;
+ (id)findSourceBaseByName:(id)arg1 fromParamDict:(id)arg2;
+ (id)findSourceBaseByRadioName:(id)arg1 fromParamDict:(id)arg2;
+ (id)findSourceConfigByName:(id)arg1 fromParamDict:(id)arg2;
+ (id)findSourceNetworkByName:(id)arg1 fromParamDict:(id)arg2;
+ (void)formatRecommendation:(id)arg1 fromParamDict:(id)arg2 forStep:(int)arg3 restoreString:(id*)arg4 restoreSpecificString:(id*)arg5 dontRecommendString:(id*)arg6;
+ (int)getDeviceKindFromParamDict:(id)arg1;
+ (unsigned int)getProductIDFromParamDict:(id)arg1;
+ (id)getProductLocalizedStringWithFormat:(id)arg1 fromParamDict:(id)arg2;
+ (int)matrixTagToSelectorChoice:(long long)arg1;
+ (id)nameForNetworkOrDevice:(id)arg1;
+ (id)productIDForNetworkOrDevice:(id)arg1;
+ (long long)selectorChoiceToMatrixTag:(int)arg1;
+ (id)selectorChoiceToReplaceOption:(int)arg1;

@end
