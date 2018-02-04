/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneCallEmergencySnippet : SAPhoneCallSnippet

@property (nonatomic, retain) SAUIColor *bodyBackgroundColor;
@property (nonatomic, retain) SAUIColor *bodyTextColor;
@property (nonatomic) long long countDownSeconds;
@property (nonatomic, retain) SAUIColor *headerBackgroundColor;
@property (nonatomic, retain) SAUIColor *headerTextColor;

+ (id)callEmergencySnippet;
+ (id)callEmergencySnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)bodyBackgroundColor;
- (id)bodyTextColor;
- (long long)countDownSeconds;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)headerBackgroundColor;
- (id)headerTextColor;
- (void)setBodyBackgroundColor:(id)arg1;
- (void)setBodyTextColor:(id)arg1;
- (void)setCountDownSeconds:(long long)arg1;
- (void)setHeaderBackgroundColor:(id)arg1;
- (void)setHeaderTextColor:(id)arg1;

@end
