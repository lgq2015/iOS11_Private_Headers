/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INTemperatureResolutionResult : INIntentResolutionResult <INTemperatureResolutionResultExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)confirmationRequiredWithTemperatureToConfirm:(id)arg1;
+ (id)disambiguationWithTemperaturesToDisambiguate:(id)arg1;
+ (id)successWithResolvedTemperature:(id)arg1;

@end
