/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

@interface SASProximityInformationAction : SASProximityAction {
    SASProximityInformation * _information;
}

@property (retain) SASProximityInformation *information;

+ (unsigned long long)actionID;

- (void).cxx_destruct;
- (bool)hasResponse;
- (id)information;
- (id)init;
- (id)responsePayload;
- (void)setInformation:(id)arg1;
- (void)setResponseFromDictionary:(id)arg1;

@end
