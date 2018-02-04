/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDefaultFontAttributes : NSObject <SXTextStyleFontAttributes>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *familyName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long weight;
@property (nonatomic, readonly) unsigned long long weightLabel;
@property (nonatomic, readonly) long long width;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)familyName;
- (bool)isEqual:(id)arg1;
- (long long)style;
- (long long)weight;
- (unsigned long long)weightLabel;
- (long long)width;

@end
