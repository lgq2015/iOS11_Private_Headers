/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteEtaDescription : NSObject {
    NSString * _etaText;
    unsigned char  _glyphType;
    unsigned char  _tollCurrencyType;
}

@property (nonatomic, readonly) NSString *etaText;
@property (nonatomic, readonly) unsigned char glyphType;
@property (nonatomic, readonly) unsigned char tollCurrencyType;

- (void)dealloc;
- (id)etaText;
- (unsigned char)glyphType;
- (unsigned long long)hash;
- (id)initWithEtaText:(id)arg1;
- (id)initWithEtaText:(id)arg1 glyphType:(unsigned char)arg2 tollCurrencyType:(unsigned char)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned char)tollCurrencyType;

@end
