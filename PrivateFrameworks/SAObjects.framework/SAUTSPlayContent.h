/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUTSPlayContent : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *utsId;

+ (id)playContent;
+ (id)playContentWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setUtsId:(id)arg1;
- (id)utsId;

@end
