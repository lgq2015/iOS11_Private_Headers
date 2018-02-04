/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAResultSelected : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *processedAudioDuration;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *resultId;
@property (readonly) Class superclass;

+ (id)resultSelected;
+ (id)resultSelectedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)processedAudioDuration;
- (bool)requiresResponse;
- (id)resultId;
- (void)setProcessedAudioDuration:(id)arg1;
- (void)setResultId:(id)arg1;

@end
