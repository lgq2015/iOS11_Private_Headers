/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsBaseFilter : NSObject <MapsSuggestionsFilter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (bool)isEnabled;

- (bool)shouldKeepEntry:(id)arg1;
- (struct NSString { Class x1; }*)uniqueName;

@end
