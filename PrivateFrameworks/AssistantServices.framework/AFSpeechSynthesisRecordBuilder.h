/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechSynthesisRecordBuilder : NSObject {
    AFSpeechSynthesisRecord * _baseObject;
    unsigned long long  _beginTimestamp;
    struct _builderFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasUtterance : 1; 
        unsigned int hasBeginTimestamp : 1; 
        unsigned int hasEndTimestamp : 1; 
    }  _builderFlags;
    unsigned long long  _endTimestamp;
    NSString * _utterance;
}

- (void).cxx_destruct;
- (id)build;
- (id)init;
- (id)initWithBaseObject:(id)arg1;
- (id)setBeginTimestamp:(unsigned long long)arg1;
- (id)setEndTimestamp:(unsigned long long)arg1;
- (id)setUtterance:(id)arg1;

@end
