/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFBCWriteDnuForSubmission : SABaseClientBoundCommand <CFLocalAceHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *filePrefix;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *submittedData;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)writeDnuForSubmission;
+ (id)writeDnuForSubmissionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)filePrefix;
- (id)groupIdentifier;
- (void)handleWithCompletion:(id /* block */)arg1;
- (bool)requiresResponse;
- (void)setFilePrefix:(id)arg1;
- (void)setSubmittedData:(id)arg1;
- (id)submittedData;

@end
