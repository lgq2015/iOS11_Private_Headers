/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUTSPlayTrailer : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *utsId;

+ (id)playTrailer;
+ (id)playTrailerWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setUtsId:(id)arg1;
- (id)utsId;

@end
