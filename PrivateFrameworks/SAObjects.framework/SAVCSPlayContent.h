/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAVCSPlayContent : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, copy) NSURL *hiresTrailerUri;
@property (nonatomic, copy) NSURL *lowresTrailerUri;
@property (nonatomic) bool playTrailer;
@property (nonatomic, copy) NSString *utsId;

+ (id)playContent;
+ (id)playContentWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hiresTrailerUri;
- (id)lowresTrailerUri;
- (bool)playTrailer;
- (bool)requiresResponse;
- (void)setContentType:(id)arg1;
- (void)setHiresTrailerUri:(id)arg1;
- (void)setLowresTrailerUri:(id)arg1;
- (void)setPlayTrailer:(bool)arg1;
- (void)setUtsId:(id)arg1;
- (id)utsId;

@end