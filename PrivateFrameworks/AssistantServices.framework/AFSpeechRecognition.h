/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechRecognition : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _phrases;
    NSArray * _utterances;
}

@property (nonatomic, readonly, copy) NSArray *phrases;
@property (nonatomic, readonly, copy) NSArray *utterances;

+ (id)fakeOneBestFromPhrases:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aceRecognition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhrases:(id)arg1;
- (id)initWithPhrases:(id)arg1 utterances:(id)arg2;
- (id)phrases;
- (id)utterances;

@end
