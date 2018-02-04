/* made by EzioChiu.
 */

@protocol VTXPCService <NSObject>

@required

- (oneway void)clearVoiceTriggerCount;
- (oneway void)enableTriggerEventXPCNotification:(bool)arg1;
- (oneway void)enableVoiceTrigger:(bool)arg1 withAssertion:(NSString *)arg2 timestamp:(double)arg3;
- (oneway void)getFirstChanceAudioBufferWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (oneway void)getFirstChanceTriggeredDateWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, void*
- (oneway void)getFirstChanceVTEventInfoWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (oneway void)getTestResponse:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (oneway void)getVoiceTriggerCountWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (oneway void)isLastTriggerFollowedBySpeechWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (oneway void)notifySecondChanceRequest;
- (oneway void)notifyTriggerEventRequest;
- (oneway void)notifyVoiceTriggeredSiriSessionCancelled:(NSString *)arg1;
- (oneway void)queryLastTriggerEventTypeWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned char, void*
- (oneway void)requestAudioCapture:(double)arg1;
- (oneway void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (oneway void)resetAssertions;
- (oneway void)setPhraseSpotterBypassing:(bool)arg1 timeout:(double)arg2 timestamp:(double)arg3;

@end
