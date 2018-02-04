/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXFontAttributes : NSObject <SXFontAttributes> {
    NSString * _familyName;
    long long  _style;
    long long  _weight;
    long long  _width;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *familyName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long weight;
@property (nonatomic, readonly) long long width;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)familyName;
- (unsigned long long)hash;
- (id)initWithFamilyName:(id)arg1 weight:(long long)arg2 width:(long long)arg3 style:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (long long)style;
- (long long)weight;
- (long long)width;

@end
