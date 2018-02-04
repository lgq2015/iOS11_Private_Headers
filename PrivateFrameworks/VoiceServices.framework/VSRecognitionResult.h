/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionResult : NSObject

+ (void)initialize;
+ (id)recognitionResultWithModelIdentifier:(id)arg1 classIdentifiers:(id)arg2 values:(id)arg3;

- (id)createHandler;
- (id)description;
- (long long)elementCount;
- (bool)getElementClassIdentifier:(id*)arg1 value:(id*)arg2 atIndex:(long long)arg3;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)modelIdentifier;
- (id)recognitionAction;
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)arg1 withValue:(id)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setRecognitionAction:(id)arg1;
- (id)valueOfFirstElementWithClassIdentifier:(id)arg1;

@end
