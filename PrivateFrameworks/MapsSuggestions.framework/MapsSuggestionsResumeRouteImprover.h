/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsResumeRouteImprover : MapsSuggestionsBaseImprover <MapsSuggestionsImprover>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (bool)isEnabled;

- (void)_setDecayingWeightForEntry:(id)arg1;
- (bool)improveEntry:(id)arg1;

@end
