/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaSocialPhotoUpload : NSObject <NSCopying> {
    NSString * _MD5;
    bool  _hasAlpha;
    unsigned long long  _height;
    unsigned long long  _length;
    NSString * _token;
    NSString * _tokenType;
    NSString * _type;
    NSNumber * _uniqueIdentifier;
    unsigned long long  _width;
}

@property (nonatomic, copy) NSString *MD5;
@property (nonatomic) bool hasAlpha;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long length;
@property (nonatomic, copy) NSString *token;
@property (nonatomic, copy) NSString *tokenType;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSNumber *uniqueIdentifier;
@property (nonatomic) unsigned long long width;

- (void).cxx_destruct;
- (id)MD5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasAlpha;
- (unsigned long long)height;
- (id)initWithUploadDictionary:(id)arg1;
- (unsigned long long)length;
- (void)setHasAlpha:(bool)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setMD5:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setTokenType:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (id)token;
- (id)tokenType;
- (id)type;
- (id)uniqueIdentifier;
- (unsigned long long)width;

@end
